#include "chatwidget.h"
#include "ui_chatwidget.h"

ChatWidget::ChatWidget(User user,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatWidget)
{
    ui->setupUi(this);

    this->user = user;

    ui->chatTextEdit->setReadOnly(true);

    initChatTextEdit();

    connect(ServerReceive::instance(), &ServerReceive::getChatsSuccess, this, &ChatWidget::showChatsListWidegt);
    connect(ServerReceive::instance(), &ServerReceive::receiveMessageSuccess, this, &ChatWidget::receiveMessage);

    //读取不在线时的聊天记录
    connect(ServerReceive::instance(), &ServerReceive::getFriendsUnreadMessagesSuccess, this, &ChatWidget::addFriendsUnreadMessages);

    //connect(ServerReceive::instance(), &ServerReceive::accpetFriendSuccess, this, &ChatWidget::updateChatsList);

}
void ChatWidget::initIcon()
{
    ui->fileButton->setCheckable(true);
    ui->fileButton->setIcon(QIcon(":/images/system/file.png"));
    ui->fileButton->setIconSize(QSize(30, 30)); // 适当缩小尺寸
    ui->fileButton->setFixedSize(40, 40); // 让按钮整体变小
    ui->fileButton->setStyleSheet(R"(
    QPushButton {
        border: none;
        background: transparent;
    }
    QPushButton:pressed {
        transform: scale(0.9); /* 点击时缩小一点 */
    }
    )");

    ui->nameButton->setStyleSheet(R"(
    QPushButton {
        background: transparent;
        color: black;
        font-size: 16px;
        border: none; /* 让背景透明 */
        padding: 5px 10px; /* 增加点击区域 */
    }
    )");
}
void ChatWidget::initChatTextEdit()
{
    QFont font = ui->chatTextEdit->font();
    font.setFamily("微软雅黑");  // 设置字体为微软雅黑（可以选择其他支持中文的字体）
    font.setPointSize(12);       // 设置字体大小
    ui->chatTextEdit->setFont(font);
    ui->chatTextEdit->setAcceptRichText(true);
    ui->chatTextEdit->setPlaceholderText("请输入消息...");  // 设置输入框提示
    //ui->chatTextEdit->setFixedHeight(100);  // 设置合适的高度
    // 确保控件获取焦点
    ui->chatTextEdit->setFocus();

    ui->chatTextEdit->installEventFilter(this);

    initIcon();

    //connect(ui->chatTextEdit, &QTextEdit::focusIn, this, &ChatWidget::updateChattingLast);

    //ui->sendButton->setDefault(true);

    //connect(ui->sendButton, &QPushButton::clicked, this, sendButton_clicked)
}

bool ChatWidget::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter) {
            on_sendButton_clicked();
            return true; // 事件已处理
        }
    }
    return QWidget::eventFilter(obj, event);  // 默认处理其他事件
}


void ChatWidget::showChatsListWidegt(QVector<UserChat> userChatVector)
{

    this->userChatVector.clear();

    std::sort(userChatVector.begin(), userChatVector.end(), [](const UserChat &a, const UserChat &b){
        return a.getChatLastTime() > b.getChatLastTime();
    });
    this->userChatVector = userChatVector;
    ui->chatListWidget->clear();


    QButtonGroup *buttonGroup = new QButtonGroup(this); // 创建按钮组
    // 设置按钮的选中方式为单选（只允许选择一个）
    buttonGroup->setExclusive(true);
    int i = 0;
    for (const UserChat& value : userChatVector) {
        if(value.getChatStatus() == "close"){
            qDebug() << "getChatStatus" << value.getChatStatus();
            continue;
        }
        qDebug() << "id:" << value.getChatId();
        qDebug() << "getChatStatus:" << value.getChatStatus();
        qDebug() << "unread count:" << value.getChatUnreadCount();


        QPushButton *buttonWidget = new QPushButton();
        QHBoxLayout *layout = new QHBoxLayout(buttonWidget);

        QPushButton *friendButton = new QPushButton();
        friendButton->setIcon(QIcon(QPixmap(value.getChatAvatar()).scaled(40, 40)));
        friendButton->setIconSize(QSize(40, 40));
        friendButton->setFixedSize(40, 40);
        friendButton->setFocus();
        buttonWidget->setStyleSheet("cursor: pointer;");

        // 将按钮添加到布局
        layout->addWidget(friendButton);
        buttonWidget->setLayout(layout);


        buttonWidget->setCheckable(true); // 让按钮可选中
        // 将按钮添加到按钮组中
        buttonGroup->addButton(buttonWidget, i++);
        // 按钮点击时更新样式
        connect(buttonWidget, &QPushButton::clicked, [this, value, buttonWidget, layout, buttonGroup](){

            foreach (QAbstractButton *btn, buttonGroup->buttons()) {
                btn->setChecked(false);
                btn->setStyleSheet(R"(
                QPushButton {
                    border: none;
                    background: transparent;
                    color: white;
                    font: bold 25px "SimHei";
                }
            )");
            }

            // 选中当前按钮，设置选中样式
            buttonWidget->setChecked(true);
            buttonWidget->setStyleSheet(R"(
            QPushButton {
                border: none;
                background-color: #D3D3D3;
                color: black;
                font: bold 25px "SimHei";
            }
        )");
            // 其他操作
            ui->chatTextEdit->setReadOnly(false);
            ui->chatWidget->clear();
            UserChat userChat = value;
            updateServerChat(value);
            createFriendChatWidget(userChat);
        });



        QVBoxLayout *vlayout = new QVBoxLayout();
        QLabel *nameLabel =new QLabel(value.getChatName());
        nameLabel->setStyleSheet("font-weight: bold; color: #000000; padding-left: 10px;");
        QLabel *messageLabel =new QLabel(value.getChatLastMessage());
        messageLabel->setStyleSheet("color: #888888; font-size: 10px;");
        vlayout->addWidget(nameLabel);
        vlayout->addWidget(messageLabel);

        QVBoxLayout *vlayout2 = new QVBoxLayout();
        QLabel *timeLabel =new QLabel(value.getChatLastTime());
        timeLabel->setStyleSheet("color: #888888; font-size: 10px;");

        //创建显示未读消息数量的红点
        QLabel *unreadLabel = nullptr;
        if (value.getChatUnreadCount() != 0) {
            unreadLabel = new QLabel(QString::number(value.getChatUnreadCount()));
            unreadLabel->setStyleSheet("background-color: red; color: white; border-radius: 10px; width: 18px; height: 18px; text-align: center;");
            unreadLabel->setAlignment(Qt::AlignCenter);
            unreadLabel->setVisible(true);
        }
        vlayout2->addWidget(unreadLabel);
        vlayout2->addWidget(timeLabel);


        layout->addWidget(friendButton);
        layout->addLayout(vlayout);
        layout->addLayout(vlayout2);
        buttonWidget->setFocus();
        buttonWidget->setLayout(layout);


        QListWidgetItem *fItem = new QListWidgetItem();
        fItem->setTextAlignment(Qt::AlignLeft);
        fItem->setSizeHint(QSize(220, 60));
        ui->chatListWidget->addItem(fItem);
        ui->chatListWidget->setItemWidget(fItem, buttonWidget);
    }

}

//点击聊天框：消除红点+显示聊天记录
void ChatWidget::createFriendChatWidget(UserChat &value)
{
    //如果有红点，先消除红点
    chattingFriend = value;
    if(chattingFriend.getChatUnreadCount() != 0){
        chattingFriend.setChatUnreadCount(0);
        for (int i = 0; i < userChatVector.size(); i++) {
            if(userChatVector[i].getChatId() == chattingFriend.getChatId()){
                userChatVector[i].setChatUnreadCount(0);
            }
        }
        showChatsListWidegt(userChatVector);
    }

    QString sendId = user.getUserId();
    QString chatId = value.getChatId();

    QString filePath = "/" + sendId + "/message/" + chatId + ".txt";
    int limit = 100;
    QVector<QRegularExpressionMatch> messageMatchVector = readChatRecord(chatId, limit);
    for(int i = 0; i < messageMatchVector.size(); i++){
        if (messageMatchVector[i].hasMatch()) {
            QString senderId = messageMatchVector[i].captured(1);
            QString receiverId = messageMatchVector[i].captured(2);
            QString chatType = messageMatchVector[i].captured(3);
            QString message = messageMatchVector[i].captured(4);
            QString messageType = messageMatchVector[i].captured(5);
            QString messageFilePath = messageMatchVector[i].captured(6);
            QString timestamp = messageMatchVector[i].captured(7);

            addMessageToChat(chattingFriend.getChatAvatar(), message, ((senderId == user.getUserId())));
        }
    }

    // 显示名字
    ui->nameButton->setText(chattingFriend.getChatName());
    ui->nameButton->setStyleSheet(R"(
    QPushButton {
        background: transparent;
        color: black;
        font-size: 16px;
        border: none; /* 让背景透明 */
        padding: 5px 10px; /* 增加点击区域 */
    }
    QPushButton:hover {
        color: #333333; /* 悬停时字体变深 */
    }
    QPushButton:pressed {
        color: #555555; /* 按下时字体变亮 */
    }
    )");
}

QWidget *ChatWidget::createMessageWidget(const QString &avatar, const QString &message, bool isSelf)
{
    QWidget *messageWidget = new QWidget();

    // 创建水平布局
    QHBoxLayout *layout = new QHBoxLayout(messageWidget);

    // 根据发送者决定消息的位置
    qDebug() << isSelf;
    if (isSelf) {
        // 如果是自己发送的消息，显示在右边
        QLabel *msgLabel = new QLabel(message);
        msgLabel->setStyleSheet("background-color: #a4c2f4; padding: 10px;");
        msgLabel->setAlignment(Qt::AlignRight);
        msgLabel->adjustSize();
        // 可以根据需要添加头像
        QLabel *avatarLabel = new QLabel();
        avatarLabel->setPixmap(QPixmap(user.getUserAvatar()).scaled(40, 40));
        avatarLabel->setAlignment(Qt::AlignRight);
        avatarLabel->setFixedSize(40, 40);
        layout->addWidget(msgLabel);
        layout->addWidget(avatarLabel);

    } else {
        // 如果是好友发送的消息，显示在左边
        QLabel *msgLabel = new QLabel(message);
        msgLabel->setStyleSheet("background-color: #ffffff; padding: 10px;");
        msgLabel->setAlignment(Qt::AlignLeft);
        msgLabel->adjustSize();

        // 可以根据需要添加头像
        QLabel *avatarLabel = new QLabel();
        avatarLabel->setPixmap(QPixmap(avatar).scaled(40, 40));
        avatarLabel->setAlignment(Qt::AlignLeft);
        avatarLabel->setFixedSize(40, 40);

        layout->addWidget(avatarLabel);
        layout->addWidget(msgLabel);
    }



    messageWidget->setLayout(layout);

    return messageWidget;
}
void ChatWidget::addMessageToChat(const QString &avatar,const QString &message, bool isSelf)
{
    // 创建消息的 QWidget
    QWidget *messageWidget = createMessageWidget(avatar, message, isSelf);

    // 创建 QListWidgetItem
    QListWidgetItem *item = new QListWidgetItem();
    item->setSizeHint(messageWidget->sizeHint());  // 设置项的大小
    ui->chatWidget->addItem(item);  // 将项加入列表

    // 设置该项的自定义 widget
    ui->chatWidget->setItemWidget(item, messageWidget);

    // 滚动到聊天窗口的底部
    ui->chatWidget->scrollToBottom();
}

 void ChatWidget::receiveMessage(Message &message)
{
    //写文件里，把写改一下
    addChatRecord(message);

    //更新聊天列表  friendchatting
    updateChattingLast(message);
}

//接收新消息框的消息
void ChatWidget::updateChattingLast(Message &message){
    QString lastMessageBody = message.getMessageBody();
    QString lastMessageType = message.getMessageType();
    QString lastTime = message.getMessageTimestamp();
    //更新最新消息

    for (int i = 0; i < userChatVector.size(); i++) {

        if(userChatVector[i].getChatId() == message.getMessageSendId()){
            userChatVector[i].setChatLastMessage(lastMessageBody);
            userChatVector[i].setChatLastMessageType(lastMessageType);
            userChatVector[i].setChatLastTime(lastTime);
            userChatVector[i].setChatUnreadCount(userChatVector[i].getChatUnreadCount()+1);
            userChatVector[i].setChatStatus("chatting");

            if(this->chattingFriend.getChatId() == message.getMessageSendId()){

                this->chattingFriend.setChatLastMessage(lastMessageBody);
                this->chattingFriend.setChatLastMessageType(lastMessageType);
                this->chattingFriend.setChatLastTime(lastTime);
                this->chattingFriend.setChatUnreadCount(0);
                addMessageToChat(chattingFriend.getChatAvatar(), lastMessageBody, false);
                this->chattingFriend.setChatStatus("chatting");
            }

        }

    }
    showChatsListWidegt(userChatVector);    //显示更新列表

}
void ChatWidget::updateChattingLast(int unreadCount)
{
    chattingFriend.setChatUnreadCount(unreadCount);
    for (int i = 0; i < userChatVector.size(); i++) {
        if(userChatVector[i].getChatId() == chattingFriend.getChatId()){
            userChatVector[i].setChatUnreadCount(unreadCount);
        }
    }
    showChatsListWidegt(userChatVector);    //显示更新列表
}
void ChatWidget::updateChattingLast(UserFriend &userFriend)
{
    for (UserChat* it = userChatVector.begin(); it != userChatVector.end(); ++it) {

        if(userFriend.getUserFriendId() == it->getChatId()){
            QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
            it->setChatLastTime(timestamp);
            it->setChatStatus("chatting");
        }
    }
    showChatsListWidegt(userChatVector);
}


void ChatWidget::addChatRecord(const Message &addMessage)
{
    QString senderId = addMessage.getMessageSendId();
    QString receiverId = addMessage.getMessageReceiverId();
    QString chatType = addMessage.getMessageChatType();
    QString message = addMessage.getMessageBody();
    QString messageType = addMessage.getMessageType();
    QString messageFilePath = addMessage.getMessageFilePath();
    QString timestamp = addMessage.getMessageTimestamp();

    QString newMessage = "\"" + message + "\"";
    QString dirPath = QCoreApplication::applicationDirPath() + "/" + user.getUserId() + "/message";
    QDir dir;
    if(!dir.exists(dirPath)){
        dir.mkpath(dirPath);
    }
    QString filePath;
    if(user.getUserId() == senderId){
        filePath = dirPath + "/" + receiverId + ".txt";
    }else{
        filePath = dirPath + "/" + senderId + ".txt";
    }

    qDebug() << filePath;
    qDebug() << newMessage;
    QString record = QString("%1,%2,%3,%4,%5,%6,%7")
                         .arg(senderId)  // 发送者ID
                         .arg(receiverId) // 接收者ID
                         .arg(chatType)
                         .arg(newMessage)     // 消息内容
                         .arg(messageType)
                         .arg(messageFilePath)
                         .arg(timestamp);  // 时间戳

    QFile file(filePath);
    if(file.open(QIODevice::Append | QIODevice::Text)){
        QTextStream out(&file);
        out << record << "\n";
        file.close();
    }else{
        qDebug() << "无法打开文件进行写入";
    }
}
QVector<QRegularExpressionMatch> ChatWidget::readChatRecord(const QString &friendId, const int &limit)
{
    QVector<QRegularExpressionMatch> messageMatchVector;
    QString dirPath = QCoreApplication::applicationDirPath() + "/" + user.getUserId() + "/message";
    QDir dir;
    if(!dir.exists(dirPath)){
        dir.mkpath(dirPath);
        return messageMatchVector;
    }
    QString filePath = dirPath + "/" + chattingFriend.getChatId() + ".txt";
    QFile file(filePath);
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&file);
        QString line;
        QRegularExpression regex(R"(([^,]+),([^,]+),([^,]+),\"([^\"]*)\",([^,]+),([^,]+),([^,]+))");

        for(int i = 0; i < limit; i++){
            if(in.atEnd()){
                file.close();
                return messageMatchVector;
            }
            line = in.readLine();
            QRegularExpressionMatch match = regex.match(line);
            messageMatchVector.append(match);
        }
        file.close();
    }else{
        qDebug() << "无法打开文件进行读取";
    }
    return messageMatchVector;
}



void ChatWidget::on_sendButton_clicked()
{
    //获取信息
    QString chatMessage = ui->chatTextEdit->toPlainText();
    ui->chatTextEdit->clear();

    if(chatMessage.isEmpty()){
        return;
    }

    QString senderId = user.getUserId();
    QString receiverId = chattingFriend.getChatId();
    QString chatType = chattingFriend.getChatType();
    QString timestamp = QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");

    QJsonObject json;
    json["type"] = "send_message";
    json["send_id"] = senderId;
    json["receiver_id"] = receiverId;
    json["chat_type"] = chattingFriend.getChatType();
    json["message_body"] = chatMessage;
    json["message_type"] = "text";
    json["file_path"] = " ";
    json["message_timestamp"] = timestamp;
    QJsonDocument doc(json);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, doc.toJson()));

    Message sendMessage(senderId, receiverId, chatType, chatMessage, "text", " ", timestamp);
    addChatRecord(sendMessage);    //加东西，跟上面一样

    //更新最新消息
    this->chattingFriend.setChatLastMessage(chatMessage);
    this->chattingFriend.setChatLastMessageType("text");
    this->chattingFriend.setChatLastTime(timestamp);
    this->chattingFriend.setChatUnreadCount(0);
    for (int i = 0; i < userChatVector.size(); i++) {
        if(userChatVector[i].getChatId() == chattingFriend.getChatId()){
            userChatVector[i].setChatLastMessage(chatMessage);
            userChatVector[i].setChatLastMessageType("text");
            userChatVector[i].setChatLastTime(timestamp);
            userChatVector[i].setChatUnreadCount(0);
        }
    }

    updateServerChat(this->chattingFriend);
    addMessageToChat(chattingFriend.getChatAvatar(), chatMessage, true);
    showChatsListWidegt(userChatVector);    //显示更新列表
}

void ChatWidget::on_fileButton_clicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "选择要发送的文件");

    if(!filePath.isEmpty()){
        QFile file(filePath);
        if(file.open(QIODevice::ReadOnly)){
            QTextStream in(&file);
            QString fileContent = in.readAll();
            file.close();
            //ui->chatTextEdit->setText(fileContent);

            //发送文件
            //跟拖拽一样，显示框，然后点击发送或取消
            QString fileName = QFileInfo(filePath).fileName();
            QString fileExtension = QFileInfo(filePath).suffix();  // 获取文件扩展名
            qDebug() << "文件扩展名: " << fileExtension;
            qDebug() << "文件发送成功:" << filePath;
        } else {
            qDebug() << "无法打开文件";
        }
    }

}

void ChatWidget::updateServerChat(UserChat value)
{
    QJsonObject json;
    json["type"] = "update_chat";
    json["user_id"] = user.getUserId();
    json["comm_id"] = value.getChatId();
    json["chat_type"] = value.getChatType();
    json["last_message"] = value.getChatLastMessage();
    json["last_message_type"] = value.getChatLastMessageType();
    json["last_time"] = value.getChatLastTime();
    json["unread_count"] = 0;
    json["chat_status"] = value.getChatStatus();

    QJsonDocument doc(json);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, doc.toJson()));

}

void ChatWidget::addFriendsUnreadMessages(QVector<Message> friendsUnreadMessages)
{
    QJsonObject jsonChatting;
    jsonChatting["type"] = "chatting";
    jsonChatting["user_id"] = this->user.getUserId();
    QJsonDocument docChatting(jsonChatting);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, docChatting.toJson()));


    for(auto value : friendsUnreadMessages){
        Message message = value;
        addChatRecord(message);
    }

}
/*
void ChatWidget::updateChatsList(UserFriend acceptFriend, UserChat acceptFriendChat)
{
    this->userChatVector.append(acceptFriendChat);
}
*/
ChatWidget::~ChatWidget()
{
    delete ui;
}
