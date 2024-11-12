/****************************************************************************
** Meta object code from reading C++ file 'taskFileMergeAssistant.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../Source/Task/source/taskFileMergeAssistant.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'taskFileMergeAssistant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_taskFileMergeAssistant_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_taskFileMergeAssistant_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_taskFileMergeAssistant_t qt_meta_stringdata_taskFileMergeAssistant = {
    {
QT_MOC_LITERAL(0, 0, 22), // "taskFileMergeAssistant"
QT_MOC_LITERAL(1, 23, 16), // "onComboBoxChange"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "text"
QT_MOC_LITERAL(4, 46, 8), // "QWidget*"
QT_MOC_LITERAL(5, 55, 6) // "parent"

    },
    "taskFileMergeAssistant\0onComboBoxChange\0"
    "\0text\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_taskFileMergeAssistant[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   26, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   22,    2, 0x0e /* Public */,
       0,    0,   25,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void taskFileMergeAssistant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { taskFileMergeAssistant *_r = new taskFileMergeAssistant((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { taskFileMergeAssistant *_r = new taskFileMergeAssistant();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<taskFileMergeAssistant *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onComboBoxChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject taskFileMergeAssistant::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_taskFileMergeAssistant.data,
    qt_meta_data_taskFileMergeAssistant,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *taskFileMergeAssistant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *taskFileMergeAssistant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_taskFileMergeAssistant.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int taskFileMergeAssistant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
