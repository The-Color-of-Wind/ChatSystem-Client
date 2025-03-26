#ifndef USERCHAT_H
#define USERCHAT_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>

#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class UserChat
{
public:
    UserChat();
    UserChat(QString id, QString type, QString lastMessage, QString lastMessageType, QString lastTime, int unreadCount, QString status, QString name, QString avatar);

    QString getChatId()const{return this->chatId;}
    QString getChatType()const{return this->chatType;}
    QString getChatLastMessage()const{return this->chatLastMessage;}
    QString getChatLastMessageType()const{return this->chatLastMessageType;}
    QString getChatLastTime()const{return this->chatLastTime;}
    int getChatUnreadCount()const{return this->chatUnreadCount;}
    QString getChatName()const{return this->chatName;}
    QString getChatAvatar()const{return this->chatAvatar;}
    QString getChatStatus()const{return this->chatStatus;}
    //int getChatUnreadNumber()const{return this->unreadNumber;}

    void setChatId(QString id ){this->chatId = id; return;}
    void setChatType(QString type ){this->chatType = type; return;}
    void setChatLastMessage(QString lastMessage ){this->chatLastMessage = lastMessage; return;}
    void setChatLastMessageType(QString lastMessageType ){this->chatLastMessageType = lastMessageType; return;}
    void setChatLastTime(QString lastTime ){this->chatLastTime = lastTime; return;}
    void setChatUnreadCount(int unreadCount ){this->chatUnreadCount = unreadCount; return;}
    void setChatName(QString name ){this->chatName = name; return;}
    void setChatAvatar(QString avatar ){this->chatAvatar = avatar; return;}
    void setChatStatus(QString status ){this->chatStatus = status; return;}
    //void setChatUnreadNumber(int number ){this->unreadNumber = number; return;}

private:
    QString chatId;     //群或用户
    QString chatType;
    QString chatLastMessage;
    QString chatLastMessageType;
    QString chatLastTime;
    int chatUnreadCount;
    QString chatStatus;
    QString chatName;
    QString chatAvatar;


};

#endif // USERCHAT_H
