/****************************************************************************
** Meta object code from reading C++ file 'xToolsBase64Assisatnt.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/Assistants/Base64/Source/xToolsBase64Assisatnt.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsBase64Assisatnt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsBase64Assisatnt_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsBase64Assisatnt_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsBase64Assisatnt_t qt_meta_stringdata_xToolsBase64Assisatnt = {
    {
QT_MOC_LITERAL(0, 0, 21), // "xToolsBase64Assisatnt"
QT_MOC_LITERAL(1, 22, 0), // ""
QT_MOC_LITERAL(2, 23, 8), // "QWidget*"
QT_MOC_LITERAL(3, 32, 6) // "parent"

    },
    "xToolsBase64Assisatnt\0\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsBase64Assisatnt[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   18, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, 0x80000000 | 2,    3,
    0x80000000 | 1,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   14,    1, 0x0e /* Public */,
       0,    0,   17,    1, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void xToolsBase64Assisatnt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { xToolsBase64Assisatnt *_r = new xToolsBase64Assisatnt((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { xToolsBase64Assisatnt *_r = new xToolsBase64Assisatnt();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    Q_UNUSED(_o);
}

QT_INIT_METAOBJECT const QMetaObject xToolsBase64Assisatnt::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_xToolsBase64Assisatnt.data,
    qt_meta_data_xToolsBase64Assisatnt,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsBase64Assisatnt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsBase64Assisatnt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsBase64Assisatnt.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int xToolsBase64Assisatnt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
