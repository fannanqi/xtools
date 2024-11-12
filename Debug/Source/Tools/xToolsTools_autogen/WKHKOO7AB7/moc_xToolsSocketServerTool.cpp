/****************************************************************************
** Meta object code from reading C++ file 'xToolsSocketServerTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsSocketServerTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsSocketServerTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsSocketServerTool_t {
    QByteArrayData data[16];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsSocketServerTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsSocketServerTool_t qt_meta_stringdata_xToolsSocketServerTool = {
    {
QT_MOC_LITERAL(0, 0, 22), // "xToolsSocketServerTool"
QT_MOC_LITERAL(1, 23, 15), // "serverIpChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 17), // "serverPortChanged"
QT_MOC_LITERAL(4, 58, 23), // "specifyIpAndPortChanged"
QT_MOC_LITERAL(5, 82, 14), // "clientsChanged"
QT_MOC_LITERAL(6, 97, 18), // "clientIndexChanged"
QT_MOC_LITERAL(7, 116, 20), // "bindingIpPortChanged"
QT_MOC_LITERAL(8, 137, 18), // "messageTypeChanged"
QT_MOC_LITERAL(9, 156, 8), // "serverIp"
QT_MOC_LITERAL(10, 165, 10), // "serverPort"
QT_MOC_LITERAL(11, 176, 16), // "specifyIpAndPort"
QT_MOC_LITERAL(12, 193, 7), // "clients"
QT_MOC_LITERAL(13, 201, 11), // "clientIndex"
QT_MOC_LITERAL(14, 213, 13), // "bindingIpPort"
QT_MOC_LITERAL(15, 227, 11) // "messageType"

    },
    "xToolsSocketServerTool\0serverIpChanged\0"
    "\0serverPortChanged\0specifyIpAndPortChanged\0"
    "clientsChanged\0clientIndexChanged\0"
    "bindingIpPortChanged\0messageTypeChanged\0"
    "serverIp\0serverPort\0specifyIpAndPort\0"
    "clients\0clientIndex\0bindingIpPort\0"
    "messageType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsSocketServerTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Bool, 0x00495103,
      12, QMetaType::QStringList, 0x00495001,
      13, QMetaType::Int, 0x00495103,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void xToolsSocketServerTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsSocketServerTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serverIpChanged(); break;
        case 1: _t->serverPortChanged(); break;
        case 2: _t->specifyIpAndPortChanged(); break;
        case 3: _t->clientsChanged(); break;
        case 4: _t->clientIndexChanged(); break;
        case 5: _t->bindingIpPortChanged(); break;
        case 6: _t->messageTypeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::serverIpChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::serverPortChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::specifyIpAndPortChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::clientsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::clientIndexChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::bindingIpPortChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (xToolsSocketServerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSocketServerTool::messageTypeChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsSocketServerTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->serverIp(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->serverPort(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->specifyIpAndPort(); break;
        case 3: *reinterpret_cast< QStringList*>(_v) = _t->clients(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->clientIndex(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->bindingIpPort(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->messageType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<xToolsSocketServerTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setServerIp(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setServerPort(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSpecifyIpAndPort(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setClientIndex(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setMessageType(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject xToolsSocketServerTool::staticMetaObject = { {
    &xToolsCommunicationTool::staticMetaObject,
    qt_meta_stringdata_xToolsSocketServerTool.data,
    qt_meta_data_xToolsSocketServerTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsSocketServerTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsSocketServerTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsSocketServerTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsCommunicationTool::qt_metacast(_clname);
}

int xToolsSocketServerTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsCommunicationTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void xToolsSocketServerTool::serverIpChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void xToolsSocketServerTool::serverPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void xToolsSocketServerTool::specifyIpAndPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void xToolsSocketServerTool::clientsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void xToolsSocketServerTool::clientIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void xToolsSocketServerTool::bindingIpPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void xToolsSocketServerTool::messageTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
