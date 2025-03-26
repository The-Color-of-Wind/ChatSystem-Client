#include "clientrequest.h"

ClientRequest::ClientRequest(QObject *parent) : QObject(parent) {

    this->networkManager = new QNetworkAccessManager(this);

    //connect(networkManager, &QNetworkAccessManager::finished, this, &ClientRequest::on)
}



