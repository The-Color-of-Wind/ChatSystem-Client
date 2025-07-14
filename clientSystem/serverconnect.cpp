#include "serverconnect.h"

bool ServerConnect::initConnect() {

    this->socket = new QTcpSocket();
    this->socket->connectToHost("192.168.168.128", 12345);
    if (!this->socket->waitForConnected(5000)) {
        QMessageBox::information(this, "连接提示", "无网络连接！");
        return false;
    }

    return true;
}

void ServerConnect::sendData(QString data) {
    QByteArray payload = data.toUtf8();
    uint32_t len = payload.size();
    uint32_t net_len = htonl(len);  // 转为网络字节序（大端）

    QByteArray packet;
    packet.append(reinterpret_cast<const char*>(&net_len), sizeof(net_len)); // 前4字节长度
    packet.append(payload);  // 数据内容

    socket->write(packet);
}
