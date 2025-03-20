#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QButtonGroup>

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);

}
void MainWidget::initIcon()
{
    // 按钮大小
    QSize iconSize(20, 20); // 你可以调整这个大小

    // 设置 chatButton 背景图片
    ui->chatButton->setCheckable(true);
    ui->chatButton->setIcon(QIcon(":/images/system/chat.png"));
    ui->chatButton->setIconSize(iconSize);
    ui->chatButton->setStyleSheet(R"(
    QPushButton {
        border: none;
        background: transparent;
    }
    QPushButton:checked {
        icon: url(:/images/system/chatCheck.png);
    }
)");

    // 设置 friendButton 背景图片
    ui->friendButton->setCheckable(true);
    ui->friendButton->setIcon(QIcon(":/images/system/user.png"));
    ui->friendButton->setIconSize(iconSize);
    ui->friendButton->setStyleSheet(R"(
    QPushButton {
        border: none;
        background: transparent;
    }
    QPushButton:checked {
        icon: url(:/images/system/userCheck.png);
    }
)");

    // 设置 momentsButton 背景图片
    ui->momentsButton->setCheckable(true);
    ui->momentsButton->setIcon(QIcon(":/images/system/moments.png"));
    ui->momentsButton->setIconSize(iconSize);
    ui->momentsButton->setStyleSheet(R"(
    QPushButton {
        border: none;
        background: transparent;
    }
    QPushButton:checked {
        icon: url(:/images/system/momentsCheck.png);
    }
)");

    // 设置 setupButton 背景图片
    ui->setupButton->setCheckable(true);
    ui->setupButton->setIcon(QIcon(":/images/system/setup.png"));
    ui->setupButton->setIconSize(iconSize);
    ui->setupButton->setStyleSheet(R"(
    QPushButton {
        border: none;
        background: transparent;
    }
    QPushButton:checked {
        icon: url(:/images/system/setupCheck.png);
    }
)");

    // 确保只有一个按钮处于选中状态（类似 Tab 切换效果）
    QButtonGroup *buttonGroup = new QButtonGroup(this);
    buttonGroup->addButton(ui->chatButton);
    buttonGroup->addButton(ui->friendButton);
    buttonGroup->addButton(ui->momentsButton);
    buttonGroup->addButton(ui->setupButton);
    buttonGroup->setExclusive(true); // 确保只有一个按钮处于 checked 状态

    // 最后设置 frame 的背景为深灰色
    ui->frame->setStyleSheet("background-color: #2E2E2E;");

}
//====== 显示主界面 ======
void MainWidget::initialMainWidget(User user)
{
    initIcon();
    this->user = user;

    //显示头像
    ui->avatarButton->setIcon(QIcon(QPixmap(this->user.getUserAvatar()).scaled(40, 40)));
    ui->avatarButton->setIconSize(QSize(40, 40));
    ui->avatarButton->setFixedSize(40, 40);
    ui->avatarButton->setFocus();


    stackedWidget = new QStackedWidget(ui->changeWidget);

    chatWidget = new ChatWidget(user);
    friendWidget = new FriendWidget(user);

    stackedWidget->addWidget(chatWidget);
    stackedWidget->addWidget(friendWidget);


    stackedWidget->setCurrentWidget(chatWidget);


    QVBoxLayout *layout = new QVBoxLayout(ui->changeWidget);
    layout->addWidget(stackedWidget);
    ui->changeWidget->setLayout(layout);
    this->adjustSize();

    ui->chatButton->raise(); // 确保按钮位于最前面
    ui->friendButton->raise();

    //请求未读聊天记录
    QJsonObject jsonUserUnreadMessage;
    jsonUserUnreadMessage["type"] = "get_unread_messages";
    jsonUserUnreadMessage["user_id"] = this->user.getUserId();
    QJsonDocument docUserUnreadMessage(jsonUserUnreadMessage);
    //ServerConnect::instance()->sendData(docUserUnreadMessage.toJson()+ "\n");
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, docUserUnreadMessage.toJson()));

    connect(ServerReceive::instance(), &ServerReceive::accpetFriendSuccess,[&](){
        qDebug() << "accpetFriend  Success";
        qDebug() << "accpetFriend  Success";
        on_chatButton_clicked();

    });

}


//====== 切换聊天界面 ======
void MainWidget::on_chatButton_clicked()
{
    QJsonObject jsonChatting;
    jsonChatting["type"] = "chatting";
    jsonChatting["user_id"] = this->user.getUserId();
    QJsonDocument docChatting(jsonChatting);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, docChatting.toJson()));

    stackedWidget->setCurrentWidget(chatWidget);
}

//====== 切换好友界面 ======
void MainWidget::on_friendButton_clicked()
{
    /*
    if(friendWidget->getUserFriendMap().size() == 0){
        QJsonObject jsonFriends;
        jsonFriends["type"] = "friends";
        jsonFriends["user_id"] = this->user.getUserId();
        QJsonDocument docFriends(jsonFriends);
        //ServerConnect::instance()->sendData(docFriends.toJson()+ "\n");
        ServerConnect::instance()->sendData(docFriends.toJson());
    }
    else{
        qDebug() << "showFriendsListWidegt";
        qDebug() << friendWidget->getUserFriendMap().size();

        friendWidget->showFriendsListWidegt(friendWidget->getUserFriendMap());
    }*/

    QJsonObject jsonFriends;
    jsonFriends["type"] = "friends";
    jsonFriends["user_id"] = this->user.getUserId();
    QJsonDocument docFriends(jsonFriends);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, docFriends.toJson()));

    connect(friendWidget, &FriendWidget::sendClickUserFriend, [&](UserFriend clickingUserFriend){
        stackedWidget->setCurrentWidget(chatWidget);
        chatWidget->updateChattingLast(clickingUserFriend);
        //chatWidget->showChatsListWidegt(chatWidget->getUserChatVector());
    });


    stackedWidget->setCurrentWidget(friendWidget);
}

MainWidget::~MainWidget()
{
    delete ui;
}
