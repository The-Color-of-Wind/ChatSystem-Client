/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *avatarButton;
    QPushButton *chatButton;
    QPushButton *friendButton;
    QPushButton *momentsButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *setupButton;
    QWidget *changeWidget;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName("MainWidget");
        MainWidget->resize(750, 622);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWidget->sizePolicy().hasHeightForWidth());
        MainWidget->setSizePolicy(sizePolicy);
        MainWidget->setMinimumSize(QSize(750, 622));
        MainWidget->setMaximumSize(QSize(750, 622));
        frame = new QFrame(MainWidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 10, 55, 600));
        frame->setMinimumSize(QSize(55, 600));
        frame->setMaximumSize(QSize(55, 600));
        frame->setLayoutDirection(Qt::RightToLeft);
        frame->setAutoFillBackground(false);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 51, 581));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        avatarButton = new QPushButton(layoutWidget);
        avatarButton->setObjectName("avatarButton");
        avatarButton->setMinimumSize(QSize(45, 45));
        avatarButton->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(avatarButton);

        chatButton = new QPushButton(layoutWidget);
        chatButton->setObjectName("chatButton");
        chatButton->setMinimumSize(QSize(45, 45));
        chatButton->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(chatButton);

        friendButton = new QPushButton(layoutWidget);
        friendButton->setObjectName("friendButton");
        friendButton->setMinimumSize(QSize(45, 45));
        friendButton->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(friendButton);

        momentsButton = new QPushButton(layoutWidget);
        momentsButton->setObjectName("momentsButton");
        momentsButton->setMinimumSize(QSize(45, 45));
        momentsButton->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(momentsButton);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(45, 45));
        pushButton_3->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(45, 45));
        pushButton_4->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(45, 45));
        pushButton_5->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setMinimumSize(QSize(45, 45));
        pushButton_6->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setMinimumSize(QSize(45, 45));
        pushButton_7->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(45, 45));
        pushButton_8->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(pushButton_8);

        setupButton = new QPushButton(layoutWidget);
        setupButton->setObjectName("setupButton");
        setupButton->setMinimumSize(QSize(45, 45));
        setupButton->setMaximumSize(QSize(45, 45));

        verticalLayout->addWidget(setupButton);

        changeWidget = new QWidget(MainWidget);
        changeWidget->setObjectName("changeWidget");
        changeWidget->setGeometry(QRect(60, 0, 681, 621));

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "Form", nullptr));
#if QT_CONFIG(statustip)
        frame->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        avatarButton->setText(QString());
        chatButton->setText(QString());
        friendButton->setText(QString());
        momentsButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        setupButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
