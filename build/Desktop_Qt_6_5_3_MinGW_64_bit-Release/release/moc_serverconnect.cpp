/****************************************************************************
** Meta object code from reading C++ file 'serverconnect.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../serverconnect.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverconnect.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSServerConnectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSServerConnectENDCLASS = QtMocHelpers::stringData(
    "ServerConnect",
    "loginSuccess",
    "",
    "User",
    "user",
    "registerSucess",
    "id",
    "getFriendsSuccess",
    "QMap<QString,UserFriend>",
    "userFriendVector",
    "getChatsSuccess",
    "QList<UserChat>",
    "userChatVector",
    "getFriendsUnreadMessagesSuccess",
    "QList<Message>",
    "friendsUnreadMessages",
    "getUserInformation",
    "UserFriend",
    "userFriend",
    "isFriend",
    "getUserInformationError",
    "accpetFriendSuccess",
    "deleteFriendSuccess",
    "userId",
    "friendId",
    "sendErrorSignal",
    "message",
    "receiveMessageSuccess",
    "Message&",
    "onReadyRead"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSServerConnectENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[14];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[5];
    char stringdata5[15];
    char stringdata6[3];
    char stringdata7[18];
    char stringdata8[25];
    char stringdata9[17];
    char stringdata10[16];
    char stringdata11[16];
    char stringdata12[15];
    char stringdata13[32];
    char stringdata14[15];
    char stringdata15[22];
    char stringdata16[19];
    char stringdata17[11];
    char stringdata18[11];
    char stringdata19[9];
    char stringdata20[24];
    char stringdata21[20];
    char stringdata22[20];
    char stringdata23[7];
    char stringdata24[9];
    char stringdata25[16];
    char stringdata26[8];
    char stringdata27[22];
    char stringdata28[9];
    char stringdata29[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSServerConnectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSServerConnectENDCLASS_t qt_meta_stringdata_CLASSServerConnectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ServerConnect"
        QT_MOC_LITERAL(14, 12),  // "loginSuccess"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 4),  // "User"
        QT_MOC_LITERAL(33, 4),  // "user"
        QT_MOC_LITERAL(38, 14),  // "registerSucess"
        QT_MOC_LITERAL(53, 2),  // "id"
        QT_MOC_LITERAL(56, 17),  // "getFriendsSuccess"
        QT_MOC_LITERAL(74, 24),  // "QMap<QString,UserFriend>"
        QT_MOC_LITERAL(99, 16),  // "userFriendVector"
        QT_MOC_LITERAL(116, 15),  // "getChatsSuccess"
        QT_MOC_LITERAL(132, 15),  // "QList<UserChat>"
        QT_MOC_LITERAL(148, 14),  // "userChatVector"
        QT_MOC_LITERAL(163, 31),  // "getFriendsUnreadMessagesSuccess"
        QT_MOC_LITERAL(195, 14),  // "QList<Message>"
        QT_MOC_LITERAL(210, 21),  // "friendsUnreadMessages"
        QT_MOC_LITERAL(232, 18),  // "getUserInformation"
        QT_MOC_LITERAL(251, 10),  // "UserFriend"
        QT_MOC_LITERAL(262, 10),  // "userFriend"
        QT_MOC_LITERAL(273, 8),  // "isFriend"
        QT_MOC_LITERAL(282, 23),  // "getUserInformationError"
        QT_MOC_LITERAL(306, 19),  // "accpetFriendSuccess"
        QT_MOC_LITERAL(326, 19),  // "deleteFriendSuccess"
        QT_MOC_LITERAL(346, 6),  // "userId"
        QT_MOC_LITERAL(353, 8),  // "friendId"
        QT_MOC_LITERAL(362, 15),  // "sendErrorSignal"
        QT_MOC_LITERAL(378, 7),  // "message"
        QT_MOC_LITERAL(386, 21),  // "receiveMessageSuccess"
        QT_MOC_LITERAL(408, 8),  // "Message&"
        QT_MOC_LITERAL(417, 11)   // "onReadyRead"
    },
    "ServerConnect",
    "loginSuccess",
    "",
    "User",
    "user",
    "registerSucess",
    "id",
    "getFriendsSuccess",
    "QMap<QString,UserFriend>",
    "userFriendVector",
    "getChatsSuccess",
    "QList<UserChat>",
    "userChatVector",
    "getFriendsUnreadMessagesSuccess",
    "QList<Message>",
    "friendsUnreadMessages",
    "getUserInformation",
    "UserFriend",
    "userFriend",
    "isFriend",
    "getUserInformationError",
    "accpetFriendSuccess",
    "deleteFriendSuccess",
    "userId",
    "friendId",
    "sendErrorSignal",
    "message",
    "receiveMessageSuccess",
    "Message&",
    "onReadyRead"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSServerConnectENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,
       5,    1,   89,    2, 0x06,    3 /* Public */,
       7,    1,   92,    2, 0x06,    5 /* Public */,
      10,    1,   95,    2, 0x06,    7 /* Public */,
      13,    1,   98,    2, 0x06,    9 /* Public */,
      16,    2,  101,    2, 0x06,   11 /* Public */,
      20,    0,  106,    2, 0x06,   14 /* Public */,
      21,    0,  107,    2, 0x06,   15 /* Public */,
      22,    2,  108,    2, 0x06,   16 /* Public */,
      25,    1,  113,    2, 0x06,   19 /* Public */,
      27,    1,  116,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      29,    0,  119,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::Bool,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, 0x80000000 | 28,   26,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ServerConnect::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSServerConnectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSServerConnectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSServerConnectENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ServerConnect, std::true_type>,
        // method 'loginSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<User, std::false_type>,
        // method 'registerSucess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'getFriendsSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,UserFriend>, std::false_type>,
        // method 'getChatsSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<UserChat>, std::false_type>,
        // method 'getFriendsUnreadMessagesSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<Message>, std::false_type>,
        // method 'getUserInformation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UserFriend, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getUserInformationError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accpetFriendSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteFriendSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'sendErrorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'receiveMessageSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Message &, std::false_type>,
        // method 'onReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ServerConnect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerConnect *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loginSuccess((*reinterpret_cast< std::add_pointer_t<User>>(_a[1]))); break;
        case 1: _t->registerSucess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->getFriendsSuccess((*reinterpret_cast< std::add_pointer_t<QMap<QString,UserFriend>>>(_a[1]))); break;
        case 3: _t->getChatsSuccess((*reinterpret_cast< std::add_pointer_t<QList<UserChat>>>(_a[1]))); break;
        case 4: _t->getFriendsUnreadMessagesSuccess((*reinterpret_cast< std::add_pointer_t<QList<Message>>>(_a[1]))); break;
        case 5: _t->getUserInformation((*reinterpret_cast< std::add_pointer_t<UserFriend>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->getUserInformationError(); break;
        case 7: _t->accpetFriendSuccess(); break;
        case 8: _t->deleteFriendSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->sendErrorSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->receiveMessageSuccess((*reinterpret_cast< std::add_pointer_t<Message&>>(_a[1]))); break;
        case 11: _t->onReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerConnect::*)(User );
            if (_t _q_method = &ServerConnect::loginSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(QString );
            if (_t _q_method = &ServerConnect::registerSucess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(QMap<QString,UserFriend> );
            if (_t _q_method = &ServerConnect::getFriendsSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(QVector<UserChat> );
            if (_t _q_method = &ServerConnect::getChatsSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(QVector<Message> );
            if (_t _q_method = &ServerConnect::getFriendsUnreadMessagesSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(UserFriend , bool );
            if (_t _q_method = &ServerConnect::getUserInformation; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)();
            if (_t _q_method = &ServerConnect::getUserInformationError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)();
            if (_t _q_method = &ServerConnect::accpetFriendSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(QString , QString );
            if (_t _q_method = &ServerConnect::deleteFriendSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(QString );
            if (_t _q_method = &ServerConnect::sendErrorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ServerConnect::*)(Message & );
            if (_t _q_method = &ServerConnect::receiveMessageSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject *ServerConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSServerConnectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ServerConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ServerConnect::loginSuccess(User _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerConnect::registerSucess(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerConnect::getFriendsSuccess(QMap<QString,UserFriend> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ServerConnect::getChatsSuccess(QVector<UserChat> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ServerConnect::getFriendsUnreadMessagesSuccess(QVector<Message> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ServerConnect::getUserInformation(UserFriend _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ServerConnect::getUserInformationError()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ServerConnect::accpetFriendSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ServerConnect::deleteFriendSuccess(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ServerConnect::sendErrorSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ServerConnect::receiveMessageSuccess(Message & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
