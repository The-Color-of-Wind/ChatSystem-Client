#ifndef ACTION_H
#define ACTION_H

#include <QWidget>
#include <QStackedWidget>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QPushButton>

#include <QTcpSocket>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMetaObject>

#include "loginwidget.h"
#include "registerwidget.h"
#include "serverconnect.h"
#include "serverconnectthread.h"
#include "serverreceivethread.h"
#include "user.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Action;
}
QT_END_NAMESPACE

class Action : public QWidget
{
    Q_OBJECT

public:
    Action(QWidget *parent = nullptr);
    ~Action();

public:


signals:


private slots:
    //展示界面
    void showLoginWidget();
    void showRegisterWidget();

    void loginConnect(QString id, QString password);

    void registerConnect(QString phone, QString name, QString password);
    void showRegisterSuccess(QString id);

    void showErrorMessage(QString message);


private:
    Ui::Action *ui;

    QSqlDatabase mydb;

    QStackedWidget *stackedWidget;
    LoginWidget *loginWidget;
    RegisterWidget *registerWidget;

};
#endif // ACTION_H
