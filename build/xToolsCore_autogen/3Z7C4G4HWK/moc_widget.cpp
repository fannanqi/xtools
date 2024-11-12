/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Source/network/creator/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClickableLabel_t {
    QByteArrayData data[3];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClickableLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClickableLabel_t qt_meta_stringdata_ClickableLabel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ClickableLabel"
QT_MOC_LITERAL(1, 15, 7), // "clicked"
QT_MOC_LITERAL(2, 23, 0) // ""

    },
    "ClickableLabel\0clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClickableLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void ClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClickableLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClickableLabel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ClickableLabel::clicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ClickableLabel::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_ClickableLabel.data,
    qt_meta_data_ClickableLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClickableLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int ClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ClickableLabel::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[29];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 7), // "red_dev"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "red_pac"
QT_MOC_LITERAL(4, 24, 7), // "red_par"
QT_MOC_LITERAL(5, 32, 17), // "on_newmgm_clicked"
QT_MOC_LITERAL(6, 50, 11), // "onConfirmed"
QT_MOC_LITERAL(7, 62, 16), // "setupTableWidget"
QT_MOC_LITERAL(8, 79, 11), // "onDev_Added"
QT_MOC_LITERAL(9, 91, 11), // "onPac_Added"
QT_MOC_LITERAL(10, 103, 11), // "onPar_Added"
QT_MOC_LITERAL(11, 115, 20), // "on_searchmgm_clicked"
QT_MOC_LITERAL(12, 136, 19), // "onEditButtonClicked"
QT_MOC_LITERAL(13, 156, 3), // "row"
QT_MOC_LITERAL(14, 160, 21), // "onDeleteButtonClicked"
QT_MOC_LITERAL(15, 182, 22), // "onDetailsButtonClicked"
QT_MOC_LITERAL(16, 205, 17), // "saveParDataToFile"
QT_MOC_LITERAL(17, 223, 8), // "filename"
QT_MOC_LITERAL(18, 232, 17), // "savePacDataToFile"
QT_MOC_LITERAL(19, 250, 17), // "saveDevDataToFile"
QT_MOC_LITERAL(20, 268, 19), // "loadParDataFromFile"
QT_MOC_LITERAL(21, 288, 19), // "loadPacDataFromFile"
QT_MOC_LITERAL(22, 308, 19), // "loadDevDataFromFile"
QT_MOC_LITERAL(23, 328, 13), // "deleteParData"
QT_MOC_LITERAL(24, 342, 13), // "deletePacData"
QT_MOC_LITERAL(25, 356, 13), // "deleteDevData"
QT_MOC_LITERAL(26, 370, 18), // "editDataContainers"
QT_MOC_LITERAL(27, 389, 21), // "ensureDirectoryExists"
QT_MOC_LITERAL(28, 411, 7) // "dirPath"

    },
    "Widget\0red_dev\0\0red_pac\0red_par\0"
    "on_newmgm_clicked\0onConfirmed\0"
    "setupTableWidget\0onDev_Added\0onPac_Added\0"
    "onPar_Added\0on_searchmgm_clicked\0"
    "onEditButtonClicked\0row\0onDeleteButtonClicked\0"
    "onDetailsButtonClicked\0saveParDataToFile\0"
    "filename\0savePacDataToFile\0saveDevDataToFile\0"
    "loadParDataFromFile\0loadPacDataFromFile\0"
    "loadDevDataFromFile\0deleteParData\0"
    "deletePacData\0deleteDevData\0"
    "editDataContainers\0ensureDirectoryExists\0"
    "dirPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  134,    2, 0x06 /* Public */,
       3,    0,  135,    2, 0x06 /* Public */,
       4,    0,  136,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  137,    2, 0x08 /* Private */,
       6,    0,  138,    2, 0x08 /* Private */,
       7,    0,  139,    2, 0x08 /* Private */,
       8,    6,  140,    2, 0x08 /* Private */,
       9,    5,  153,    2, 0x08 /* Private */,
      10,    9,  164,    2, 0x08 /* Private */,
      11,    0,  183,    2, 0x08 /* Private */,
      12,    1,  184,    2, 0x08 /* Private */,
      14,    1,  187,    2, 0x08 /* Private */,
      15,    1,  190,    2, 0x08 /* Private */,
      16,    1,  193,    2, 0x08 /* Private */,
      18,    1,  196,    2, 0x08 /* Private */,
      19,    1,  199,    2, 0x08 /* Private */,
      20,    1,  202,    2, 0x08 /* Private */,
      21,    1,  205,    2, 0x08 /* Private */,
      22,    1,  208,    2, 0x08 /* Private */,
      23,    1,  211,    2, 0x08 /* Private */,
      24,    1,  214,    2, 0x08 /* Private */,
      25,    1,  217,    2, 0x08 /* Private */,
      26,    1,  220,    2, 0x08 /* Private */,
      27,    1,  223,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QString,   28,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->red_dev(); break;
        case 1: _t->red_pac(); break;
        case 2: _t->red_par(); break;
        case 3: _t->on_newmgm_clicked(); break;
        case 4: _t->onConfirmed(); break;
        case 5: _t->setupTableWidget(); break;
        case 6: _t->onDev_Added((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 7: _t->onPac_Added((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 8: _t->onPar_Added((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8])),(*reinterpret_cast< const QString(*)>(_a[9]))); break;
        case 9: _t->on_searchmgm_clicked(); break;
        case 10: _t->onEditButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onDeleteButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onDetailsButtonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->saveParDataToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->savePacDataToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->saveDevDataToFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->loadParDataFromFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->loadPacDataFromFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->loadDevDataFromFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->deleteParData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->deletePacData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->deleteDevData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->editDataContainers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->ensureDirectoryExists((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::red_dev)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::red_pac)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Widget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Widget::red_par)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void Widget::red_dev()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Widget::red_pac()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Widget::red_par()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
