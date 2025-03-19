#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    ui->setupUi(this);

}
void MainWidget::initialMainWidget(User user)
{
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

MainWidget::~MainWidget()
{
    delete ui;
}


void MainWidget::on_chatButton_clicked()
{
    QJsonObject jsonChatting;
    jsonChatting["type"] = "chatting";
    jsonChatting["user_id"] = this->user.getUserId();
    QJsonDocument docChatting(jsonChatting);
    QMetaObject::invokeMethod(ServerConnectThread::instance(), "sendData", Qt::QueuedConnection, Q_ARG(QString, docChatting.toJson()));

    stackedWidget->setCurrentWidget(chatWidget);
}


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

