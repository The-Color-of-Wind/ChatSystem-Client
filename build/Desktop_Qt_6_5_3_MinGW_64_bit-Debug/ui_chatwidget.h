/********************************************************************************
** Form generated from reading UI file 'chatwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWIDGET_H
#define UI_CHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWidget
{
public:
    QSplitter *splitter;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QListWidget *chatListWidget;
    QWidget *widget_3;
    QFrame *frame_6;
    QPushButton *nameButton;
    QFrame *frame_3;
    QSplitter *splitter_2;
    QListWidget *chatWidget;
    QFrame *frame_2;
    QPushButton *emoticonButton;
    QPushButton *fileButton;
    QTextEdit *chatTextEdit;
    QFrame *frame;
    QPushButton *sendButton;

    void setupUi(QWidget *ChatWidget)
    {
        if (ChatWidget->objectName().isEmpty())
            ChatWidget->setObjectName("ChatWidget");
        ChatWidget->resize(690, 622);
        splitter = new QSplitter(ChatWidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(0, 0, 681, 620));
        splitter->setOrientation(Qt::Horizontal);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName("widget_2");
        widget_2->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(200, 620));
        widget_2->setMaximumSize(QSize(250, 620));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        frame_4 = new QFrame(widget_2);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(50, 50));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame_4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 151, 31));
        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(170, 10, 31, 31));
        chatListWidget = new QListWidget(frame_4);
        chatListWidget->setObjectName("chatListWidget");
        chatListWidget->setGeometry(QRect(0, 50, 240, 565));
        chatListWidget->setMinimumSize(QSize(200, 0));

        verticalLayout_2->addWidget(frame_4);

        splitter->addWidget(widget_2);
        widget_3 = new QWidget(splitter);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(400, 620));
        widget_3->setMaximumSize(QSize(16777215, 620));
        widget_3->setTabletTracking(false);
        frame_6 = new QFrame(widget_3);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(0, 10, 470, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setMinimumSize(QSize(470, 50));
        frame_6->setMaximumSize(QSize(470, 50));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        nameButton = new QPushButton(frame_6);
        nameButton->setObjectName("nameButton");
        nameButton->setGeometry(QRect(0, 10, 50, 30));
        nameButton->setMinimumSize(QSize(50, 30));
        nameButton->setMaximumSize(QSize(50, 30));
        frame_3 = new QFrame(widget_3);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(0, 60, 471, 561));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setMinimumSize(QSize(400, 100));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_3->setLineWidth(0);
        splitter_2 = new QSplitter(frame_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(0, 0, 471, 561));
        splitter_2->setOrientation(Qt::Vertical);
        splitter_2->setHandleWidth(0);
        chatWidget = new QListWidget(splitter_2);
        chatWidget->setObjectName("chatWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(chatWidget->sizePolicy().hasHeightForWidth());
        chatWidget->setSizePolicy(sizePolicy3);
        chatWidget->setMinimumSize(QSize(390, 100));
        chatWidget->setMaximumSize(QSize(16777215, 500));
        splitter_2->addWidget(chatWidget);
        frame_2 = new QFrame(splitter_2);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 30));
        frame_2->setMaximumSize(QSize(16777215, 30));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        emoticonButton = new QPushButton(frame_2);
        emoticonButton->setObjectName("emoticonButton");
        emoticonButton->setGeometry(QRect(0, 0, 31, 31));
        fileButton = new QPushButton(frame_2);
        fileButton->setObjectName("fileButton");
        fileButton->setGeometry(QRect(30, 0, 31, 31));
        splitter_2->addWidget(frame_2);
        chatTextEdit = new QTextEdit(splitter_2);
        chatTextEdit->setObjectName("chatTextEdit");
        sizePolicy3.setHeightForWidth(chatTextEdit->sizePolicy().hasHeightForWidth());
        chatTextEdit->setSizePolicy(sizePolicy3);
        chatTextEdit->setMinimumSize(QSize(0, 100));
        chatTextEdit->setMaximumSize(QSize(16777215, 400));
        splitter_2->addWidget(chatTextEdit);
        frame = new QFrame(splitter_2);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 33));
        frame->setMaximumSize(QSize(16777215, 33));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        sendButton = new QPushButton(frame);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(390, 0, 71, 28));
        splitter_2->addWidget(frame);
        splitter->addWidget(widget_3);

        retranslateUi(ChatWidget);

        QMetaObject::connectSlotsByName(ChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ChatWidget)
    {
        ChatWidget->setWindowTitle(QCoreApplication::translate("ChatWidget", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ChatWidget", "+", nullptr));
        nameButton->setText(QString());
        emoticonButton->setText(QString());
        fileButton->setText(QString());
        chatTextEdit->setHtml(QCoreApplication::translate("ChatWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        sendButton->setText(QCoreApplication::translate("ChatWidget", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatWidget: public Ui_ChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWIDGET_H
