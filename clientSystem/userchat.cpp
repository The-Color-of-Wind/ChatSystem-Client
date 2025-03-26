#include "userchat.h"

UserChat::UserChat() {}
UserChat::UserChat(QString id, QString type, QString lastMessage, QString lastMessageType, QString lastTime, int unreadCount, QString status, QString name, QString avatar)
    : chatId(id),chatType(type), chatLastMessage(lastMessage), chatLastMessageType(lastMessageType), chatLastTime(lastTime), chatUnreadCount(unreadCount), chatStatus(status), chatName(name), chatAvatar(avatar)
{}
