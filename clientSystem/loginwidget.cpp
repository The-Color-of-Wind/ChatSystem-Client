#include "loginwidget.h"
#include "ui_loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::LoginWidget)
{
    ui->setupUi(this);

    initWidget();


    connect(ui->registerButton, &QPushButton::clicked, this, &LoginWidget::on_registerButton_clicked);

}
void LoginWidget::initWidget()
{
    ui->frame->setStyleSheet("background: transparent;");


    QPalette palette;
    palette.setBrush(QPalette::Window, QBrush(QPixmap(":/images/system/background.png")));
    this->setPalette(palette);
    this->setAutoFillBackground(true);

    ui->loginButton->setStyleSheet(
        "QPushButton {"
        "background-color: #ADD8E6; color: black; border-radius: 10px; padding: 8px 16px;" // 初始为浅蓝色
        "}"
        "QPushButton:hover { background-color: #87CEEB; }" // 悬停时稍深蓝色
        "QPushButton:pressed { background-color: #4682B4; }" // 按下时深蓝色
        );

    ui->registerButton->setStyleSheet(
        "QPushButton {"
        "background-color: #ADD8E6; color: black; border-radius: 10px; padding: 8px 16px;" // 初始为浅蓝色
        "}"
        "QPushButton:hover { background-color: #87CEEB; }" // 悬停时稍深蓝色
        "QPushButton:pressed { background-color: #4682B4; }" // 按下时深蓝色
        );

    ui->forgotPasswordButton->setStyleSheet(
        "QPushButton {"
        "background-color: #ADD8E6; color: black; border-radius: 10px; padding: 8px 16px;" // 初始为浅蓝色
        "}"
        "QPushButton:hover { background-color: #87CEEB; }" // 悬停时稍深蓝色
        "QPushButton:pressed { background-color: #4682B4; }" // 按下时深蓝色
        );


}
LoginWidget::~LoginWidget()
{
    delete ui;
}

void LoginWidget::on_registerButton_clicked()
{

    QTimer::singleShot(200, this, [this]() {
        ui->registerButton->setStyleSheet(
            "background-color: #A9A9A9; color: black; border-radius: 5px; padding: 8px 16px;" // 变为灰色
            );

        // 200ms后恢复回浅蓝色
        QTimer::singleShot(200, this, [this]() {
            ui->registerButton->setStyleSheet(
                "background-color: #ADD8E6; color: black; border-radius: 5px; padding: 8px 16px;" // 恢复浅蓝色
                );
        });
    });

    emit registerButtonClicked();   //发射信号
}


void LoginWidget::on_loginButton_clicked()
{

    // 点击后变为灰色
    QTimer::singleShot(200, this, [this]() {
        ui->loginButton->setStyleSheet(
            "background-color: #A9A9A9; color: black; border-radius: 5px; padding: 8px 16px;" // 变为灰色
            );

        // 200ms后恢复回浅蓝色
        QTimer::singleShot(200, this, [this]() {
            ui->loginButton->setStyleSheet(
                "background-color: #ADD8E6; color: black; border-radius: 5px; padding: 8px 16px;" // 恢复浅蓝色
                );
        });
    });


    QString userId = ui->numberlineEdit->text();
    QString userPassword = ui->passwordlineEdit->text();

    emit loginButtonClicked(userId, userPassword);

}


void LoginWidget::on_forgotPasswordButton_clicked()
{
    QTimer::singleShot(200, this, [this]() {
        ui->forgotPasswordButton->setStyleSheet(
            "background-color: #A9A9A9; color: black; border-radius: 5px; padding: 8px 16px;" // 变为灰色
            );

        // 200ms后恢复回浅蓝色
        QTimer::singleShot(200, this, [this]() {
            ui->forgotPasswordButton->setStyleSheet(
                "background-color: #ADD8E6; color: black; border-radius: 5px; padding: 8px 16px;" // 恢复浅蓝色
                );
        });
    });
}


void LoginWidget::keyPressEvent(QKeyEvent *event) {
    // 检查是否是回车键
    if (event->key() == Qt::Key_Return) {
        // 自动点击 loginButton
        on_loginButton_clicked(); // 假设这个函数是你点击按钮的槽函数
    }
    // 处理其他按键事件（如果有的话）
    QWidget::keyPressEvent(event);
}

