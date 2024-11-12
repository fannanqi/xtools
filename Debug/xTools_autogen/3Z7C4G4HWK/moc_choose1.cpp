/****************************************************************************
** Meta object code from reading C++ file 'choose1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/network/creator/choose1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choose1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_choose1_t {
    QByteArrayData data[19];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_choose1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_choose1_t qt_meta_stringdata_choose1 = {
    {
QT_MOC_LITERAL(0, 0, 7), // "choose1"
QT_MOC_LITERAL(1, 8, 14), // "jumpToSelector"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "comboBoxValueChanged"
QT_MOC_LITERAL(4, 45, 11), // "networkName"
QT_MOC_LITERAL(5, 57, 13), // "comboBoxValue"
QT_MOC_LITERAL(6, 71, 25), // "sendInputDataAndTabValues"
QT_MOC_LITERAL(7, 97, 9), // "inputData"
QT_MOC_LITERAL(8, 107, 12), // "networkCount"
QT_MOC_LITERAL(9, 120, 25), // "QMap<QString,QStringList>"
QT_MOC_LITERAL(10, 146, 15), // "checkedItemsMap"
QT_MOC_LITERAL(11, 162, 21), // "QMap<QString,QString>"
QT_MOC_LITERAL(12, 184, 14), // "comboBoxValues"
QT_MOC_LITERAL(13, 199, 19), // "sendCheckedItemsMap"
QT_MOC_LITERAL(14, 219, 13), // "createWidgets"
QT_MOC_LITERAL(15, 233, 22), // "on_pushButton4_clicked"
QT_MOC_LITERAL(16, 256, 19), // "updateCheckBoxState"
QT_MOC_LITERAL(17, 276, 12), // "onTabChanged"
QT_MOC_LITERAL(18, 289, 5) // "index"

    },
    "choose1\0jumpToSelector\0\0comboBoxValueChanged\0"
    "networkName\0comboBoxValue\0"
    "sendInputDataAndTabValues\0inputData\0"
    "networkCount\0QMap<QString,QStringList>\0"
    "checkedItemsMap\0QMap<QString,QString>\0"
    "comboBoxValues\0sendCheckedItemsMap\0"
    "createWidgets\0on_pushButton4_clicked\0"
    "updateCheckBoxState\0onTabChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_choose1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    2,   55,    2, 0x06 /* Public */,
       6,    4,   60,    2, 0x06 /* Public */,
      13,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,   72,    2, 0x0a /* Public */,
      15,    0,   77,    2, 0x08 /* Private */,
      16,    0,   78,    2, 0x08 /* Private */,
      17,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 9, 0x80000000 | 11,    7,    8,   10,   12,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void choose1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<choose1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->jumpToSelector(); break;
        case 1: _t->comboBoxValueChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->sendInputDataAndTabValues((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QMap<QString,QStringList>(*)>(_a[3])),(*reinterpret_cast< const QMap<QString,QString>(*)>(_a[4]))); break;
        case 3: _t->sendCheckedItemsMap((*reinterpret_cast< const QMap<QString,QStringList>(*)>(_a[1]))); break;
        case 4: _t->createWidgets((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_pushButton4_clicked(); break;
        case 6: _t->updateCheckBoxState(); break;
        case 7: _t->onTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (choose1::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&choose1::jumpToSelector)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (choose1::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&choose1::comboBoxValueChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (choose1::*)(const QString & , int , const QMap<QString,QStringList> & , const QMap<QString,QString> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&choose1::sendInputDataAndTabValues)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (choose1::*)(const QMap<QString,QStringList> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&choose1::sendCheckedItemsMap)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject choose1::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_choose1.data,
    qt_meta_data_choose1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *choose1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *choose1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_choose1.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int choose1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void choose1::jumpToSelector()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void choose1::comboBoxValueChanged(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void choose1::sendInputDataAndTabValues(const QString & _t1, int _t2, const QMap<QString,QStringList> & _t3, const QMap<QString,QString> & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void choose1::sendCheckedItemsMap(const QMap<QString,QStringList> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
