#ifndef USERFRIEND_H
#define USERFRIEND_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>

#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class UserFriend
{
public:
    UserFriend();
    UserFriend(QString id, QString phone, QString name, QString email, QString avatar, QString status, QString created, QString relation, QString createdRelation);

    QString getUserFriendId()const{return this->userFriendId;}
    QString getUserFriendPhone()const{return this->userFriendPhone;}
    QString getUserFriendName()const{return this->userFriendName;}
    QString getUserFriendEmail()const{return this->userFriendEmail;}
    QString getUserFriendAvatar()const{return this->userFriendAvatar;}
    QString getUserFriendStatus()const{return this->userFriendStatus;}
    QString getUserFriendCreated()const{return this->userFriendCreated;}
    QString getUserFriendRelation()const{return this->userFriendRelation;}
    QString getUserCreatedRelation()const{return this->userCreatedRelation;}

    void setUserFriendId(QString id ){this->userFriendId = id; return;}
    void setUserFriendPhone(QString phone ){this->userFriendPhone = phone; return;}
    void setUserFriendName(QString name ){this->userFriendName = name; return;}
    void setUserFriendEmail(QString email ){this->userFriendEmail = email; return;}
    void setUserFriendAvatar(QString avatar ){this->userFriendAvatar = avatar; return;}
    void setUserFriendStatus(QString status ){this->userFriendStatus = status; return;}
    void setUserFriendCreated(QString created ){this->userFriendCreated = created; return;}
    void setUserFriendRelation(QString relation ){this->userFriendRelation = relation; return;}
    void setUserrCreatedRelation(QString createdRelation ){this->userCreatedRelation = createdRelation; return;}
private:
    QString userFriendId;
    QString userFriendPhone;
    QString userFriendName;
    QString userFriendEmail;
    QString userFriendAvatar;
    QString userFriendStatus;
    QString userFriendCreated;
    QString userFriendRelation;
    QString userCreatedRelation;
};



#endif // USERFRIEND_H
