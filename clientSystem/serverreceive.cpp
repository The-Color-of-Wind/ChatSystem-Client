#include "serverreceive.h"

void ServerReceive::onReadyRead()
{
    static QByteArray buffer;
    buffer.append(socket->readAll());

    //qDebug() << "当前缓冲区总大小:" << buffer.size();

    while (buffer.size() >= 4) {
        uint32_t netLen;
        memcpy(&netLen, buffer.constData(), 4);
        uint32_t expectedLen = ntohl(netLen);

        //qDebug() << "解析到长度字段（网络序）:" << netLen << ", 转为主机序:" << expectedLen;

        if (buffer.size() < 4 + expectedLen) {
            qDebug() << " 数据还不完整，已接收:" << buffer.size() << ", 预期总长:" << 4 + expectedLen;
            return;
        }

        QByteArray jsonData = buffer.mid(4, expectedLen);
        buffer = buffer.mid(4 + expectedLen);

        //qDebug() << "实际提取数据大小:" << jsonData.size();
        //qDebug() << " JSON 字符串内容如下:\n" << QString::fromUtf8(jsonData);
        //qDebug() << "剩余缓冲区大小:" << buffer.size();

        QJsonParseError parseError;
        QJsonDocument doc = QJsonDocument::fromJson(jsonData, &parseError);
        if (parseError.error != QJsonParseError::NoError) {
            qDebug() << "SON 解析失败:" << parseError.errorString();
            continue;
        }

        if (doc.isObject()) {
            QJsonArray jsonArray;
            jsonArray.append(doc.object());
            handleJsonArray(jsonArray, jsonData);
        }
        else if (doc.isArray()) {
            handleJsonArray(doc.array(), jsonData);
        }
        else {
            qDebug() << "JSON 数据既不是对象也不是数组！";
        }
    }
}
void ServerReceive::handleJsonArray(const QJsonArray& jsonArray, const QByteArray& jsonData)
{
    int index = 0;
    QMap<QString, UserFriend> userFriendMap;
    QVector<UserChat> userChatVector;
    QVector<Message> friendsUnreadMessages;

    for (const QJsonValue& value : jsonArray) {
        index++;
        if (!value.isObject()) continue;

        QJsonObject jsonResponse = value.toObject();
        QString type = jsonResponse["type"].toString();
        QString status = jsonResponse["status"].toString();

        //qDebug() << "[" << index << "] type:" << type << ", status:" << status;

        //qDebug() << "JSON 字符串内容如下:\n" << QString::fromUtf8(jsonData);

        if (type == "login") {
            if (status == "success") {
                User user(jsonResponse["user_id"].toString(), jsonResponse["user_password"].toString(), jsonResponse["user_phone"].toString(),
                    jsonResponse["user_name"].toString(), jsonResponse["user_email"].toString(), jsonResponse["user_avatar"].toString());
                emit loginSuccess(user);
            }
            else {
                emit sendErrorSignal(status);
            }
        }
        else if (type == "register") {
            if (status == "success") {
                QString id = jsonResponse["user_id"].toString();
                emit registerSucess(id);
            }
            else {
                emit sendErrorSignal(status);
            }
        }
        else if (type == "friends") {
            if (status == "success") {
                QString user_id = jsonResponse["user_id"].toString();
                UserFriend userFriend(jsonResponse["user_id"].toString(), jsonResponse["user_phone"].toString(),
                    jsonResponse["user_name"].toString(), jsonResponse["user_email"].toString(),
                    jsonResponse["user_avatar"].toString(), jsonResponse["user_status"].toString(),
                    jsonResponse["user_created"].toString(), jsonResponse["friend_relation"].toString(),
                    jsonResponse["created_relation"].toString());
                userFriendMap.insert(user_id, userFriend);
                if (index == jsonArray.size())
                    emit getFriendsSuccess(userFriendMap);
            }
            else {
                QString message = jsonResponse["message"].toString();
                //emit sendNullFriends(userFriendVector);
            }
        }
        else if (type == "chatting") {
            if (status == "success") {
                QString count = jsonResponse["unread_count"].toString();
                bool ok;
                int value = count.toInt(&ok);
                UserChat userChat(jsonResponse["comm_id"].toString(), jsonResponse["chat_type"].toString(),
                    jsonResponse["last_message"].toString(), jsonResponse["last_message_type"].toString(),
                    jsonResponse["last_time"].toString(), value,
                    jsonResponse["chat_status"].toString(), jsonResponse["user_name"].toString(), jsonResponse["user_avatar"].toString());

                userChatVector.append(userChat);
                QString a = jsonResponse["chat_status"].toString();
                qDebug() << "id" << jsonResponse["comm_id"].toString();
                qDebug() << "jsonResponse[\"chat_status\"]" << a;
                qDebug() << jsonResponse["unread_count"].toString();

                if (index == jsonArray.size())
                    emit getChatsSuccess(userChatVector);
            }
            else {
                QString message = jsonResponse["message"].toString();
                //emit sendNullChats(userFriendVector);
            }
        }
        else if (type == "send_message") {
            if (status == "success") {

                //emit sendMessageSuccess();
            }
            else {
                //emit 把文件里的聊天记录删掉
            }
        }
        else if (type == "receive_message") {
            if (status == "success") {
                Message message(jsonResponse["send_id"].toString(),
                    jsonResponse["receiver_id"].toString(), jsonResponse["chat_type"].toString(),
                    jsonResponse["message_body"].toString(), jsonResponse["message_type"].toString(),
                    jsonResponse["file_path"].toString(), jsonResponse["message_timestamp"].toString());
                emit receiveMessageSuccess(message);

                //存文件，显示聊天记录
            }
            else {
                //emit 把文件里的聊天记录删掉
            }
        }
        else if (type == "update_chat") {
            if (status == "success") {

                //emit sendMessageSuccess();
            }
            else {
                //emit 把文件里的聊天记录删掉
            }
        }
        else if (type == "get_unread_messages") {
            if (status == "success") {
                Message message(jsonResponse["send_id"].toString(),
                    jsonResponse["receiver_id"].toString(), jsonResponse["chat_type"].toString(),
                    jsonResponse["message_body"].toString(), jsonResponse["message_type"].toString(),
                    jsonResponse["file_path"].toString(), jsonResponse["message_timestamp"].toString());
                friendsUnreadMessages.append(message);
                emit getFriendsUnreadMessagesSuccess(friendsUnreadMessages);
                //emit sendMessageSuccess();
            }
            else {
                //emit 把文件里的聊天记录删掉
                qDebug() << "null  null";
                emit getFriendsUnreadMessagesSuccess(friendsUnreadMessages);
            }
        }
        else if (type == "search_user") { //密码传过来了，有时间修改
            if (status == "success") {
                User search_user(jsonResponse["user_id"].toString(), jsonResponse["user_password"].toString(), jsonResponse["user_phone"].toString(),
                    jsonResponse["user_name"].toString(), jsonResponse["user_email"].toString(), jsonResponse["user_avatar"].toString());
                UserFriend userFriend;
                userFriend.setUserFriendAvatar(search_user.getUserAvatar());
                userFriend.setUserFriendEmail(search_user.getUserEmail());
                userFriend.setUserFriendId(search_user.getUserId());
                userFriend.setUserFriendName(search_user.getUserName());
                userFriend.setUserFriendPhone(search_user.getUserPhone());
                emit getUserInformation(userFriend, false);
            }
            else {
                emit getUserInformationError();
            }
        }
        else if (type == "add_friend") { //密码传过来了，有时间修改
            if (status == "success") {

            }
            else {

            }
        }
        else if (type == "accept_friend") { //密码传过来了，有时间修改
            qDebug() << "accept_friend  Success";
            if (status == "success") {
                /*
        UserFriend accpetUserFriend(jsonResponse["user_id"].toString(), jsonResponse["user_phone"].toString(),
                              jsonResponse["user_name"].toString(), jsonResponse["user_email"].toString(),
                              jsonResponse["user_avatar"].toString(), jsonResponse["user_status"].toString(),
                              jsonResponse["user_created"].toString(), jsonResponse["friend_relation"].toString(),
                              jsonResponse["created_relation"].toString());
*/
//UserChat acceptUserChat;
//emit accpetFriendSuccess(accpetUserFriend);
                emit accpetFriendSuccess();
                qDebug() << "accpetFriend  Success";
            }
            else {
                //emit getUserInformationError();
                qDebug() << "add_friend error";
            }
        }
        else if (type == "delete_friend") { //密码传过来了，有时间修改
            qDebug() << "delete_friend  Success";
            if (status == "success") {
                QString userId = jsonResponse["user_id"].toString();
                QString friendId = jsonResponse["friend_id"].toString();
                emit deleteFriendSuccess(userId, friendId);
                qDebug() << "delete_friend  Success";
            }
            else {

                qDebug() << "delete_friend error";
            }
        }
        //serverconnect发送数据、接收数据、发送信号
        //chatwidget 变量Map<messag>  接收信号
        //写入文件即可，程序会自动调用
    }
}

