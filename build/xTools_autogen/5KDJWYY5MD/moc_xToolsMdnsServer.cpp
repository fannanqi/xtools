/****************************************************************************
** Meta object code from reading C++ file 'xToolsMdnsServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/Assistants/mDNS/Source/xToolsMdnsServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsMdnsServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsMdnsServer_t {
    QByteArrayData data[7];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsMdnsServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsMdnsServer_t qt_meta_stringdata_xToolsMdnsServer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "xToolsMdnsServer"
QT_MOC_LITERAL(1, 17, 12), // "serviceAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 20), // "QMdnsEngine::Service"
QT_MOC_LITERAL(4, 52, 7), // "service"
QT_MOC_LITERAL(5, 60, 14), // "serviceUpdated"
QT_MOC_LITERAL(6, 75, 14) // "serviceRemoved"

    },
    "xToolsMdnsServer\0serviceAdded\0\0"
    "QMdnsEngine::Service\0service\0"
    "serviceUpdated\0serviceRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsMdnsServer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       6,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void xToolsMdnsServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsMdnsServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serviceAdded((*reinterpret_cast< const QMdnsEngine::Service(*)>(_a[1]))); break;
        case 1: _t->serviceUpdated((*reinterpret_cast< const QMdnsEngine::Service(*)>(_a[1]))); break;
        case 2: _t->serviceRemoved((*reinterpret_cast< const QMdnsEngine::Service(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsMdnsServer::*)(const QMdnsEngine::Service & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsMdnsServer::serviceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsMdnsServer::*)(const QMdnsEngine::Service & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsMdnsServer::serviceUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsMdnsServer::*)(const QMdnsEngine::Service & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsMdnsServer::serviceRemoved)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject xToolsMdnsServer::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_xToolsMdnsServer.data,
    qt_meta_data_xToolsMdnsServer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsMdnsServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsMdnsServer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsMdnsServer.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int xToolsMdnsServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void xToolsMdnsServer::serviceAdded(const QMdnsEngine::Service & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void xToolsMdnsServer::serviceUpdated(const QMdnsEngine::Service & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void xToolsMdnsServer::serviceRemoved(const QMdnsEngine::Service & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
