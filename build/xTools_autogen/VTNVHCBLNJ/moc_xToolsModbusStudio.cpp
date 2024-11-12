/****************************************************************************
** Meta object code from reading C++ file 'xToolsModbusStudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/Modbus/Source/xToolsModbusStudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsModbusStudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsModbusStudio_t {
    QByteArrayData data[6];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsModbusStudio_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsModbusStudio_t qt_meta_stringdata_xToolsModbusStudio = {
    {
QT_MOC_LITERAL(0, 0, 18), // "xToolsModbusStudio"
QT_MOC_LITERAL(1, 19, 16), // "ModbusDeviceType"
QT_MOC_LITERAL(2, 36, 21), // "ModbusRtuSerialClient"
QT_MOC_LITERAL(3, 58, 21), // "ModbusRtuSerialServer"
QT_MOC_LITERAL(4, 80, 15), // "ModbusTcpClient"
QT_MOC_LITERAL(5, 96, 15) // "ModbusTcpServer"

    },
    "xToolsModbusStudio\0ModbusDeviceType\0"
    "ModbusRtuSerialClient\0ModbusRtuSerialServer\0"
    "ModbusTcpClient\0ModbusTcpServer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsModbusStudio[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    4,   19,

 // enum data: key, value
       2, uint(xToolsModbusStudio::ModbusRtuSerialClient),
       3, uint(xToolsModbusStudio::ModbusRtuSerialServer),
       4, uint(xToolsModbusStudio::ModbusTcpClient),
       5, uint(xToolsModbusStudio::ModbusTcpServer),

       0        // eod
};

void xToolsModbusStudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject xToolsModbusStudio::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_xToolsModbusStudio.data,
    qt_meta_data_xToolsModbusStudio,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsModbusStudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsModbusStudio::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsModbusStudio.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int xToolsModbusStudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
