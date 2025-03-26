#ifndef FRIEND_H
#define FRIEND_H

#include <QPixmap>
#include <QString>

class Friend
{
public:
    Friend();

private:
    long long int userId;
    QString friendStatus;   //是否已经添加好友 pending  accepted  refused
    QString userStatus;     //inactive  active  busy
    QPixmap userAvatar;


};

#endif // FRIEND_H
