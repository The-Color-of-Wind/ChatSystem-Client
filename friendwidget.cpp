#include "friendwidget.h"
#include "ui_friendwidget.h"

FriendWidget::FriendWidget(User user, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FriendWidget)
{
    ui->setupUi(this);

    this->user = user;

    ui->widget->hide();
    ui->newfriendsListWidget->hide();

    markLabel = new QLabel("查询的用户不存在", this);
    markLabel->setStyleSheet("font-size: 18px;");
    markLabel->setGeometry(200, 300, 200, 50);
    markLabel->hide();

    searchResultListWidget = new QListWidget(this);
    searchResultListWidget->setGeometry(10, 50, 300, 200);
    searchResultListWidget->hide();

    connect(ServerReceive::instance(), &ServerReceive::getFriendsSuccess, this, &FriendWidget::showFriendsListWidegt);
    connect(ServerReceive::instance(), &ServerReceive::getUserInformation, this, &FriendWidget::showSearchUserInformation);
    connect(ServerReceive::instance(), &ServerReceive::getUserInformationError, [&]() {
        ui->widget->hide();

        markLabel->show();

        ui->searchFriendButton->hide();
        ui->cancelButton->show();
    });
    connect(ServerReceive::instance(), &ServerReceive::deleteFriendSuccess, [&](QString userId, QString friendId){
        QString dirPath = QCoreApplication::applicationDirPath() + "/" + userId + "/message";
        QDir dir;
        if(!dir.exists(dirPath)){
            dir.mkpath(dirPath);
        }
        QString filePath;
        filePath = dirPath + "/" + friendId + ".txt";
        QFile file(filePath);
        if (file.exists()) {
            bool removed = file.remove();  // 删除文件
            if (removed) {
                qDebug() << "文件删除成功";
            } else {
                qDebug() << "文件删除失败";
            }
        } else {
            qDebug() << "文件不存在";
        }

        this->userFriendMap.remove(friendId);
        showFriendsListWidegt(this->userFriendMap);
    });

    //connect(ServerReceive::instance(), &ServerReceive::accpetFriendSuccess, this, &FriendWidget::updateAcceptSuccess);

    connect(ui->friendIdLineEdit, &QLineEdit::textChanged, this, &FriendWidget::on_friendIdLineEdit_textChanged);


    ui->friendIdLineEdit->setStyleSheet("background-color: transparent;");
    ui->textEdit->setStyleSheet("background-color: transparent;");
    ui->textEdit_2->setStyleSheet("background-color: transparent;");
    ui->textEdit_3->setStyleSheet("background-color: transparent;");
    ui->textEdit_4->setStyleSheet("background-color: transparent;");
    ui->textEdit_5->setStyleSheet("background-color: transparent;");
    ui->textEdit_6->setStyleSheet("background-color: transparent;");

}

void FriendWidget::showFriendsListWidegt(const QMap<QString, UserFriend> userFriendMap)
{
    ui->searchFriendButton->show();
    ui->cancelButton->hide();

    ui->addFriendButton->hide();
    ui->sendMessageButton->show();
    ui->voiceChatButton->show();
    ui->videoChatButton->show();

    searchResultListWidget->hide();

    this->userFriendMap = userFriendMap;
    ui->friendsListWidget->clear();

    ui->newfriendsListWidget->hide();

    //新的朋友
    QPushButton *newButtonWidget = new QPushButton();
    QHBoxLayout *newLayout = new QHBoxLayout(newButtonWidget);
    QPushButton *newFriendButton = new QPushButton();
    newFriendButton->setIcon(QIcon(QPixmap(":/avatar/images/10.png")));
    newFriendButton->setIconSize(QSize(40, 40));
    newFriendButton->setFixedSize(40, 40);
    newFriendButton->setFocus();
    newButtonWidget->setStyleSheet("cursor: pointer;");

    QVBoxLayout *vlayout2 = new QVBoxLayout();
    QLabel *seatLabel =new QLabel();
    seatLabel->setStyleSheet("color: #888888; font-size: 10px;");
    QLabel *newFriendLabel =new QLabel("新的朋友");
    newFriendLabel->setStyleSheet("font-weight: bold; color: #000000; padding-left: 10px;");
    QLabel *unreadLabel = nullptr;
    unreadLabel = new QLabel();
    unreadLabel->setStyleSheet(
        "background-color: red; "
        "color: white; "
        "border-radius: 9px; "  // 圆形
        "width: 18px; "          // 设置宽度
        "height: 18px; "         // 设置高度
        "text-align: center; "
        );
    unreadLabel->setAlignment(Qt::AlignCenter);
    unreadLabel->setVisible(false);
    vlayout2->addWidget(unreadLabel);
    vlayout2->addWidget(seatLabel);

    newLayout->addWidget(newFriendButton);
    newLayout->addWidget(newFriendLabel);
    newLayout->addLayout(vlayout2);
    newButtonWidget->setLayout(newLayout);

    QListWidgetItem *newFItem = new QListWidgetItem();
    newFItem->setTextAlignment(Qt::AlignLeft);
    newFItem->setSizeHint(QSize(220, 60));
    ui->friendsListWidget->addItem(newFItem);
    ui->friendsListWidget->setItemWidget(newFItem, newButtonWidget);

    connect(newButtonWidget, &QPushButton::clicked, [&](){
        showNewFriendList();
    });

    for (auto it = userFriendMap.begin(); it != userFriendMap.end(); ++it) {
        const QString key = it.key();
        const UserFriend& value = it.value();
        if(value.getUserFriendRelation() == "accepted"){
            QPushButton *buttonWidget = new QPushButton();
            QHBoxLayout *layout = new QHBoxLayout(buttonWidget);
            QPushButton *friendButton = new QPushButton();
            friendButton->setIcon(QIcon(QPixmap(value.getUserFriendAvatar()).scaled(40, 40)));
            friendButton->setIconSize(QSize(40, 40));
            friendButton->setFixedSize(40, 40);
            friendButton->setFocus();
            buttonWidget->setStyleSheet("cursor: pointer;");

            //加入右键弹出菜单
            // 设置右键菜单
            QMenu *contextMenu = new QMenu(friendButton);
            QAction *sendFriendMessage = new QAction("发送消息", this);
            QAction *deleteFriendAction = new QAction("删除好友", this);
            contextMenu->addAction(sendFriendMessage);
            contextMenu->addAction(deleteFriendAction);

            // 连接右键菜单的动作
            connect(sendFriendMessage, &QAction::triggered, this, [this, value]() {
                on_sendMessageButton_clicked();
            });

            connect(deleteFriendAction, &QAction::triggered, this, [this, value]() {
                qDebug() << "删除好友: " << value.getUserFriendName();
                QJsonObject json;
                json["type"] = "delete_friend";
                json["user_id"] = user.getUserId();
                json["friend_id"] = value.getUserFriendId();

                QJsonDocument doc(json);
                QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, doc.toJson()));


            });

            // 捕获右键事件
            buttonWidget->setContextMenuPolicy(Qt::CustomContextMenu);
            connect(buttonWidget, &QPushButton::customContextMenuRequested, this, [contextMenu, buttonWidget](const QPoint &pos) {
                qDebug() << "捕获右键事件: " ;

                contextMenu->exec(buttonWidget->mapToGlobal(pos));  // 弹出菜单
            });


            connect(buttonWidget, &QPushButton::clicked, [this, value](){
                ui->newfriendsListWidget->hide();
                this->setClickingUserFriend(value);

                showFriendInformation();
                //createFriendChatWidget(userChat);
            });


            QLabel *friendLabel =new QLabel(value.getUserFriendName());
            friendLabel->setStyleSheet("font-weight: bold; color: #000000; padding-left: 10px;");
            layout->addWidget(friendButton);
            layout->addWidget(friendLabel);
            buttonWidget->setLayout(layout);
            QListWidgetItem *fItem = new QListWidgetItem();
            fItem->setTextAlignment(Qt::AlignLeft);
            fItem->setSizeHint(QSize(220, 60));
            ui->friendsListWidget->addItem(fItem);
            ui->friendsListWidget->setItemWidget(fItem, buttonWidget);

        }else{
            newFriends.append(value);
            //创建显示未读消息数量的红点
            unreadLabel->setVisible(true);
        }
    }
}

void FriendWidget::showNewFriendList()
{
    //什么时候操作后，再消除
    ui->widget->hide();
    ui->newfriendsListWidget->show();

    for (const UserFriend& value : this->newFriends) {

        QPushButton *buttonWidget = new QPushButton();
        QHBoxLayout *layout = new QHBoxLayout(buttonWidget);
        QPushButton *friendButton = new QPushButton();
        friendButton->setIcon(QIcon(QPixmap(value.getUserFriendAvatar()).scaled(40, 40)));
        friendButton->setIconSize(QSize(40, 40));
        friendButton->setFixedSize(40, 40);
        friendButton->setFocus();
        buttonWidget->setStyleSheet("cursor: pointer;");

        connect(buttonWidget, &QPushButton::clicked, [this, value](){
            //显示用户信息（暂未开发）
        });

        QLabel *friendLabel =new QLabel(value.getUserFriendName());
        friendLabel->setStyleSheet("font-weight: bold; color: #000000; padding-left: 10px;");

        QPushButton *acceptButton = new QPushButton("接受");
        acceptButton->setFixedSize(40, 20);
        acceptButton->setFocus();

        layout->addWidget(friendButton);
        layout->addWidget(friendLabel);
        layout->addWidget(acceptButton);
        buttonWidget->setLayout(layout);

        connect(acceptButton, &QPushButton::clicked, [this, value, acceptButton](){

            this->userFriendMap.remove(value.getUserFriendId());
            showFriendsListWidegt(this->userFriendMap);
            acceptButton->setText("已接受");
            acceptButton->setFocusPolicy(Qt::NoFocus);
            acceptButton->setStyleSheet("border: none;");  // 移除边框

            QJsonObject json;
            json["type"] = "accept_friend";
            json["user_id"] = user.getUserId();
            json["friend_id"] = value.getUserFriendId();

            QJsonDocument doc(json);
            QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, doc.toJson()));


        });

        QListWidgetItem *fItem = new QListWidgetItem();
        fItem->setTextAlignment(Qt::AlignLeft);
        fItem->setSizeHint(QSize(220, 60));
        ui->newfriendsListWidget->addItem(fItem);
        ui->newfriendsListWidget->setItemWidget(fItem, buttonWidget);
    }
}
/*
void FriendWidget::updateAcceptSuccess(UserFriend acceptUserFriend)
{
    this->userFriendMap.insert(acceptUserFriend.getUserFriendId(), acceptUserFriend);
    showFriendsListWidegt(this->userFriendMap);
}
*/
void FriendWidget::showFriendInformation()
{
    ui->widget->show();
    ui->avatarButton->setIcon(QIcon(QPixmap(this->getClickingUserFriend().getUserFriendAvatar()).scaled(70,70)));
    ui->avatarButton->setIconSize(QSize(70, 70));
    ui->avatarButton->setFixedSize(70, 70);

    ui->areaLineEdit->setText(this->getClickingUserFriend().getUserFriendId());
    ui->nameLineEdit->setText(this->getClickingUserFriend().getUserFriendName());
    ui->remarkLineEdit->setText(this->getClickingUserFriend().getUserFriendName());

    ui->remarkTextEdit->setText(this->getClickingUserFriend().getUserFriendName());

}

void FriendWidget::showSearchUserInformation(UserFriend userFriend, bool isFriend)
{

     //从数据库中提取出当前好友状态，分别显示
    this->setClickingUserFriend(userFriend);

    showFriendInformation();

    if(isFriend){
        ui->addFriendButton->hide();
        ui->sendMessageButton->show();
        ui->voiceChatButton->show();
        ui->videoChatButton->show();

    }else{
        ui->addFriendButton->show();
        ui->sendMessageButton->hide();
        ui->voiceChatButton->hide();
        ui->videoChatButton->hide();
    }
}

void FriendWidget::on_sendMessageButton_clicked()
{
    emit sendClickUserFriend(this->clickingUserFriend);

}

void FriendWidget::on_searchFriendButton_clicked()
{
    QString friendId = ui->friendIdLineEdit->text();
    ui->friendIdLineEdit->clear();

    searchResultListWidget->hide();
    ui->newfriendsListWidget->hide();

    int mark = false;
    for(UserFriend &value : userFriendMap){
        if(value.getUserFriendId() == friendId){
            showSearchUserInformation(value, true);
            mark = true;
        }
    }
    if(!mark){
        QJsonObject json;
        json["type"] = "search_user";
        json["user_id"] = user.getUserId();
        json["search_id"] = friendId;

        QJsonDocument doc(json);
        QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, doc.toJson()));

    }
}

bool FriendWidget::on_friendIdLineEdit_textChanged(const QString &text){
    int mark = false;
    if(userFriendMap.size() == 0){
        return false;
    }
    searchResultListWidget->show();
    ui->friendsListWidget->clear();
    searchResultListWidget->clear();
    for(const UserFriend &value : userFriendMap){
        if(value.getUserFriendId().contains(text, Qt::CaseInsensitive)){
            searchResultListWidget->addItem(value.getUserFriendName());
            mark = true;
        }
    }

    //点击后，把id全部显示到line上
}

void FriendWidget::on_addFriendButton_clicked()
{

    ui->addFriendButton->setText("已发送好友请求");
    ui->addFriendButton->setFocusPolicy(Qt::NoFocus);
    ui->addFriendButton->setStyleSheet("border: none;");  // 移除边框

    QJsonObject json;
    json["type"] = "add_friend";
    json["user_id"] = user.getUserId();
    json["friend_id"] = this->getClickingUserFriend().getUserFriendId();

    QJsonDocument doc(json);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, doc.toJson()));

}

FriendWidget::~FriendWidget()
{
    delete ui;
}



void FriendWidget::on_cancelButton_clicked()
{
    markLabel->hide();
    showFriendsListWidegt(this->userFriendMap);
}

