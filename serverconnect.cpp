#include "serverconnect.h"

bool ServerConnect::initConnect() {

    this->socket = new QTcpSocket();
    this->socket->connectToHost("192.168.168.130", 12345);
    if (!this->socket->waitForConnected(5000)) {
        QMessageBox::information(this, "连接提示", "无网络连接！");
        return false;
    }

    return true;
}

void ServerConnect::sendData(QString data)
{
    qDebug() << "socket->write(data.toUtf8());";
    socket->write(data.toUtf8());
}
