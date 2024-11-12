/****************************************************************************
** Meta object code from reading C++ file 'xToolsFileCheckAssistant.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/Assistants/FileCheck/Source/xToolsFileCheckAssistant.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xToolsFileCheckAssistant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_xToolsFileCheckAssistant_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_xToolsFileCheckAssistant_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_xToolsFileCheckAssistant_t qt_meta_stringdata_xToolsFileCheckAssistant = {
    {
QT_MOC_LITERAL(0, 0, 24), // "xToolsFileCheckAssistant"
QT_MOC_LITERAL(1, 25, 23), // "onOpenPushButtonClicked"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 28), // "onStartStopPushButtonClicked"
QT_MOC_LITERAL(4, 79, 22), // "onUpperCheckBoxClicked"
QT_MOC_LITERAL(5, 102, 18), // "onAlgorithmChanged"
QT_MOC_LITERAL(6, 121, 5), // "index"
QT_MOC_LITERAL(7, 127, 8), // "QWidget*"
QT_MOC_LITERAL(8, 136, 6) // "parent"

    },
    "xToolsFileCheckAssistant\0"
    "onOpenPushButtonClicked\0\0"
    "onStartStopPushButtonClicked\0"
    "onUpperCheckBoxClicked\0onAlgorithmChanged\0"
    "index\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_xToolsFileCheckAssistant[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   44, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 7,    8,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   40,    2, 0x0e /* Public */,
       0,    0,   43,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void xToolsFileCheckAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { xToolsFileCheckAssistant *_r = new xToolsFileCheckAssistant((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { xToolsFileCheckAssistant *_r = new xToolsFileCheckAssistant();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<xToolsFileCheckAssistant *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onOpenPushButtonClicked(); break;
        case 1: _t->onStartStopPushButtonClicked(); break;
        case 2: _t->onUpperCheckBoxClicked(); break;
        case 3: _t->onAlgorithmChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject xToolsFileCheckAssistant::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_xToolsFileCheckAssistant.data,
    qt_meta_data_xToolsFileCheckAssistant,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *xToolsFileCheckAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *xToolsFileCheckAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_xToolsFileCheckAssistant.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int xToolsFileCheckAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
