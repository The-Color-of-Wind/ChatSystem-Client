/********************************************************************************
** Form generated from reading UI file 'friendwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDWIDGET_H
#define UI_FRIENDWIDGET_H

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

class Ui_FriendWidget
{
public:
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QPushButton *searchFriendButton;
    QListWidget *friendsListWidget;
    QLineEdit *friendIdLineEdit;
    QPushButton *cancelButton;
    QWidget *widget;
    QSplitter *splitter;
    QFrame *frame;
    QLineEdit *idLineEdit;
    QLineEdit *nameLineEdit;
    QLineEdit *areaLineEdit;
    QPushButton *avatarButton;
    QLineEdit *remarkLineEdit;
    QFrame *frame_2;
    QLineEdit *lineEdit_2;
    QTextEdit *remarkTextEdit;
    QFrame *frame_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QTextEdit *textEdit_6;
    QFrame *frame_5;
    QPushButton *sendMessageButton;
    QPushButton *voiceChatButton;
    QPushButton *videoChatButton;
    QPushButton *addFriendButton;
    QListWidget *newfriendsListWidget;

    void setupUi(QWidget *FriendWidget)
    {
        if (FriendWidget->objectName().isEmpty())
            FriendWidget->setObjectName("FriendWidget");
        FriendWidget->resize(700, 622);
        widget_2 = new QWidget(FriendWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setEnabled(true);
        widget_2->setGeometry(QRect(0, 0, 200, 620));
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
        searchFriendButton = new QPushButton(frame_4);
        searchFriendButton->setObjectName("searchFriendButton");
        searchFriendButton->setGeometry(QRect(160, 10, 31, 31));
        friendsListWidget = new QListWidget(frame_4);
        friendsListWidget->setObjectName("friendsListWidget");
        friendsListWidget->setGeometry(QRect(0, 44, 190, 571));
        friendsListWidget->setMinimumSize(QSize(190, 0));
        friendIdLineEdit = new QLineEdit(frame_4);
        friendIdLineEdit->setObjectName("friendIdLineEdit");
        friendIdLineEdit->setGeometry(QRect(0, 10, 151, 31));
        cancelButton = new QPushButton(frame_4);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(160, 10, 31, 31));

        verticalLayout_2->addWidget(frame_4);

        widget = new QWidget(FriendWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(200, 70, 491, 461));
        splitter = new QSplitter(widget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(0, 20, 491, 441));
        splitter->setOrientation(Qt::Vertical);
        frame = new QFrame(splitter);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 130));
        frame->setMaximumSize(QSize(16777215, 130));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        idLineEdit = new QLineEdit(frame);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setGeometry(QRect(130, 80, 251, 16));
        nameLineEdit = new QLineEdit(frame);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(130, 60, 251, 16));
        areaLineEdit = new QLineEdit(frame);
        areaLineEdit->setObjectName("areaLineEdit");
        areaLineEdit->setGeometry(QRect(130, 100, 251, 16));
        avatarButton = new QPushButton(frame);
        avatarButton->setObjectName("avatarButton");
        avatarButton->setGeometry(QRect(30, 30, 71, 71));
        remarkLineEdit = new QLineEdit(frame);
        remarkLineEdit->setObjectName("remarkLineEdit");
        remarkLineEdit->setGeometry(QRect(130, 30, 113, 25));
        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 70));
        frame_2->setMaximumSize(QSize(16777215, 70));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(30, 20, 41, 25));
        remarkTextEdit = new QTextEdit(frame_2);
        remarkTextEdit->setObjectName("remarkTextEdit");
        remarkTextEdit->setGeometry(QRect(130, 10, 321, 51));
        splitter->addWidget(frame_2);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 130));
        frame_3->setMaximumSize(QSize(16777215, 130));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        textEdit = new QTextEdit(frame_3);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 10, 91, 31));
        textEdit_2 = new QTextEdit(frame_3);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 40, 91, 31));
        textEdit_3 = new QTextEdit(frame_3);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 70, 91, 31));
        textEdit_4 = new QTextEdit(frame_3);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(130, 10, 321, 31));
        textEdit_5 = new QTextEdit(frame_3);
        textEdit_5->setObjectName("textEdit_5");
        textEdit_5->setGeometry(QRect(130, 40, 321, 31));
        textEdit_6 = new QTextEdit(frame_3);
        textEdit_6->setObjectName("textEdit_6");
        textEdit_6->setGeometry(QRect(130, 70, 321, 31));
        splitter->addWidget(frame_3);
        frame_5 = new QFrame(splitter);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        sendMessageButton = new QPushButton(frame_5);
        sendMessageButton->setObjectName("sendMessageButton");
        sendMessageButton->setGeometry(QRect(90, 20, 61, 51));
        voiceChatButton = new QPushButton(frame_5);
        voiceChatButton->setObjectName("voiceChatButton");
        voiceChatButton->setGeometry(QRect(190, 20, 61, 51));
        videoChatButton = new QPushButton(frame_5);
        videoChatButton->setObjectName("videoChatButton");
        videoChatButton->setGeometry(QRect(290, 20, 61, 51));
        addFriendButton = new QPushButton(frame_5);
        addFriendButton->setObjectName("addFriendButton");
        addFriendButton->setGeometry(QRect(190, 20, 61, 51));
        splitter->addWidget(frame_5);
        newfriendsListWidget = new QListWidget(FriendWidget);
        newfriendsListWidget->setObjectName("newfriendsListWidget");
        newfriendsListWidget->setGeometry(QRect(280, 30, 321, 571));
        newfriendsListWidget->setMinimumSize(QSize(190, 0));

        retranslateUi(FriendWidget);

        QMetaObject::connectSlotsByName(FriendWidget);
    } // setupUi

    void retranslateUi(QWidget *FriendWidget)
    {
        FriendWidget->setWindowTitle(QCoreApplication::translate("FriendWidget", "Form", nullptr));
        searchFriendButton->setText(QCoreApplication::translate("FriendWidget", "s", nullptr));
        cancelButton->setText(QCoreApplication::translate("FriendWidget", "C", nullptr));
        avatarButton->setText(QString());
        lineEdit_2->setText(QCoreApplication::translate("FriendWidget", "\345\244\207\346\263\250", nullptr));
        textEdit->setHtml(QCoreApplication::translate("FriendWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\261\345\220\214\347\276\244\350\201\212</p></body></html>", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("FriendWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\270\252\346\200\247\347\255\276\345\220\215</p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("FriendWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\235\245\346\272\220</p></body></html>", nullptr));
        textEdit_4->setHtml(QCoreApplication::translate("FriendWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\274\200\345\217\221\344\270\255...</p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("FriendWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\245\347\224\250\346\210\267\344\273\200\344\271\210\351\203\275\346\262\241\347\225\231\344\270\213</p></body></html>", nullptr));
        textEdit_6->setHtml(QCoreApplication::translate("FriendWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\274\200\345\217\221\344\270\255...</p></body></html>", nullptr));
        sendMessageButton->setText(QCoreApplication::translate("FriendWidget", "\345\217\221\346\266\210\346\201\257", nullptr));
        voiceChatButton->setText(QCoreApplication::translate("FriendWidget", "\350\257\255\351\237\263\350\201\212\345\244\251", nullptr));
        videoChatButton->setText(QCoreApplication::translate("FriendWidget", "\350\247\206\351\242\221\350\201\212\345\244\251", nullptr));
        addFriendButton->setText(QCoreApplication::translate("FriendWidget", "\345\212\240\345\245\275\345\217\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FriendWidget: public Ui_FriendWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDWIDGET_H
