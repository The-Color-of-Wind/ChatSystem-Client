/****************************************************************************
** Meta object code from reading C++ file 'chatwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../chatwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSChatWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChatWidgetENDCLASS = QtMocHelpers::stringData(
    "ChatWidget",
    "getUserMessage",
    "",
    "QString&",
    "userId",
    "showChatsListWidegt",
    "QList<UserChat>",
    "userChatVector",
    "createFriendChatWidget",
    "UserChat&",
    "value",
    "receiveMessage",
    "Message&",
    "message",
    "on_sendButton_clicked",
    "on_fileButton_clicked",
    "updateChattingLast",
    "unreadCount"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatWidgetENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[7];
    char stringdata5[20];
    char stringdata6[16];
    char stringdata7[15];
    char stringdata8[23];
    char stringdata9[10];
    char stringdata10[6];
    char stringdata11[15];
    char stringdata12[9];
    char stringdata13[8];
    char stringdata14[22];
    char stringdata15[22];
    char stringdata16[19];
    char stringdata17[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatWidgetENDCLASS_t qt_meta_stringdata_CLASSChatWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatWidget"
        QT_MOC_LITERAL(11, 14),  // "getUserMessage"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 8),  // "QString&"
        QT_MOC_LITERAL(36, 6),  // "userId"
        QT_MOC_LITERAL(43, 19),  // "showChatsListWidegt"
        QT_MOC_LITERAL(63, 15),  // "QList<UserChat>"
        QT_MOC_LITERAL(79, 14),  // "userChatVector"
        QT_MOC_LITERAL(94, 22),  // "createFriendChatWidget"
        QT_MOC_LITERAL(117, 9),  // "UserChat&"
        QT_MOC_LITERAL(127, 5),  // "value"
        QT_MOC_LITERAL(133, 14),  // "receiveMessage"
        QT_MOC_LITERAL(148, 8),  // "Message&"
        QT_MOC_LITERAL(157, 7),  // "message"
        QT_MOC_LITERAL(165, 21),  // "on_sendButton_clicked"
        QT_MOC_LITERAL(187, 21),  // "on_fileButton_clicked"
        QT_MOC_LITERAL(209, 18),  // "updateChattingLast"
        QT_MOC_LITERAL(228, 11)   // "unreadCount"
    },
    "ChatWidget",
    "getUserMessage",
    "",
    "QString&",
    "userId",
    "showChatsListWidegt",
    "QList<UserChat>",
    "userChatVector",
    "createFriendChatWidget",
    "UserChat&",
    "value",
    "receiveMessage",
    "Message&",
    "message",
    "on_sendButton_clicked",
    "on_fileButton_clicked",
    "updateChattingLast",
    "unreadCount"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   65,    2, 0x08,    3 /* Private */,
       8,    1,   68,    2, 0x08,    5 /* Private */,
      11,    1,   71,    2, 0x08,    7 /* Private */,
      14,    0,   74,    2, 0x08,    9 /* Private */,
      15,    0,   75,    2, 0x08,   10 /* Private */,
      16,    1,   76,    2, 0x08,   11 /* Private */,
      16,    0,   79,    2, 0x28,   13 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChatWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatWidget, std::true_type>,
        // method 'getUserMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'showChatsListWidegt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<UserChat>, std::false_type>,
        // method 'createFriendChatWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UserChat &, std::false_type>,
        // method 'receiveMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'on_sendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fileButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateChattingLast'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateChattingLast'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ChatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getUserMessage((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 1: _t->showChatsListWidegt((*reinterpret_cast< std::add_pointer_t<QList<UserChat>>>(_a[1]))); break;
        case 2: _t->createFriendChatWidget((*reinterpret_cast< std::add_pointer_t<UserChat&>>(_a[1]))); break;
        case 3: _t->receiveMessage((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 4: _t->on_sendButton_clicked(); break;
        case 5: _t->on_fileButton_clicked(); break;
        case 6: _t->updateChattingLast((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->updateChattingLast(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChatWidget::*)(QString & );
            if (_t _q_method = &ChatWidget::getUserMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ChatWidget::getUserMessage(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
