/****************************************************************************
** Meta object code from reading C++ file 'xToolsSocketClientTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsSocketClientTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsSocketClientTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsSocketClientTool_t {
    QByteArrayData data[22];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsSocketClientTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsSocketClientTool_t qt_meta_stringdata_xToolsSocketClientTool = {
    {
QT_MOC_LITERAL(0, 0, 22), // "xToolsSocketClientTool"
QT_MOC_LITERAL(1, 23, 15), // "clientIpChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "clientPortChanged"
QT_MOC_LITERAL(4, 58, 26), // "specifyClientIpPortChanged"
QT_MOC_LITERAL(5, 85, 15), // "serverIpChanged"
QT_MOC_LITERAL(6, 101, 17), // "serverPortChanged"
QT_MOC_LITERAL(7, 119, 20), // "bindingIpPortChanged"
QT_MOC_LITERAL(8, 140, 18), // "messageTypeChanged"
QT_MOC_LITERAL(9, 159, 21), // "authenticationChanged"
QT_MOC_LITERAL(10, 181, 15), // "userNameChanged"
QT_MOC_LITERAL(11, 197, 15), // "passwordChanged"
QT_MOC_LITERAL(12, 213, 8), // "clientIp"
QT_MOC_LITERAL(13, 222, 10), // "clientPort"
QT_MOC_LITERAL(14, 233, 19), // "specifyClientIpPort"
QT_MOC_LITERAL(15, 253, 8), // "serverIp"
QT_MOC_LITERAL(16, 262, 10), // "serverPort"
QT_MOC_LITERAL(17, 273, 13), // "bindingIpPort"
QT_MOC_LITERAL(18, 287, 11), // "messageType"
QT_MOC_LITERAL(19, 299, 14), // "authentication"
QT_MOC_LITERAL(20, 314, 8), // "userName"
QT_MOC_LITERAL(21, 323, 8) // "password"

    },
    "xToolsSocketClientTool\0clientIpChanged\0"
    "\0clientPortChanged\0specifyClientIpPortChanged\0"
    "serverIpChanged\0serverPortChanged\0"
    "bindingIpPortChanged\0messageTypeChanged\0"
    "authenticationChanged\0userNameChanged\0"
    "passwordChanged\0clientIp\0clientPort\0"
    "specifyClientIpPort\0serverIp\0serverPort\0"
    "bindingIpPort\0messageType\0authentication\0"
    "userName\0password"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsSocketClientTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,
      11,    0,   73,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::QString, 0x00495103,
      16, QMetaType::Int, 0x00495103,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::Int, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      20, QMetaType::QString, 0x00495103,
      21, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,

       0        // eod
};

void xToolsSocketClientTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsSocketClientTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clientIpChanged(); break;
        case 1: _t->clientPortChanged(); break;
        case 2: _t->specifyClientIpPortChanged(); break;
        case 3: _t->serverIpChanged(); break;
        case 4: _t->serverPortChanged(); break;
        case 5: _t->bindingIpPortChanged(); break;
        case 6: _t->messageTypeChanged(); break;
        case 7: _t->authenticationChanged(); break;
        case 8: _t->userNameChanged(); break;
        case 9: _t->passwordChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::clientIpChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::clientPortChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::specifyClientIpPortChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::serverIpChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::serverPortChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::bindingIpPortChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::messageTypeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::authenticationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::userNameChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (xToolsSocketClientTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketClientTool::passwordChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsSocketClientTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->clientIp(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->clientPort(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->specifyClientIpPort(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->serverIp(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->serverPort(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->bindingIpPort(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->messageType(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->authentication(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->password(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<xToolsSocketClientTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setClientIp(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setClientPort(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSpecifyClientIpPort(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setServerIp(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setServerPort(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMessageType(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setAuthentication(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setPassword(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject xToolsSocketClientTool::staticMetaObject = { {
    &xToolsCommunicationTool::staticMetaObject,
    qt_meta_stringdata_xToolsSocketClientTool.data,
    qt_meta_data_xToolsSocketClientTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsSocketClientTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsSocketClientTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsSocketClientTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsCommunicationTool::qt_metacast(_clname);
}

int xToolsSocketClientTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsCommunicationTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void xToolsSocketClientTool::clientIpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void xToolsSocketClientTool::clientPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void xToolsSocketClientTool::specifyClientIpPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void xToolsSocketClientTool::serverIpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void xToolsSocketClientTool::serverPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void xToolsSocketClientTool::bindingIpPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void xToolsSocketClientTool::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void xToolsSocketClientTool::authenticationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void xToolsSocketClientTool::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void xToolsSocketClientTool::passwordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
