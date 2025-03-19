#include "serverconnectthread.h"


bool ServerConnectThread::initConnect(){
    return ServerConnect::instance()->initConnect();
}

void ServerConnectThread::sendData(QString data){
    ServerConnect::instance()->sendData(data);
}


// 虚析构函数实现
ServerConnectThread::~ServerConnectThread() {
    // 这里可以进行必要的资源清理，如果有需要的话
}

