/****************************************************************************
** Meta object code from reading C++ file 'xToolsPrestorerTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsPrestorerTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsPrestorerTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsPrestorerTool_t {
    QByteArrayData data[20];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsPrestorerTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsPrestorerTool_t qt_meta_stringdata_xToolsPrestorerTool = {
    {
QT_MOC_LITERAL(0, 0, 19), // "xToolsPrestorerTool"
QT_MOC_LITERAL(1, 20, 19), // "descriptionsChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 11), // "itemContext"
QT_MOC_LITERAL(4, 53, 5), // "index"
QT_MOC_LITERAL(5, 59, 4), // "send"
QT_MOC_LITERAL(6, 64, 10), // "tableModel"
QT_MOC_LITERAL(7, 75, 7), // "headers"
QT_MOC_LITERAL(8, 83, 15), // "itemDescription"
QT_MOC_LITERAL(9, 99, 14), // "itemTextFormat"
QT_MOC_LITERAL(10, 114, 19), // "itemEscapeCharacter"
QT_MOC_LITERAL(11, 134, 10), // "itemPrefix"
QT_MOC_LITERAL(12, 145, 10), // "itemSuffix"
QT_MOC_LITERAL(13, 156, 13), // "itemCrcEnable"
QT_MOC_LITERAL(14, 170, 16), // "itemCrcBigEndian"
QT_MOC_LITERAL(15, 187, 16), // "itemCrcAlgorithm"
QT_MOC_LITERAL(16, 204, 17), // "itemCrcStartIndex"
QT_MOC_LITERAL(17, 222, 15), // "itemCrcEndIndex"
QT_MOC_LITERAL(18, 238, 8), // "itemText"
QT_MOC_LITERAL(19, 247, 12) // "descriptions"

    },
    "xToolsPrestorerTool\0descriptionsChanged\0"
    "\0itemContext\0index\0send\0tableModel\0"
    "headers\0itemDescription\0itemTextFormat\0"
    "itemEscapeCharacter\0itemPrefix\0"
    "itemSuffix\0itemCrcEnable\0itemCrcBigEndian\0"
    "itemCrcAlgorithm\0itemCrcStartIndex\0"
    "itemCrcEndIndex\0itemText\0descriptions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsPrestorerTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      14,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x02 /* Public */,
       5,    1,   33,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariant, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       6, QMetaType::QVariant, 0x00095401,
       7, QMetaType::QStringList, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::QString, 0x00095401,
      14, QMetaType::QString, 0x00095401,
      15, QMetaType::QString, 0x00095401,
      16, QMetaType::QString, 0x00095401,
      17, QMetaType::QString, 0x00095401,
      18, QMetaType::QString, 0x00095401,
      19, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
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
       0,
       0,

       0        // eod
};

void xToolsPrestorerTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsPrestorerTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->descriptionsChanged(); break;
        case 1: { QVariant _r = _t->itemContext((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->send((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsPrestorerTool::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsPrestorerTool::descriptionsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsPrestorerTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->tableModel(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->headers(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->itemDescription(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->itemTextFormat(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->itemEscapeCharacter(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->itemPrefix(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->itemSuffix(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->itemCrcEnable(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->itemCrcBigEndian(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->itemCrcAlgorithm(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->itemCrcStartIndex(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->itemCrcEndIndex(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->itemText(); break;
        case 13: *reinterpret_cast< QStringList*>(_v) = _t->descriptions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsPrestorerTool::staticMetaObject = { {
    &xToolsTableModelTool::staticMetaObject,
    qt_meta_stringdata_xToolsPrestorerTool.data,
    qt_meta_data_xToolsPrestorerTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsPrestorerTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsPrestorerTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsPrestorerTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsTableModelTool::qt_metacast(_clname);
}

int xToolsPrestorerTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsTableModelTool::qt_metacall(_c, _id, _a);
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
void xToolsPrestorerTool::descriptionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
