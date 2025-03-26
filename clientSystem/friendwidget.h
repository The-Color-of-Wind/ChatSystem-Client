#ifndef FRIENDWIDGET_H
#define FRIENDWIDGET_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>

#include <QTcpSocket>
#include <QDebug>
#include <QSplitter>
#include <QListView>
#include <QTextEdit>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QImage>
#include <QString>
#include <QListWidget>
#include <QMenu>
#include <QUrl>
#include <QFileDialog>
#include <QMetaObject>

#include <QButtonGroup>

#include "serverconnect.h"
#include "serverconnectthread.h"
#include "serverreceive.h"
#include "serverreceivethread.h"
#include "user.h"
#include "friend.h"

namespace Ui {
class FriendWidget;
}

class FriendWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FriendWidget(User user, QWidget *parent = nullptr);
    QMap<QString, UserFriend> getUserFriendMap(){return this->userFriendMap;}

    //显示好友信息
    void showFriendInformation();

    //显示新的朋友
    void showNewFriendList();

    ~FriendWidget();

    void setClickingUserFriend(UserFriend userFriend)  { this->clickingUserFriend = userFriend; return;}
    UserFriend getClickingUserFriend() const {return clickingUserFriend;}

public slots:
    void showFriendsListWidegt(QMap<QString, UserFriend> userFriendVector);

signals:
    void sendClickUserFriend(UserFriend userFriend);


private slots:
    void on_sendMessageButton_clicked();

    void on_searchFriendButton_clicked();

    void on_addFriendButton_clicked();

    //显示好友搜索结果
    bool on_friendIdLineEdit_textChanged(const QString &text);

    void showSearchUserInformation(UserFriend userFriend, bool isFriend);

    //void updateAcceptSuccess(UserFriend acceptUserFriend);



    void on_cancelButton_clicked();

private:
    Ui::FriendWidget *ui;
    QLabel *markLabel;

    User user;
    QMap<QString, UserFriend> userFriendMap;
    QListWidget *searchResultListWidget;

    UserFriend clickingUserFriend;
    UserChat clickingUsesrChat;

    //保存好友请求
    QVector<UserFriend> newFriends;

};

#endif // FRIENDWIDGET_H
