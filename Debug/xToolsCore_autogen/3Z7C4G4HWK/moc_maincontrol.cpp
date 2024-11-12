/****************************************************************************
** Meta object code from reading C++ file 'maincontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/network/creator/maincontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maincontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_maincontrol_t {
    QByteArrayData data[14];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_maincontrol_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_maincontrol_t qt_meta_stringdata_maincontrol = {
    {
QT_MOC_LITERAL(0, 0, 11), // "maincontrol"
QT_MOC_LITERAL(1, 12, 11), // "refreshTree"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 23), // "onTreeWidgetItemClicked"
QT_MOC_LITERAL(4, 49, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(5, 66, 4), // "item"
QT_MOC_LITERAL(6, 71, 16), // "removeNetworkMap"
QT_MOC_LITERAL(7, 88, 16), // "repeatNetworkMap"
QT_MOC_LITERAL(8, 105, 5), // "mapID"
QT_MOC_LITERAL(9, 111, 7), // "mapName"
QT_MOC_LITERAL(10, 119, 20), // "onRightButtonClicked"
QT_MOC_LITERAL(11, 140, 18), // "onUdpconectClicked"
QT_MOC_LITERAL(12, 159, 15), // "onClearNcrTable"
QT_MOC_LITERAL(13, 175, 13) // "saveParamData"

    },
    "maincontrol\0refreshTree\0\0"
    "onTreeWidgetItemClicked\0QTreeWidgetItem*\0"
    "item\0removeNetworkMap\0repeatNetworkMap\0"
    "mapID\0mapName\0onRightButtonClicked\0"
    "onUdpconectClicked\0onClearNcrTable\0"
    "saveParamData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_maincontrol[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       6,    1,   58,    2, 0x0a /* Public */,
       7,    2,   61,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void maincontrol::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<maincontrol *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->refreshTree(); break;
        case 1: _t->onTreeWidgetItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->removeNetworkMap((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->repeatNetworkMap((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->onRightButtonClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->onUdpconectClicked(); break;
        case 6: _t->onClearNcrTable(); break;
        case 7: _t->saveParamData(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject maincontrol::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_maincontrol.data,
    qt_meta_data_maincontrol,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *maincontrol::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *maincontrol::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_maincontrol.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int maincontrol::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
