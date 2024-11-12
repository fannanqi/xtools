/****************************************************************************
** Meta object code from reading C++ file 'xToolsCrcInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Common/Common/xToolsCrcInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsCrcInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsCrcInterface_t {
    QByteArrayData data[26];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsCrcInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsCrcInterface_t qt_meta_stringdata_xToolsCrcInterface = {
    {
QT_MOC_LITERAL(0, 0, 18), // "xToolsCrcInterface"
QT_MOC_LITERAL(1, 19, 15), // "calculateString"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "bytes"
QT_MOC_LITERAL(4, 42, 6), // "format"
QT_MOC_LITERAL(5, 49, 14), // "calculateBytes"
QT_MOC_LITERAL(6, 64, 10), // "arithmetic"
QT_MOC_LITERAL(7, 75, 10), // "startIndex"
QT_MOC_LITERAL(8, 86, 8), // "endIndex"
QT_MOC_LITERAL(9, 95, 9), // "bigEndian"
QT_MOC_LITERAL(10, 105, 19), // "SAKEnumCrcAlgorithm"
QT_MOC_LITERAL(11, 125, 5), // "CRC_8"
QT_MOC_LITERAL(12, 131, 9), // "CRC_8_ITU"
QT_MOC_LITERAL(13, 141, 10), // "CRC_8_ROHC"
QT_MOC_LITERAL(14, 152, 11), // "CRC_8_MAXIM"
QT_MOC_LITERAL(15, 164, 10), // "CRC_16_IBM"
QT_MOC_LITERAL(16, 175, 12), // "CRC_16_MAXIM"
QT_MOC_LITERAL(17, 188, 10), // "CRC_16_USB"
QT_MOC_LITERAL(18, 199, 13), // "CRC_16_MODBUS"
QT_MOC_LITERAL(19, 213, 12), // "CRC_16_CCITT"
QT_MOC_LITERAL(20, 226, 18), // "CRC_16_CCITT_FALSE"
QT_MOC_LITERAL(21, 245, 10), // "CRC_16_x25"
QT_MOC_LITERAL(22, 256, 13), // "CRC_16_XMODEM"
QT_MOC_LITERAL(23, 270, 10), // "CRC_16_DNP"
QT_MOC_LITERAL(24, 281, 6), // "CRC_32"
QT_MOC_LITERAL(25, 288, 12) // "CRC_32_MPEG2"

    },
    "xToolsCrcInterface\0calculateString\0\0"
    "bytes\0format\0calculateBytes\0arithmetic\0"
    "startIndex\0endIndex\0bigEndian\0"
    "SAKEnumCrcAlgorithm\0CRC_8\0CRC_8_ITU\0"
    "CRC_8_ROHC\0CRC_8_MAXIM\0CRC_16_IBM\0"
    "CRC_16_MAXIM\0CRC_16_USB\0CRC_16_MODBUS\0"
    "CRC_16_CCITT\0CRC_16_CCITT_FALSE\0"
    "CRC_16_x25\0CRC_16_XMODEM\0CRC_16_DNP\0"
    "CRC_32\0CRC_32_MPEG2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsCrcInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x02 /* Public */,
       5,    5,   34,    2, 0x02 /* Public */,
       5,    4,   45,    2, 0x22 /* Public | MethodCloned */,

 // methods: parameters
    QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    3,    6,    7,    8,    9,
    QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int, QMetaType::Int,    3,    6,    7,    8,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,   15,   59,

 // enum data: key, value
      11, uint(xToolsCrcInterface::CRC_8),
      12, uint(xToolsCrcInterface::CRC_8_ITU),
      13, uint(xToolsCrcInterface::CRC_8_ROHC),
      14, uint(xToolsCrcInterface::CRC_8_MAXIM),
      15, uint(xToolsCrcInterface::CRC_16_IBM),
      16, uint(xToolsCrcInterface::CRC_16_MAXIM),
      17, uint(xToolsCrcInterface::CRC_16_USB),
      18, uint(xToolsCrcInterface::CRC_16_MODBUS),
      19, uint(xToolsCrcInterface::CRC_16_CCITT),
      20, uint(xToolsCrcInterface::CRC_16_CCITT_FALSE),
      21, uint(xToolsCrcInterface::CRC_16_x25),
      22, uint(xToolsCrcInterface::CRC_16_XMODEM),
      23, uint(xToolsCrcInterface::CRC_16_DNP),
      24, uint(xToolsCrcInterface::CRC_32),
      25, uint(xToolsCrcInterface::CRC_32_MPEG2),

       0        // eod
};

void xToolsCrcInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsCrcInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QString _r = _t->calculateString((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 1: { QByteArray _r = _t->calculateBytes((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 2: { QByteArray _r = _t->calculateBytes((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject xToolsCrcInterface::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_xToolsCrcInterface.data,
    qt_meta_data_xToolsCrcInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsCrcInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsCrcInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsCrcInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int xToolsCrcInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
