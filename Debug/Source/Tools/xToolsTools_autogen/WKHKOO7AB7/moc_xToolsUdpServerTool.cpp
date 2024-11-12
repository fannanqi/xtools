/****************************************************************************
** Meta object code from reading C++ file 'xToolsUdpServerTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Tools/Tools/xToolsUdpServerTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsUdpServerTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsUdpServerTool_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsUdpServerTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsUdpServerTool_t qt_meta_stringdata_xToolsUdpServerTool = {
    {
QT_MOC_LITERAL(0, 0, 19) // "xToolsUdpServerTool"

    },
    "xToolsUdpServerTool"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsUdpServerTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void xToolsUdpServerTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject xToolsUdpServerTool::staticMetaObject = { {
    &xToolsSocketServerTool::staticMetaObject,
    qt_meta_stringdata_xToolsUdpServerTool.data,
    qt_meta_data_xToolsUdpServerTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsUdpServerTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsUdpServerTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsUdpServerTool.stringdata0))
        return static_cast<void*>(this);
    return xToolsSocketServerTool::qt_metacast(_clname);
}

int xToolsUdpServerTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = xToolsSocketServerTool::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
