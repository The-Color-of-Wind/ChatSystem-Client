#ifndef CHATWIDGET_H
#define CHATWIDGET_H

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

#include <QTextEdit>             // 用于使用 QTextEdit 控件
#include <QTextCursor>           // 用于操作文本光标
#include <QTextImageFormat>      // 用于插入图片
#include <QClipboard>            // 用于访问剪贴板
#include <QMimeData>             // 用于处理 MIME 数据（如文件路径、图片等）
#include <QDragEnterEvent>       // 用于处理拖动进入事件
#include <QDropEvent>            // 用于处理拖放事件
#include <QUrl>                  // 用于解析文件 URL
#include <QImage>                // 用于处理图像数据
#include <QApplication>          // 用于访问 QApplication 类，获取剪贴板
#include <QFileDialog>           // 用于选择文件
#include <QRegularExpression>
#include <QVector>

#include <QMetaObject>


#include "serverconnect.h"
#include "serverconnectthread.h"
#include "serverreceive.h"
#include "serverreceivethread.h"
#include "user.h"
#include "userchat.h"
#include "message.h"


namespace Ui {
class ChatWidget;
}

class ChatWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChatWidget(User user, QWidget *parent = nullptr);
    ~ChatWidget();

public: //创建界面
    //创建聊天记录界面
    QWidget *createMessageWidget(const QString &avatar,const QString &message, bool isSelf);
    void addMessageToChat(const QString &avatar,const QString &message, bool isSelf);
    void initChatTextEdit();

public: //功能函数
    User getUser(){return this->user;}
    void setUser(User user){this->user = user; return;}
    UserFriend getUserFriend(){return this->userFriend;}
    QVector<UserChat> getUserChatVector(){return this->userChatVector;}




    void addChatRecord(const Message &message);
    QVector<QRegularExpressionMatch> readChatRecord(const QString &friendId, const int &limit);

    //接收数据，更新聊天列表
    void updateChattingLast(Message &message);

    void updateChattingLast(UserFriend &userFriend);

    //更新服务器chat
    void updateServerChat(UserChat value);

    //插入未读消息
    void addFriendsUnreadMessages(QVector<Message> friendsUnreadMessages);

private slots:
    void showChatsListWidegt(QVector<UserChat> userChatVector);

    void createFriendChatWidget(UserChat &value);

    void receiveMessage(Message &message);

    void on_sendButton_clicked();

    void on_fileButton_clicked();

    void updateChattingLast(int unreadCount = 0);

    //void updateChatsList(UserFriend acceptFriend, UserChat acceptFriendChat);

signals:
    void getUserMessage(QString &userId);


private:    //重写函数
    //bool eventFilter(QObject *obj, QEvent *event);
    //void on_chatTextEdit_paste();
    bool eventFilter(QObject *obj, QEvent *event)  override;

private:
    Ui::ChatWidget *ui;
    User user;
    UserFriend userFriend;
    UserChat chattingFriend;
    QVector<UserChat> userChatVector;
};

#endif // CHATWIDGET_H
