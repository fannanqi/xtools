/****************************************************************************
** Meta object code from reading C++ file 'xToolsEmitterTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsEmitterTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsEmitterTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsEmitterTool_t {
    QByteArrayData data[14];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsEmitterTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsEmitterTool_t qt_meta_stringdata_xToolsEmitterTool = {
    {
QT_MOC_LITERAL(0, 0, 17), // "xToolsEmitterTool"
QT_MOC_LITERAL(1, 18, 10), // "itemEnable"
QT_MOC_LITERAL(2, 29, 15), // "itemDescription"
QT_MOC_LITERAL(3, 45, 14), // "itemTextFormat"
QT_MOC_LITERAL(4, 60, 19), // "itemEscapeCharacter"
QT_MOC_LITERAL(5, 80, 12), // "itemInterval"
QT_MOC_LITERAL(6, 93, 10), // "itemPrefix"
QT_MOC_LITERAL(7, 104, 10), // "itemSuffix"
QT_MOC_LITERAL(8, 115, 13), // "itemCrcEnable"
QT_MOC_LITERAL(9, 129, 16), // "itemCrcBigEndian"
QT_MOC_LITERAL(10, 146, 16), // "itemCrcAlgorithm"
QT_MOC_LITERAL(11, 163, 17), // "itemCrcStartIndex"
QT_MOC_LITERAL(12, 181, 15), // "itemCrcEndIndex"
QT_MOC_LITERAL(13, 197, 8) // "itemText"

    },
    "xToolsEmitterTool\0itemEnable\0"
    "itemDescription\0itemTextFormat\0"
    "itemEscapeCharacter\0itemInterval\0"
    "itemPrefix\0itemSuffix\0itemCrcEnable\0"
    "itemCrcBigEndian\0itemCrcAlgorithm\0"
    "itemCrcStartIndex\0itemCrcEndIndex\0"
    "itemText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsEmitterTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      13,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,
       5, QMetaType::QString, 0x00095401,
       6, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QString, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QString, 0x00095401,
      13, QMetaType::QString, 0x00095401,

       0        // eod
};

void xToolsEmitterTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsEmitterTool *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->itemEnable(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->itemDescription(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->itemTextFormat(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->itemEscapeCharacter(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->itemInterval(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->itemPrefix(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->itemSuffix(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->itemCrcEnable(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->itemCrcBigEndian(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->itemCrcAlgorithm(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->itemCrcStartIndex(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->itemCrcEndIndex(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->itemText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject xToolsEmitterTool::staticMetaObject = { {
    &xToolsTableModelTool::staticMetaObject,
    qt_meta_stringdata_xToolsEmitterTool.data,
    qt_meta_data_xToolsEmitterTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsEmitterTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsEmitterTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsEmitterTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsTableModelTool::qt_metacast(_clname);
}

int xToolsEmitterTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsTableModelTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
