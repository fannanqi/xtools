/****************************************************************************
** Meta object code from reading C++ file 'xToolsCommunicationTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsCommunicationTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsCommunicationTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsCommunicationTool_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsCommunicationTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsCommunicationTool_t qt_meta_stringdata_xToolsCommunicationTool = {
    {
QT_MOC_LITERAL(0, 0, 23), // "xToolsCommunicationTool"
QT_MOC_LITERAL(1, 24, 9), // "bytesRead"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "bytes"
QT_MOC_LITERAL(4, 41, 4), // "from"
QT_MOC_LITERAL(5, 46, 12), // "bytesWritten"
QT_MOC_LITERAL(6, 59, 2), // "to"
QT_MOC_LITERAL(7, 62, 10) // "inputBytes"

    },
    "xToolsCommunicationTool\0bytesRead\0\0"
    "bytes\0from\0bytesWritten\0to\0inputBytes"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsCommunicationTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,    3,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void xToolsCommunicationTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsCommunicationTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bytesRead((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->bytesWritten((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->inputBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsCommunicationTool::*)(const QByteArray & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCommunicationTool::bytesRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsCommunicationTool::*)(const QByteArray & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCommunicationTool::bytesWritten)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject xToolsCommunicationTool::staticMetaObject = { {
    &xToolsBaseTool::staticMetaObject,
    qt_meta_stringdata_xToolsCommunicationTool.data,
    qt_meta_data_xToolsCommunicationTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsCommunicationTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsCommunicationTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsCommunicationTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsBaseTool::qt_metacast(_clname);
}

int xToolsCommunicationTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsBaseTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void xToolsCommunicationTool::bytesRead(const QByteArray & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void xToolsCommunicationTool::bytesWritten(const QByteArray & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
