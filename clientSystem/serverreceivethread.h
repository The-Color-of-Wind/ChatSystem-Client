#ifndef SERVERRECEIVETHREAD_H
#define SERVERRECEIVETHREAD_H

#include <QThread>
#include <QMutex>
#include <QMutexLocker>
#include <QDebug>

#include "serverconnect.h"
#include "serverreceive.h"

class ServerReceiveThread : public QThread
{
    Q_OBJECT
public:

    static ServerReceiveThread* instance(){
        static QMutex mutex;
        static ServerReceiveThread* serverReceiveThread = nullptr;

        if(serverReceiveThread == nullptr){
            QMutexLocker locker(&mutex);
            if(serverReceiveThread == nullptr){
                serverReceiveThread = new ServerReceiveThread();
                qDebug() << "serverReceiveThread = new ServerReceiveThread();";
            }
        }
        return serverReceiveThread;
    }

public slots:
    void onReadyRead(){
        ServerReceive::instance()->onReadyRead();
    }

protected:
    void run() override{
        qDebug() << "run();";
        exec();
    }

private:
    explicit ServerReceiveThread(QObject *parent = nullptr) : QThread(parent){
        ServerReceive::instance()->moveToThread(this);
    }
    virtual ~ServerReceiveThread();
};

#endif // SERVERRECEIVETHREAD_H
