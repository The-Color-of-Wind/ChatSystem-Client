#ifndef MESSAGE_H
#define MESSAGE_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>

#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>

class Message
{
public:
    Message();
    Message(QString sendId, QString receiverId, QString chatType, QString body, QString type, QString filePath, QString timestamp);

public:
    //QString getMessageId()const{return this->messgaeId;}
    QString getMessageSendId()const{return this->messageSendId;}
    QString getMessageReceiverId()const{return this->messageReceiverId;}
    QString getMessageChatType()const{return this->messageChatType;}
    QString getMessageBody()const{return this->messageBody;}
    QString getMessageType()const{return this->messageType;}
    QString getMessageFilePath()const{return this->messageFilePath;}
    QString getMessageTimestamp()const{return this->messageTimestamp;}


    //void setMessageId(QString messgaeId ){this->messgaeId = messgaeId; return;}
    void setMessageSendId(QString sendId ){this->messageSendId = sendId; return;}
    void setMessageReceiverId(QString receiverId ){this->messageReceiverId = receiverId; return;}
    void setMessageChatType(QString chatType ){this->messageChatType = chatType; return;}
    void setMessageBody(QString body ){this->messageBody = body; return;}
    void setMessageType(QString type ){this->messageType = type; return;}
    void setMessageFilePath(QString filePath ){this->messageFilePath = filePath; return;}
    void setMessageTimestamp(QString timestamp ){this->messageTimestamp = timestamp; return;}


private:
    //QString messgaeId;
    QString messageSendId;
    QString messageReceiverId;
    QString messageChatType;
    QString messageBody;
    QString messageType;
    QString messageFilePath;
    QString messageTimestamp;

};

#endif // MESSAGE_H
