#include "loginwidget.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWidget)
{
    ui->setupUi(this);

    connect(ui->registerButton, &QPushButton::clicked, this, &LoginWidget::on_registerButton_clicked);

}

LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::on_registerButton_clicked()
{
    emit registerButtonClicked();   //发射信号
}


void LoginWidget::on_loginButton_clicked()
{
    QString userId = ui->numberlineEdit->text();
    QString userPassword = ui->passwordlineEdit->text();

    emit loginButtonClicked(userId, userPassword);

}

