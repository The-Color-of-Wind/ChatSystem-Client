#include "message.h"

Message::Message() {}

Message::Message(QString sendId, QString receiverId, QString chatType, QString body, QString type, QString filePath, QString timestamp)
    :messageSendId(sendId),messageReceiverId(receiverId), messageChatType(chatType), messageBody(body), messageType(type), messageFilePath(filePath), messageTimestamp(timestamp)
{}
