/****************************************************************************
** Meta object code from reading C++ file 'action.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../action.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'action.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSActionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSActionENDCLASS = QtMocHelpers::stringData(
    "Action",
    "showLoginWidget",
    "",
    "showRegisterWidget",
    "loginConnect",
    "id",
    "password",
    "registerConnect",
    "phone",
    "name",
    "showRegisterSuccess",
    "showErrorMessage",
    "message"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSActionENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[13];
    char stringdata5[3];
    char stringdata6[9];
    char stringdata7[16];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[20];
    char stringdata11[17];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSActionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSActionENDCLASS_t qt_meta_stringdata_CLASSActionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Action"
        QT_MOC_LITERAL(7, 15),  // "showLoginWidget"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 18),  // "showRegisterWidget"
        QT_MOC_LITERAL(43, 12),  // "loginConnect"
        QT_MOC_LITERAL(56, 2),  // "id"
        QT_MOC_LITERAL(59, 8),  // "password"
        QT_MOC_LITERAL(68, 15),  // "registerConnect"
        QT_MOC_LITERAL(84, 5),  // "phone"
        QT_MOC_LITERAL(90, 4),  // "name"
        QT_MOC_LITERAL(95, 19),  // "showRegisterSuccess"
        QT_MOC_LITERAL(115, 16),  // "showErrorMessage"
        QT_MOC_LITERAL(132, 7)   // "message"
    },
    "Action",
    "showLoginWidget",
    "",
    "showRegisterWidget",
    "loginConnect",
    "id",
    "password",
    "registerConnect",
    "phone",
    "name",
    "showRegisterSuccess",
    "showErrorMessage",
    "message"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSActionENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    2,   52,    2, 0x08,    3 /* Private */,
       7,    3,   57,    2, 0x08,    6 /* Private */,
      10,    1,   64,    2, 0x08,   10 /* Private */,
      11,    1,   67,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    8,    9,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject Action::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSActionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSActionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSActionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Action, std::true_type>,
        // method 'showLoginWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showRegisterWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loginConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'registerConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'showRegisterSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'showErrorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Action *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showLoginWidget(); break;
        case 1: _t->showRegisterWidget(); break;
        case 2: _t->loginConnect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->registerConnect((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 4: _t->showRegisterSuccess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->showErrorMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Action::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSActionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
