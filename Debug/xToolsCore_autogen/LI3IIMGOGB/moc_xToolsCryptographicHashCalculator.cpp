/****************************************************************************
** Meta object code from reading C++ file 'xToolsCryptographicHashCalculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/Assistants/FileCheck/Source/xToolsCryptographicHashCalculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsCryptographicHashCalculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsCryptographicHashCalculator_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsCryptographicHashCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsCryptographicHashCalculator_t qt_meta_stringdata_xToolsCryptographicHashCalculator = {
    {
QT_MOC_LITERAL(0, 0, 33), // "xToolsCryptographicHashCalcul..."
QT_MOC_LITERAL(1, 34, 13), // "outputMessage"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 3), // "msg"
QT_MOC_LITERAL(4, 53, 8), // "isErrMsg"
QT_MOC_LITERAL(5, 62, 12), // "updateResult"
QT_MOC_LITERAL(6, 75, 6), // "result"
QT_MOC_LITERAL(7, 82, 26), // "progressBarMaxValueChanged"
QT_MOC_LITERAL(8, 109, 5), // "value"
QT_MOC_LITERAL(9, 115, 17), // "updateProgressBar"
QT_MOC_LITERAL(10, 133, 12), // "currentValue"
QT_MOC_LITERAL(11, 146, 17), // "remainTimeChanged"
QT_MOC_LITERAL(12, 164, 10) // "remainTime"

    },
    "xToolsCryptographicHashCalculator\0"
    "outputMessage\0\0msg\0isErrMsg\0updateResult\0"
    "result\0progressBarMaxValueChanged\0"
    "value\0updateProgressBar\0currentValue\0"
    "remainTimeChanged\0remainTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsCryptographicHashCalculator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,
       7,    1,   47,    2, 0x06 /* Public */,
       9,    1,   50,    2, 0x06 /* Public */,
      11,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QByteArray,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void, QMetaType::LongLong,   10,
    QMetaType::Void, QMetaType::QString,   12,

       0        // eod
};

void xToolsCryptographicHashCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsCryptographicHashCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputMessage((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->updateResult((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->progressBarMaxValueChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->updateProgressBar((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->remainTimeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsCryptographicHashCalculator::*)(QString , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCryptographicHashCalculator::outputMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsCryptographicHashCalculator::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCryptographicHashCalculator::updateResult)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsCryptographicHashCalculator::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCryptographicHashCalculator::progressBarMaxValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (xToolsCryptographicHashCalculator::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCryptographicHashCalculator::updateProgressBar)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (xToolsCryptographicHashCalculator::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsCryptographicHashCalculator::remainTimeChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject xToolsCryptographicHashCalculator::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_xToolsCryptographicHashCalculator.data,
    qt_meta_data_xToolsCryptographicHashCalculator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsCryptographicHashCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsCryptographicHashCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsCryptographicHashCalculator.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int xToolsCryptographicHashCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void xToolsCryptographicHashCalculator::outputMessage(QString _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void xToolsCryptographicHashCalculator::updateResult(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void xToolsCryptographicHashCalculator::progressBarMaxValueChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void xToolsCryptographicHashCalculator::updateProgressBar(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void xToolsCryptographicHashCalculator::remainTimeChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
