/****************************************************************************
** Meta object code from reading C++ file 'xToolsStringAssistant.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/Assistants/String/Source/xToolsStringAssistant.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsStringAssistant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsStringAssistant_t {
    QByteArrayData data[10];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsStringAssistant_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsStringAssistant_t qt_meta_stringdata_xToolsStringAssistant = {
    {
QT_MOC_LITERAL(0, 0, 21), // "xToolsStringAssistant"
QT_MOC_LITERAL(1, 22, 21), // "onTextEditTextChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 40), // "onInputFormatComboBoxCurrentI..."
QT_MOC_LITERAL(4, 86, 5), // "index"
QT_MOC_LITERAL(5, 92, 25), // "onCreatePushButtonClicked"
QT_MOC_LITERAL(6, 118, 40), // "onOutputFormatComboBoxCurrent..."
QT_MOC_LITERAL(7, 159, 4), // "text"
QT_MOC_LITERAL(8, 164, 8), // "QWidget*"
QT_MOC_LITERAL(9, 173, 6) // "parent"

    },
    "xToolsStringAssistant\0onTextEditTextChanged\0"
    "\0onInputFormatComboBoxCurrentIndexChanged\0"
    "index\0onCreatePushButtonClicked\0"
    "onOutputFormatComboBoxCurrentTextChanged\0"
    "text\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsStringAssistant[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   46, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 8,    9,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   42,    2, 0x0e /* Public */,
       0,    0,   45,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void xToolsStringAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { xToolsStringAssistant *_r = new xToolsStringAssistant((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { xToolsStringAssistant *_r = new xToolsStringAssistant();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsStringAssistant *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTextEditTextChanged(); break;
        case 1: _t->onInputFormatComboBoxCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onCreatePushButtonClicked(); break;
        case 3: _t->onOutputFormatComboBoxCurrentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject xToolsStringAssistant::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_xToolsStringAssistant.data,
    qt_meta_data_xToolsStringAssistant,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsStringAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsStringAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsStringAssistant.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int xToolsStringAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
