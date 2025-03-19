QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatwidget.cpp \
    clientrequest.cpp \
    friend.cpp \
    friendwidget.cpp \
    imagewidget.cpp \
    loginwidget.cpp \
    main.cpp \
    action.cpp \
    mainwidget.cpp \
    message.cpp \
    registerwidget.cpp \
    serverconnect.cpp \
    serverconnectthread.cpp \
    serverreceive.cpp \
    serverreceivethread.cpp \
    user.cpp \
    userchat.cpp \
    userfriend.cpp

HEADERS += \
    action.h \
    chatwidget.h \
    clientrequest.h \
    friend.h \
    friendwidget.h \
    imagewidget.h \
    loginwidget.h \
    mainwidget.h \
    message.h \
    registerwidget.h \
    serverconnect.h \
    serverconnectthread.h \
    serverreceive.h \
    serverreceivethread.h \
    user.h \
    userchat.h \
    userfriend.h

FORMS += \
    action.ui \
    chatwidget.ui \
    friendwidget.ui \
    loginwidget.ui \
    mainwidget.ui \
    registerwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
