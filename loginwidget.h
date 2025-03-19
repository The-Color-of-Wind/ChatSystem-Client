#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QDebug>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();
signals:
    void registerButtonClicked();
    void loginButtonClicked(QString id, QString password);
    void loginSuccess();

private slots:
    void on_registerButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::LoginWidget *ui;
};

#endif // LOGINWIDGET_H
