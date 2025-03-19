#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>

#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class User
{
public:
    User();
    User(QString id, QString password, QString phone, QString name, QString email, QString avatar);

    QString getUserId(){return this->userId;}
    QString getUserPassword(){return this->userPassword;}
    QString getUserPhone(){return this->userPhone;}
    QString getUserName(){return this->userName;}
    QString getUserEmail(){return this->userEmail;}
    QString getUserAvatar(){return this->userAvatar;}



private:
    QString userId;
    QString userPassword;
    QString userPhone;
    QString userName;
    QString userEmail;
    QString userAvatar;



};

#endif // USER_H
