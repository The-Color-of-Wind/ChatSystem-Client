#include "userfriend.h"

UserFriend::UserFriend() {}


UserFriend::UserFriend(QString id, QString phone, QString name, QString email, QString avatar, QString status, QString created, QString relation, QString createdRelation)
    : userFriendId(id), userFriendPhone(phone), userFriendName(name),
    userFriendEmail(email), userFriendAvatar(avatar), userFriendStatus(status),
    userFriendCreated(created), userFriendRelation(relation), userCreatedRelation(createdRelation)
{ }
