/****************************************************************************
** Meta object code from reading C++ file 'xToolsApplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Common/Common/xToolsApplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsApplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsApplication_t {
    QByteArrayData data[30];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsApplication_t qt_meta_stringdata_xToolsApplication = {
    {
QT_MOC_LITERAL(0, 0, 17), // "xToolsApplication"
QT_MOC_LITERAL(1, 18, 15), // "languageChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "clipboardText"
QT_MOC_LITERAL(4, 49, 16), // "setClipboardText"
QT_MOC_LITERAL(5, 66, 4), // "text"
QT_MOC_LITERAL(6, 71, 14), // "dateTimeString"
QT_MOC_LITERAL(7, 86, 6), // "format"
QT_MOC_LITERAL(8, 93, 17), // "stringToHexString"
QT_MOC_LITERAL(9, 111, 3), // "str"
QT_MOC_LITERAL(10, 115, 17), // "hexStringToString"
QT_MOC_LITERAL(11, 133, 13), // "buildDateTime"
QT_MOC_LITERAL(12, 147, 19), // "buildDateTimeString"
QT_MOC_LITERAL(13, 167, 16), // "systemDateFormat"
QT_MOC_LITERAL(14, 184, 16), // "systemTimeFormat"
QT_MOC_LITERAL(15, 201, 11), // "desktopPath"
QT_MOC_LITERAL(16, 213, 18), // "supportedLanguages"
QT_MOC_LITERAL(17, 232, 10), // "AppPalette"
QT_MOC_LITERAL(18, 243, 7), // "Default"
QT_MOC_LITERAL(19, 251, 4), // "Dark"
QT_MOC_LITERAL(20, 256, 5), // "Light"
QT_MOC_LITERAL(21, 262, 6), // "Custom"
QT_MOC_LITERAL(22, 269, 13), // "ValidatorType"
QT_MOC_LITERAL(23, 283, 3), // "Bin"
QT_MOC_LITERAL(24, 287, 3), // "Otc"
QT_MOC_LITERAL(25, 291, 3), // "Dec"
QT_MOC_LITERAL(26, 295, 3), // "Hex"
QT_MOC_LITERAL(27, 299, 5), // "Ascii"
QT_MOC_LITERAL(28, 305, 5), // "Float"
QT_MOC_LITERAL(29, 311, 4) // "None"

    },
    "xToolsApplication\0languageChanged\0\0"
    "clipboardText\0setClipboardText\0text\0"
    "dateTimeString\0format\0stringToHexString\0"
    "str\0hexStringToString\0buildDateTime\0"
    "buildDateTimeString\0systemDateFormat\0"
    "systemTimeFormat\0desktopPath\0"
    "supportedLanguages\0AppPalette\0Default\0"
    "Dark\0Light\0Custom\0ValidatorType\0Bin\0"
    "Otc\0Dec\0Hex\0Ascii\0Float\0None"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsApplication[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       1,   90, // properties
       2,   93, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       3,    0,   70,    2, 0x02 /* Public */,
       4,    1,   71,    2, 0x02 /* Public */,
       6,    1,   74,    2, 0x02 /* Public */,
       8,    1,   77,    2, 0x02 /* Public */,
      10,    1,   80,    2, 0x02 /* Public */,
      11,    0,   83,    2, 0x02 /* Public */,
      12,    1,   84,    2, 0x02 /* Public */,
      13,    0,   87,    2, 0x02 /* Public */,
      14,    0,   88,    2, 0x02 /* Public */,
      15,    0,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QDateTime,
    QMetaType::QString, QMetaType::QString,    7,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,

 // properties: name, type, flags
      16, QMetaType::QStringList, 0x00095c01,

 // enums: name, alias, flags, count, data
      17,   17, 0x2,    4,  103,
      22,   22, 0x2,    7,  111,

 // enum data: key, value
      18, uint(xToolsApplication::AppPalette::Default),
      19, uint(xToolsApplication::AppPalette::Dark),
      20, uint(xToolsApplication::AppPalette::Light),
      21, uint(xToolsApplication::AppPalette::Custom),
      23, uint(xToolsApplication::ValidatorType::Bin),
      24, uint(xToolsApplication::ValidatorType::Otc),
      25, uint(xToolsApplication::ValidatorType::Dec),
      26, uint(xToolsApplication::ValidatorType::Hex),
      27, uint(xToolsApplication::ValidatorType::Ascii),
      28, uint(xToolsApplication::ValidatorType::Float),
      29, uint(xToolsApplication::ValidatorType::None),

       0        // eod
};

void xToolsApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->languageChanged(); break;
        case 1: { QString _r = _t->clipboardText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->setClipboardText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: { QString _r = _t->dateTimeString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->stringToHexString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->hexStringToString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDateTime _r = _t->buildDateTime();
            if (_a[0]) *reinterpret_cast< QDateTime*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->buildDateTimeString((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->systemDateFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->systemTimeFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->desktopPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsApplication::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsApplication::languageChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->supportedLanguages(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsApplication::staticMetaObject = { {
    &QApplication::staticMetaObject,
    qt_meta_stringdata_xToolsApplication.data,
    qt_meta_data_xToolsApplication,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsApplication.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int xToolsApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void xToolsApplication::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
