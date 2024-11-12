/****************************************************************************
** Meta object code from reading C++ file 'xToolsBaseTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsBaseTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsBaseTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsBaseTool_t {
    QByteArrayData data[10];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsBaseTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsBaseTool_t qt_meta_stringdata_xToolsBaseTool = {
    {
QT_MOC_LITERAL(0, 0, 14), // "xToolsBaseTool"
QT_MOC_LITERAL(1, 15, 11), // "outputBytes"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "bytes"
QT_MOC_LITERAL(4, 34, 13), // "errorOccurred"
QT_MOC_LITERAL(5, 48, 11), // "errorString"
QT_MOC_LITERAL(6, 60, 16), // "isWorkingChanged"
QT_MOC_LITERAL(7, 77, 15), // "isEnableChanged"
QT_MOC_LITERAL(8, 93, 9), // "isWorking"
QT_MOC_LITERAL(9, 103, 8) // "isEnable"

    },
    "xToolsBaseTool\0outputBytes\0\0bytes\0"
    "errorOccurred\0errorString\0isWorkingChanged\0"
    "isEnableChanged\0isWorking\0isEnable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsBaseTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    0,   40,    2, 0x06 /* Public */,
       7,    0,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495001,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       2,
       3,

       0        // eod
};

void xToolsBaseTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsBaseTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputBytes((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->errorOccurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->isWorkingChanged(); break;
        case 3: _t->isEnableChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsBaseTool::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsBaseTool::outputBytes)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsBaseTool::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsBaseTool::errorOccurred)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsBaseTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsBaseTool::isWorkingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (xToolsBaseTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsBaseTool::isEnableChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsBaseTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isWorking(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isEnable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<xToolsBaseTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setIsEnable(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsBaseTool::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_xToolsBaseTool.data,
    qt_meta_data_xToolsBaseTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsBaseTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsBaseTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsBaseTool.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int xToolsBaseTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void xToolsBaseTool::outputBytes(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void xToolsBaseTool::errorOccurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void xToolsBaseTool::isWorkingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void xToolsBaseTool::isEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
