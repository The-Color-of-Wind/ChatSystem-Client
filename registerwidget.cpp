#include "registerwidget.h"
#include "ui_registerwidget.h"

RegisterWidget::RegisterWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegisterWidget)
{
    ui->setupUi(this);
}

RegisterWidget::~RegisterWidget()
{
    delete ui;

    connect(ui->backButton, &QPushButton::clicked,  this, &RegisterWidget::on_backButton_clicked);
}
void RegisterWidget::keyPressEvent(QKeyEvent *event) {
    // 检查是否是回车键
    if (event->key() == Qt::Key_Return) {
        // 自动点击 loginButton
        on_registerButton_clicked(); // 假设这个函数是你点击按钮的槽函数
    }
    // 处理其他按键事件（如果有的话）
    QWidget::keyPressEvent(event);
}

QString convertUnicodeToString(const QString &input) {

    QString result = input;

    // 正则表达式，用于匹配形如 \8BE5、\624B 等的 Unicode 转义字符
    QRegularExpression rx(R"(\\([A-Fa-f0-9]{4,6}))");  // 注意这里用的是原始字符串

    // 使用正则表达式查找所有的匹配项
    QRegularExpressionMatchIterator i = rx.globalMatch(result);
    while (i.hasNext()) {
        QRegularExpressionMatch match = i.next();
        bool ok;
        // 提取 Unicode 编码并将其转换为字符
        int unicodeValue = match.captured(1).toInt(&ok, 16);

        if (ok) {
            // 如果转换成功，将匹配到的 Unicode 编码替换为对应的字符
            result.replace(match.capturedStart(0), match.capturedLength(0), QString(QChar(unicodeValue)));
        }
    }

    // 返回转换后的字符串
    return result;
}


void RegisterWidget::on_registerButton_clicked()
{
    //封装，连接服务器后，传数据，接收数据

    QString m_phone = ui->phonelineEdit->text();
    QString m_name = ui->namelineEdit->text();
    QString m_passWord = ui->passwordlineEdit->text();

    emit registerButtonClicked(m_phone, m_name, m_passWord);

    // QString sql = QString("call register ('%1', '%2', '%3');").arg(m_phone).arg(m_name).arg(m_passWord);

    // QSqlQuery query;
    // if(query.exec(sql)){
    //     QMessageBox::information(this, "注册提示", "恭喜您，注册成功！");
    // }
    // else{
    //     QString errorMsg = query.lastError().text();
    //     qDebug() << errorMsg;
    //     QString decodedErrorMsg = convertUnicodeToString(errorMsg);

    //     qDebug() << decodedErrorMsg;
    //     QMessageBox::information(this, "注册提示","注册失败！错误信息: " + decodedErrorMsg);
    // }
}



void RegisterWidget::on_backButton_clicked()
{
    emit backButtonClicked();
}

