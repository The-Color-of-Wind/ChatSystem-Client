/********************************************************************************
** Form generated from reading UI file 'registerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIDGET_H
#define UI_REGISTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWidget
{
public:
    QLabel *label_2;
    QLineEdit *passwordlineEdit;
    QLineEdit *phonelineEdit;
    QLineEdit *namelineEdit;
    QPushButton *backButton;
    QLabel *label_3;
    QLabel *label;
    QPushButton *registerButton;

    void setupUi(QWidget *RegisterWidget)
    {
        if (RegisterWidget->objectName().isEmpty())
            RegisterWidget->setObjectName("RegisterWidget");
        RegisterWidget->resize(350, 420);
        RegisterWidget->setMinimumSize(QSize(350, 420));
        RegisterWidget->setMaximumSize(QSize(350, 420));
        label_2 = new QLabel(RegisterWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 200, 69, 19));
        passwordlineEdit = new QLineEdit(RegisterWidget);
        passwordlineEdit->setObjectName("passwordlineEdit");
        passwordlineEdit->setGeometry(QRect(130, 200, 181, 25));
        phonelineEdit = new QLineEdit(RegisterWidget);
        phonelineEdit->setObjectName("phonelineEdit");
        phonelineEdit->setGeometry(QRect(130, 70, 171, 25));
        namelineEdit = new QLineEdit(RegisterWidget);
        namelineEdit->setObjectName("namelineEdit");
        namelineEdit->setGeometry(QRect(130, 130, 171, 25));
        backButton = new QPushButton(RegisterWidget);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(120, 340, 93, 28));
        label_3 = new QLabel(RegisterWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 130, 69, 19));
        label = new QLabel(RegisterWidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 70, 61, 19));
        registerButton = new QPushButton(RegisterWidget);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(100, 270, 141, 51));

        retranslateUi(RegisterWidget);

        QMetaObject::connectSlotsByName(RegisterWidget);
    } // setupUi

    void retranslateUi(QWidget *RegisterWidget)
    {
        RegisterWidget->setWindowTitle(QCoreApplication::translate("RegisterWidget", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWidget", "\345\257\206\347\240\201", nullptr));
        backButton->setText(QCoreApplication::translate("RegisterWidget", "\350\277\224\345\233\236", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        label->setText(QCoreApplication::translate("RegisterWidget", "\346\211\213\346\234\272\345\217\267", nullptr));
        registerButton->setText(QCoreApplication::translate("RegisterWidget", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWidget: public Ui_RegisterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIDGET_H
