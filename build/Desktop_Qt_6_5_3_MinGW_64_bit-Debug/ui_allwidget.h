/********************************************************************************
** Form generated from reading UI file 'allwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLWIDGET_H
#define UI_ALLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllWidget
{
public:

    void setupUi(QWidget *AllWidget)
    {
        if (AllWidget->objectName().isEmpty())
            AllWidget->setObjectName("AllWidget");
        AllWidget->resize(400, 300);

        retranslateUi(AllWidget);

        QMetaObject::connectSlotsByName(AllWidget);
    } // setupUi

    void retranslateUi(QWidget *AllWidget)
    {
        AllWidget->setWindowTitle(QCoreApplication::translate("AllWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllWidget: public Ui_AllWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLWIDGET_H
