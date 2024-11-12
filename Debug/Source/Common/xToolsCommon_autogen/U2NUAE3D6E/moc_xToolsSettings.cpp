/****************************************************************************
** Meta object code from reading C++ file 'xToolsSettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Common/Common/xToolsSettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsSettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsSettings_t {
    QByteArrayData data[16];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsSettings_t qt_meta_stringdata_xToolsSettings = {
    {
QT_MOC_LITERAL(0, 0, 14), // "xToolsSettings"
QT_MOC_LITERAL(1, 15, 17), // "hdpiPolicyChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "uiTypeChanged"
QT_MOC_LITERAL(4, 48, 20), // "clearSettingsChanged"
QT_MOC_LITERAL(5, 69, 16), // "pageIndexChanged"
QT_MOC_LITERAL(6, 86, 23), // "isTextBesideIconChanged"
QT_MOC_LITERAL(7, 110, 14), // "paletteChanged"
QT_MOC_LITERAL(8, 125, 20), // "customPaletteChanged"
QT_MOC_LITERAL(9, 146, 19), // "openSettingsFileDir"
QT_MOC_LITERAL(10, 166, 5), // "value"
QT_MOC_LITERAL(11, 172, 3), // "key"
QT_MOC_LITERAL(12, 176, 12), // "defaultValue"
QT_MOC_LITERAL(13, 189, 8), // "setValue"
QT_MOC_LITERAL(14, 198, 10), // "hdpiPolicy"
QT_MOC_LITERAL(15, 209, 13) // "clearSettings"

    },
    "xToolsSettings\0hdpiPolicyChanged\0\0"
    "uiTypeChanged\0clearSettingsChanged\0"
    "pageIndexChanged\0isTextBesideIconChanged\0"
    "paletteChanged\0customPaletteChanged\0"
    "openSettingsFileDir\0value\0key\0"
    "defaultValue\0setValue\0hdpiPolicy\0"
    "clearSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       2,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    0,   72,    2, 0x06 /* Public */,
       6,    0,   73,    2, 0x06 /* Public */,
       7,    0,   74,    2, 0x06 /* Public */,
       8,    0,   75,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    0,   76,    2, 0x02 /* Public */,
      10,    2,   77,    2, 0x02 /* Public */,
      10,    1,   82,    2, 0x22 /* Public | MethodCloned */,
      13,    2,   85,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QVariant, QMetaType::QString, QMetaType::QVariant,   11,   12,
    QMetaType::QVariant, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant,   11,   10,

 // properties: name, type, flags
      14, QMetaType::Int, 0x00495103,
      15, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       2,

       0        // eod
};

void xToolsSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hdpiPolicyChanged(); break;
        case 1: _t->uiTypeChanged(); break;
        case 2: _t->clearSettingsChanged(); break;
        case 3: _t->pageIndexChanged(); break;
        case 4: _t->isTextBesideIconChanged(); break;
        case 5: _t->paletteChanged(); break;
        case 6: _t->customPaletteChanged(); break;
        case 7: _t->openSettingsFileDir(); break;
        case 8: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 9: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->setValue((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::hdpiPolicyChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::uiTypeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::clearSettingsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::pageIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::isTextBesideIconChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::paletteChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (xToolsSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&xToolsSettings::customPaletteChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<xToolsSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->hdpiPolicy(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->clearSettings(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<xToolsSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setHdpiPolicy(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setClearSettings(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject xToolsSettings::staticMetaObject = { {
    &QSettings::staticMetaObject,
    qt_meta_stringdata_xToolsSettings.data,
    qt_meta_data_xToolsSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsSettings.stringdata0))
        return static_cast<void*>(this);
    return QSettings::qt_metacast(_clname);
}

int xToolsSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSettings::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void xToolsSettings::hdpiPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void xToolsSettings::uiTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void xToolsSettings::clearSettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void xToolsSettings::pageIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void xToolsSettings::isTextBesideIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void xToolsSettings::paletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void xToolsSettings::customPaletteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
