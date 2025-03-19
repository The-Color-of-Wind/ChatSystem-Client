#ifndef REGISTERWIDGET_H
#define REGISTERWIDGET_H

#include <QWidget>
#include <QRegularExpression>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QString>


namespace Ui {
class RegisterWidget;
}

class RegisterWidget : public QWidget
{
    Q_OBJECT

public:
    explicit RegisterWidget(QWidget *parent = nullptr);
    ~RegisterWidget();

signals:
    void backButtonClicked();
    void registerButtonClicked(QString m_phone, QString m_name, QString m_passWord);

signals:
    void sendData(QString data);

private slots:
    void on_registerButton_clicked();

    void on_backButton_clicked();

private:
    Ui::RegisterWidget *ui;
};

#endif // REGISTERWIDGET_H
