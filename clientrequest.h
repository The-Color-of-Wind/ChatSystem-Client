#ifndef CLIENTREQUEST_H
#define CLIENTREQUEST_H

#include <QObject>
#include <QCoreApplication>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonObject>
#include <QJsonDocument>
#include <QDebug>

class ClientRequest : public QObject{
    Q_OBJECT

public:
    ClientRequest(QObject *parent = nullptr);

    void registerUser(const QString &username, const QString &password);
    void loginUser(const QString &username, const QString &password);

    void getUserInfo();
    void getFriendsList();
    void getChatMessages(const QString &chatId);

private slots:



private:
    QNetworkAccessManager *networkManager;
    QString accessToken;

};

#endif // CLIENTREQUEST_H
