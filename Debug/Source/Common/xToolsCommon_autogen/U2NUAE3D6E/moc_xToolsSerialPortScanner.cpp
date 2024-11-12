/****************************************************************************
** Meta object code from reading C++ file 'xToolsSerialPortScanner.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Common/Common/xToolsSerialPortScanner.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsSerialPortScanner.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsSerialPortScanner_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsSerialPortScanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsSerialPortScanner_t qt_meta_stringdata_xToolsSerialPortScanner = {
    {
QT_MOC_LITERAL(0, 0, 23), // "xToolsSerialPortScanner"
QT_MOC_LITERAL(1, 24, 16), // "portNamesChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "baudRatesChanged"
QT_MOC_LITERAL(4, 59, 7), // "refresh"
QT_MOC_LITERAL(5, 67, 20), // "setIgnoredBusyDevice"
QT_MOC_LITERAL(6, 88, 7), // "ignored"
QT_MOC_LITERAL(7, 96, 22), // "setAutoUpdatePortNames"
QT_MOC_LITERAL(8, 119, 10), // "autoUpdate"
QT_MOC_LITERAL(9, 130, 16), // "setIgnoredUpdate"
QT_MOC_LITERAL(10, 147, 9), // "portNames"
QT_MOC_LITERAL(11, 157, 9) // "baudRates"

    },
    "xToolsSerialPortScanner\0portNamesChanged\0"
    "\0baudRatesChanged\0refresh\0"
    "setIgnoredBusyDevice\0ignored\0"
    "setAutoUpdatePortNames\0autoUpdate\0"
    "setIgnoredUpdate\0portNames\0baudRates"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsSerialPortScanner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x04 /* Private */,
       3,    0,   45,    2, 0x04 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x02 /* Public */,
       5,    1,   47,    2, 0x02 /* Public */,
       7,    1,   50,    2, 0x02 /* Public */,
       9,    1,   53,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    6,

 // properties: name, type, flags
      10, QMetaType::QStringList, 0x00495001,
      11, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void xToolsSerialPortScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsSerialPortScanner *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->portNamesChanged(); break;
        case 1: _t->baudRatesChanged(); break;
        case 2: _t->refresh(); break;
        case 3: _t->setIgnoredBusyDevice((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setAutoUpdatePortNames((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setIgnoredUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsSerialPortScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSerialPortScanner::portNamesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsSerialPortScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSerialPortScanner::baudRatesChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsSerialPortScanner *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->portNames(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->baudRates(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsSerialPortScanner::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_xToolsSerialPortScanner.data,
    qt_meta_data_xToolsSerialPortScanner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsSerialPortScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsSerialPortScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsSerialPortScanner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int xToolsSerialPortScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void xToolsSerialPortScanner::portNamesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void xToolsSerialPortScanner::baudRatesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
