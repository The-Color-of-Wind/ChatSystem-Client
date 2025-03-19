#ifndef MAINWIDGET_H
#define MAINWIDGET_H

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
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QMap>
#include <QMetaObject>

#include "loginwidget.h"
#include "registerwidget.h"
#include "serverconnect.h"
#include "serverconnectthread.h"
#include "serverreceive.h"
#include "serverreceivethread.h"
#include "user.h"
#include "userfriend.h"

#include "chatwidget.h"
#include "friendwidget.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

    void initialMainWidget(User user);



private slots:
    void on_chatButton_clicked();

    void on_friendButton_clicked();

signals:

private:
    Ui::MainWidget *ui;

    QTcpSocket *socket;

    QStackedWidget *stackedWidget;
    ChatWidget *chatWidget;
    FriendWidget *friendWidget;

    ServerConnect *serverConnect;

    User user;

    UserFriend needUserFriend;

};

#endif // MAINWIDGET_H
