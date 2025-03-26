#include "user.h"

User::User() {}

User::User(QString id, QString password, QString phone, QString name, QString email, QString avatar)
    : userId(id), userPassword(password), userPhone(phone), userName(name), userEmail(email), userAvatar(avatar)
{ }
