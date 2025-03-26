#ifndef SERVERCONNECT_H
#define SERVERCONNECT_H
#include <QWidget>

#include <QMessageBox>
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

class ServerConnect : public QWidget
{
    Q_OBJECT
public:
    static ServerConnect* instance(){
        static QMutex mutex;
        static ServerConnect *serverConnect = nullptr;
        if (serverConnect == nullptr){
            QMutexLocker locker(&mutex);
            if(serverConnect == nullptr){
                serverConnect = new ServerConnect();
                serverConnect->initConnect();
            }

        }
        return serverConnect;
    }

    QTcpSocket *getSocket() const {return this->socket;}

    bool initConnect();
    void sendData(QString data);


private:
    ServerConnect() {}  // 私有构造函数，禁止外部实例化
    ServerConnect(const ServerConnect&) = delete;  // 禁止拷贝构造
    ServerConnect& operator=(const ServerConnect&) = delete;  // 禁止赋值

private:
    QTcpSocket *socket;

};

#endif // SERVERCONNECT_H
