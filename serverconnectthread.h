#ifndef SERVERCONNECTTHREAD_H
#define SERVERCONNECTTHREAD_H

#include "serverconnect.h"
#include <QThread>
#include <QMutex>
#include <QMutexLocker>
#include <QDebug>

class ServerConnectThread : public QThread
{
    Q_OBJECT
public:
    static ServerConnectThread* instance(){
        static QMutex mutex;
        static ServerConnectThread* serverConnectThread = nullptr;

        if(serverConnectThread == nullptr){
            QMutexLocker locker(&mutex);
            if(serverConnectThread == nullptr){
                serverConnectThread = new ServerConnectThread();
            }
        }
        return serverConnectThread;
    }

public slots:
    bool initConnect();

    void sendData(QString data);

protected:
    void run() override{
        exec();
    }
private:
    explicit ServerConnectThread(QObject *parent = nullptr) : QThread(parent){
        ServerConnect::instance()->moveToThread(this);
    }

    virtual ~ServerConnectThread();

};

#endif // SERVERCONNECTTHREAD_H
