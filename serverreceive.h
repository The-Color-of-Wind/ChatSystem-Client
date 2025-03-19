#ifndef SERVERRECEIVE_H
#define SERVERRECEIVE_H
#include <QWidget>
#include <QObject>

#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QMap>
#include <QMutex>
#include <QMutexLocker>

#include "user.h"
#include "userfriend.h"
#include "userchat.h"
#include "message.h"
#include "serverconnect.h"

class ServerReceive : public QObject
{
    Q_OBJECT
public:
    static ServerReceive* instance(){
        static QMutex mutex;
        static ServerReceive *serverReceive = nullptr;
        while(ServerConnect::instance()->getSocket() ==  nullptr){
        }
        if (serverReceive == nullptr){
            QMutexLocker locker(&mutex);
            if(serverReceive == nullptr){
                serverReceive = new ServerReceive();
                serverReceive->socket = ServerConnect::instance()->getSocket();
                qDebug() << "serverReceive->socket = ServerConnect::instance()->getSocket();";
            }
        }
        return serverReceive;
    }

    void onReadyRead();
signals:
    void loginSuccess(User user);
    void registerSucess(QString id);
    void getFriendsSuccess(QMap<QString, UserFriend> userFriendVector);
    void getChatsSuccess(QVector<UserChat> userChatVector);
    void getFriendsUnreadMessagesSuccess(QVector<Message> friendsUnreadMessages);
    void getUserInformation(UserFriend userFriend, bool isFriend);
    void getUserInformationError();
    void accpetFriendSuccess();
    void deleteFriendSuccess(QString userId, QString friendId);

    void sendErrorSignal(QString message);     //显示错误信息
    void receiveMessageSuccess(Message &message);


public slots:


private:
    ServerReceive() {}  // 私有构造函数，禁止外部实例化
    ServerReceive(const ServerReceive&) = delete;  // 禁止拷贝构造
    ServerReceive& operator=(const ServerReceive&) = delete;  // 禁止赋值

private:
    QTcpSocket *socket;

};

#endif // SERVERRECEIVE_H

