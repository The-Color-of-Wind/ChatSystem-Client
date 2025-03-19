/********************************************************************************
** Form generated from reading UI file 'action.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTION_H
#define UI_ACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Action
{
public:

    void setupUi(QWidget *Action)
    {
        if (Action->objectName().isEmpty())
            Action->setObjectName("Action");
        Action->resize(800, 600);

        retranslateUi(Action);

        QMetaObject::connectSlotsByName(Action);
    } // setupUi

    void retranslateUi(QWidget *Action)
    {
        Action->setWindowTitle(QCoreApplication::translate("Action", "Action", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Action: public Ui_Action {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTION_H
