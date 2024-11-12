/****************************************************************************
** Meta object code from reading C++ file 'xToolsToolBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/ToolBox/ToolBox/xToolsToolBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsToolBox_t {
    QByteArrayData data[26];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsToolBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsToolBox_t qt_meta_stringdata_xToolsToolBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "xToolsToolBox"
QT_MOC_LITERAL(1, 14, 13), // "errorOccurred"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11), // "errorString"
QT_MOC_LITERAL(4, 41, 16), // "isWorkingChanged"
QT_MOC_LITERAL(5, 58, 19), // "communicatorChanged"
QT_MOC_LITERAL(6, 78, 10), // "initialize"
QT_MOC_LITERAL(7, 89, 4), // "type"
QT_MOC_LITERAL(8, 94, 4), // "open"
QT_MOC_LITERAL(9, 99, 5), // "close"
QT_MOC_LITERAL(10, 105, 4), // "send"
QT_MOC_LITERAL(11, 110, 5), // "bytes"
QT_MOC_LITERAL(12, 116, 12), // "communicator"
QT_MOC_LITERAL(13, 129, 7), // "emitter"
QT_MOC_LITERAL(14, 137, 9), // "responser"
QT_MOC_LITERAL(15, 147, 6), // "storer"
QT_MOC_LITERAL(16, 154, 9), // "prestorer"
QT_MOC_LITERAL(17, 164, 11), // "rxVelometer"
QT_MOC_LITERAL(18, 176, 11), // "txVelometer"
QT_MOC_LITERAL(19, 188, 14), // "rxStatistician"
QT_MOC_LITERAL(20, 203, 14), // "txStatistician"
QT_MOC_LITERAL(21, 218, 14), // "udpTransmitter"
QT_MOC_LITERAL(22, 233, 14), // "tcpTransmitter"
QT_MOC_LITERAL(23, 248, 20), // "webSocketTransmitter"
QT_MOC_LITERAL(24, 269, 21), // "serialPortTransmitter"
QT_MOC_LITERAL(25, 291, 9) // "isWorking"

    },
    "xToolsToolBox\0errorOccurred\0\0errorString\0"
    "isWorkingChanged\0communicatorChanged\0"
    "initialize\0type\0open\0close\0send\0bytes\0"
    "communicator\0emitter\0responser\0storer\0"
    "prestorer\0rxVelometer\0txVelometer\0"
    "rxStatistician\0txStatistician\0"
    "udpTransmitter\0tcpTransmitter\0"
    "webSocketTransmitter\0serialPortTransmitter\0"
    "isWorking"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsToolBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      14,   62, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   54,    2, 0x02 /* Public */,
       8,    0,   57,    2, 0x02 /* Public */,
       9,    0,   58,    2, 0x02 /* Public */,
      10,    1,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   11,

 // properties: name, type, flags
      12, QMetaType::QVariant, 0x00495001,
      13, QMetaType::QVariant, 0x00095401,
      14, QMetaType::QVariant, 0x00095401,
      15, QMetaType::QVariant, 0x00095401,
      16, QMetaType::QVariant, 0x00095401,
      17, QMetaType::QVariant, 0x00095401,
      18, QMetaType::QVariant, 0x00095401,
      19, QMetaType::QVariant, 0x00095401,
      20, QMetaType::QVariant, 0x00095401,
      21, QMetaType::QVariant, 0x00095401,
      22, QMetaType::QVariant, 0x00095401,
      23, QMetaType::QVariant, 0x00095401,
      24, QMetaType::QVariant, 0x00095401,
      25, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       2,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void xToolsToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsToolBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->isWorkingChanged(); break;
        case 2: _t->communicatorChanged(); break;
        case 3: _t->initialize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->open(); break;
        case 5: _t->close(); break;
        case 6: _t->send((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsToolBox::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsToolBox::errorOccurred)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsToolBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsToolBox::isWorkingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsToolBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsToolBox::communicatorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsToolBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->communicator(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->emitter(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->responser(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->storer(); break;
        case 4: *reinterpret_cast< QVariant*>(_v) = _t->prestorer(); break;
        case 5: *reinterpret_cast< QVariant*>(_v) = _t->rxVelometer(); break;
        case 6: *reinterpret_cast< QVariant*>(_v) = _t->txVelometer(); break;
        case 7: *reinterpret_cast< QVariant*>(_v) = _t->rxStatistician(); break;
        case 8: *reinterpret_cast< QVariant*>(_v) = _t->txStatistician(); break;
        case 9: *reinterpret_cast< QVariant*>(_v) = _t->udpTransmitter(); break;
        case 10: *reinterpret_cast< QVariant*>(_v) = _t->tcpTransmitter(); break;
        case 11: *reinterpret_cast< QVariant*>(_v) = _t->webSocketTransmitter(); break;
        case 12: *reinterpret_cast< QVariant*>(_v) = _t->serialPortTransmitter(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->isWorking(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsToolBox::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_xToolsToolBox.data,
    qt_meta_data_xToolsToolBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsToolBox.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int xToolsToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void xToolsToolBox::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void xToolsToolBox::isWorkingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void xToolsToolBox::communicatorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
