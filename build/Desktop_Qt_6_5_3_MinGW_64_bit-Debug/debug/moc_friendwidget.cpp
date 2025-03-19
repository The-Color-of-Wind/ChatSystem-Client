/****************************************************************************
** Meta object code from reading C++ file 'friendwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../friendwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friendwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFriendWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFriendWidgetENDCLASS = QtMocHelpers::stringData(
    "FriendWidget",
    "sendClickUserFriend",
    "",
    "UserFriend",
    "userFriend",
    "showFriendsListWidegt",
    "QMap<QString,UserFriend>",
    "userFriendVector",
    "on_sendMessageButton_clicked",
    "on_searchFriendButton_clicked",
    "on_addFriendButton_clicked",
    "on_friendIdLineEdit_textChanged",
    "text",
    "showSearchUserInformation",
    "isFriend",
    "on_cancelButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFriendWidgetENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[13];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[11];
    char stringdata5[22];
    char stringdata6[25];
    char stringdata7[17];
    char stringdata8[29];
    char stringdata9[30];
    char stringdata10[27];
    char stringdata11[32];
    char stringdata12[5];
    char stringdata13[26];
    char stringdata14[9];
    char stringdata15[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFriendWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFriendWidgetENDCLASS_t qt_meta_stringdata_CLASSFriendWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "FriendWidget"
        QT_MOC_LITERAL(13, 19),  // "sendClickUserFriend"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 10),  // "UserFriend"
        QT_MOC_LITERAL(45, 10),  // "userFriend"
        QT_MOC_LITERAL(56, 21),  // "showFriendsListWidegt"
        QT_MOC_LITERAL(78, 24),  // "QMap<QString,UserFriend>"
        QT_MOC_LITERAL(103, 16),  // "userFriendVector"
        QT_MOC_LITERAL(120, 28),  // "on_sendMessageButton_clicked"
        QT_MOC_LITERAL(149, 29),  // "on_searchFriendButton_clicked"
        QT_MOC_LITERAL(179, 26),  // "on_addFriendButton_clicked"
        QT_MOC_LITERAL(206, 31),  // "on_friendIdLineEdit_textChanged"
        QT_MOC_LITERAL(238, 4),  // "text"
        QT_MOC_LITERAL(243, 25),  // "showSearchUserInformation"
        QT_MOC_LITERAL(269, 8),  // "isFriend"
        QT_MOC_LITERAL(278, 23)   // "on_cancelButton_clicked"
    },
    "FriendWidget",
    "sendClickUserFriend",
    "",
    "UserFriend",
    "userFriend",
    "showFriendsListWidegt",
    "QMap<QString,UserFriend>",
    "userFriendVector",
    "on_sendMessageButton_clicked",
    "on_searchFriendButton_clicked",
    "on_addFriendButton_clicked",
    "on_friendIdLineEdit_textChanged",
    "text",
    "showSearchUserInformation",
    "isFriend",
    "on_cancelButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFriendWidgetENDCLASS[] = {

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
       5,    1,   65,    2, 0x0a,    3 /* Public */,
       8,    0,   68,    2, 0x08,    5 /* Private */,
       9,    0,   69,    2, 0x08,    6 /* Private */,
      10,    0,   70,    2, 0x08,    7 /* Private */,
      11,    1,   71,    2, 0x08,    8 /* Private */,
      13,    2,   74,    2, 0x08,   10 /* Private */,
      15,    0,   79,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   14,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FriendWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFriendWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFriendWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFriendWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FriendWidget, std::true_type>,
        // method 'sendClickUserFriend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UserFriend, std::false_type>,
        // method 'showFriendsListWidegt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,UserFriend>, std::false_type>,
        // method 'on_sendMessageButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_searchFriendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_addFriendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_friendIdLineEdit_textChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showSearchUserInformation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<UserFriend, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_cancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FriendWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FriendWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendClickUserFriend((*reinterpret_cast< std::add_pointer_t<UserFriend>>(_a[1]))); break;
        case 1: _t->showFriendsListWidegt((*reinterpret_cast< std::add_pointer_t<QMap<QString,UserFriend>>>(_a[1]))); break;
        case 2: _t->on_sendMessageButton_clicked(); break;
        case 3: _t->on_searchFriendButton_clicked(); break;
        case 4: _t->on_addFriendButton_clicked(); break;
        case 5: { bool _r = _t->on_friendIdLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->showSearchUserInformation((*reinterpret_cast< std::add_pointer_t<UserFriend>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 7: _t->on_cancelButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FriendWidget::*)(UserFriend );
            if (_t _q_method = &FriendWidget::sendClickUserFriend; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FriendWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FriendWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFriendWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FriendWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void FriendWidget::sendClickUserFriend(UserFriend _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
