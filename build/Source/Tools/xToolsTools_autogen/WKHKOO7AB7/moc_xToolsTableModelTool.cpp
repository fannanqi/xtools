/****************************************************************************
** Meta object code from reading C++ file 'xToolsTableModelTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsTableModelTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsTableModelTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsTableModelTool_t {
    QByteArrayData data[11];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsTableModelTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsTableModelTool_t qt_meta_stringdata_xToolsTableModelTool = {
    {
QT_MOC_LITERAL(0, 0, 20), // "xToolsTableModelTool"
QT_MOC_LITERAL(1, 21, 7), // "addItem"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "jsonCtx"
QT_MOC_LITERAL(4, 38, 5), // "index"
QT_MOC_LITERAL(5, 44, 12), // "itemsContext"
QT_MOC_LITERAL(6, 57, 16), // "cookHeaderString"
QT_MOC_LITERAL(7, 74, 3), // "str"
QT_MOC_LITERAL(8, 78, 11), // "itemContext"
QT_MOC_LITERAL(9, 90, 10), // "tableModel"
QT_MOC_LITERAL(10, 101, 7) // "headers"

    },
    "xToolsTableModelTool\0addItem\0\0jsonCtx\0"
    "index\0itemsContext\0cookHeaderString\0"
    "str\0itemContext\0tableModel\0headers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsTableModelTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x02 /* Public */,
       1,    1,   44,    2, 0x22 /* Public | MethodCloned */,
       5,    0,   47,    2, 0x02 /* Public */,
       6,    1,   48,    2, 0x02 /* Public */,
       8,    1,   51,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::QVariant,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QVariant, QMetaType::Int,    4,

 // properties: name, type, flags
       9, QMetaType::QVariant, 0x00095401,
      10, QMetaType::QStringList, 0x00095401,

       0        // eod
};

void xToolsTableModelTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsTableModelTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addItem((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->addItem((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QVariant _r = _t->itemsContext();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 3: { QString _r = _t->cookHeaderString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->itemContext((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsTableModelTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->tableModel(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->headers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsTableModelTool::staticMetaObject = { {
    &xToolsBaseTool::staticMetaObject,
    qt_meta_stringdata_xToolsTableModelTool.data,
    qt_meta_data_xToolsTableModelTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsTableModelTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsTableModelTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsTableModelTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsBaseTool::qt_metacast(_clname);
}

int xToolsTableModelTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsBaseTool::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
