/****************************************************************************
** Meta object code from reading C++ file 'enterparameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/network/creator/enterparameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enterparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Enterparameter_t {
    QByteArrayData data[9];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Enterparameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Enterparameter_t qt_meta_stringdata_Enterparameter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Enterparameter"
QT_MOC_LITERAL(1, 15, 13), // "jumpToControl"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "dataReady"
QT_MOC_LITERAL(4, 40, 4), // "data"
QT_MOC_LITERAL(5, 45, 21), // "onButtonGroup1Clicked"
QT_MOC_LITERAL(6, 67, 2), // "id"
QT_MOC_LITERAL(7, 70, 21), // "onButtonGroup2Clicked"
QT_MOC_LITERAL(8, 92, 17) // "SaveButtonClicked"

    },
    "Enterparameter\0jumpToControl\0\0dataReady\0"
    "data\0onButtonGroup1Clicked\0id\0"
    "onButtonGroup2Clicked\0SaveButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Enterparameter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   43,    2, 0x0a /* Public */,
       7,    1,   46,    2, 0x0a /* Public */,
       8,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,

       0        // eod
};

void Enterparameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Enterparameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jumpToControl(); break;
        case 1: _t->dataReady((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: _t->onButtonGroup1Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onButtonGroup2Clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->SaveButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Enterparameter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Enterparameter::jumpToControl)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Enterparameter::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Enterparameter::dataReady)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Enterparameter::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Enterparameter.data,
    qt_meta_data_Enterparameter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Enterparameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Enterparameter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Enterparameter.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Enterparameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void Enterparameter::jumpToControl()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Enterparameter::dataReady(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
