/********************************************************************************
** Form generated from reading UI file 'loginwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIDGET_H
#define UI_LOGINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWidget
{
public:
    QPushButton *loginButton;
    QLabel *label_2;
    QLineEdit *numberlineEdit;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *passwordlineEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *forgotPasswordButton;
    QPushButton *registerButton;

    void setupUi(QWidget *LoginWidget)
    {
        if (LoginWidget->objectName().isEmpty())
            LoginWidget->setObjectName("LoginWidget");
        LoginWidget->resize(350, 420);
        LoginWidget->setMinimumSize(QSize(350, 420));
        LoginWidget->setMaximumSize(QSize(350, 420));
        loginButton = new QPushButton(LoginWidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(120, 260, 91, 51));
        label_2 = new QLabel(LoginWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 130, 71, 31));
        numberlineEdit = new QLineEdit(LoginWidget);
        numberlineEdit->setObjectName("numberlineEdit");
        numberlineEdit->setGeometry(QRect(92, 130, 201, 31));
        label = new QLabel(LoginWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 30, 221, 71));
        label_4 = new QLabel(LoginWidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 180, 71, 31));
        passwordlineEdit = new QLineEdit(LoginWidget);
        passwordlineEdit->setObjectName("passwordlineEdit");
        passwordlineEdit->setGeometry(QRect(90, 180, 201, 31));
        layoutWidget = new QWidget(LoginWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 330, 231, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        forgotPasswordButton = new QPushButton(layoutWidget);
        forgotPasswordButton->setObjectName("forgotPasswordButton");

        horizontalLayout->addWidget(forgotPasswordButton);

        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName("registerButton");

        horizontalLayout->addWidget(registerButton);


        retranslateUi(LoginWidget);

        QMetaObject::connectSlotsByName(LoginWidget);
    } // setupUi

    void retranslateUi(QWidget *LoginWidget)
    {
        LoginWidget->setWindowTitle(QCoreApplication::translate("LoginWidget", "Form", nullptr));
        loginButton->setText(QCoreApplication::translate("LoginWidget", "\347\231\273\345\275\225", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic;\">\350\264\246\345\217\267</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700; font-style:italic;\">AnimalChat</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWidget", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic;\">\345\257\206\347\240\201</span></p></body></html>", nullptr));
        forgotPasswordButton->setText(QCoreApplication::translate("LoginWidget", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        registerButton->setText(QCoreApplication::translate("LoginWidget", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWidget: public Ui_LoginWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIDGET_H
