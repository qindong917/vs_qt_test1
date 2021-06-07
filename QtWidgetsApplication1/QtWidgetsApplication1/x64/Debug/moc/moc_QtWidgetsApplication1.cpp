/****************************************************************************
** Meta object code from reading C++ file 'QtWidgetsApplication1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../QtWidgetsApplication1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QtWidgetsApplication1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtWidgetsApplication1_t {
    QByteArrayData data[18];
    char stringdata0[282];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWidgetsApplication1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWidgetsApplication1_t qt_meta_stringdata_QtWidgetsApplication1 = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QtWidgetsApplication1"
QT_MOC_LITERAL(1, 22, 8), // "mySignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "msg"
QT_MOC_LITERAL(4, 36, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 58, 25), // "on_pushButton_url_clicked"
QT_MOC_LITERAL(6, 84, 28), // "on_pushButton_pamars_clicked"
QT_MOC_LITERAL(7, 113, 28), // "on_pushButton_header_clicked"
QT_MOC_LITERAL(8, 142, 26), // "on_pushButton_copy_clicked"
QT_MOC_LITERAL(9, 169, 27), // "on_pushButton_label_clicked"
QT_MOC_LITERAL(10, 197, 6), // "mySlot"
QT_MOC_LITERAL(11, 204, 14), // "mySlotUrlIndex"
QT_MOC_LITERAL(12, 219, 1), // "x"
QT_MOC_LITERAL(13, 221, 17), // "mySlotPamarsIndex"
QT_MOC_LITERAL(14, 239, 10), // "mySlotCopy"
QT_MOC_LITERAL(15, 250, 11), // "mySlotCopy2"
QT_MOC_LITERAL(16, 262, 11), // "eventFilter"
QT_MOC_LITERAL(17, 274, 7) // "QEvent*"

    },
    "QtWidgetsApplication1\0mySignal\0\0msg\0"
    "on_pushButton_clicked\0on_pushButton_url_clicked\0"
    "on_pushButton_pamars_clicked\0"
    "on_pushButton_header_clicked\0"
    "on_pushButton_copy_clicked\0"
    "on_pushButton_label_clicked\0mySlot\0"
    "mySlotUrlIndex\0x\0mySlotPamarsIndex\0"
    "mySlotCopy\0mySlotCopy2\0eventFilter\0"
    "QEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWidgetsApplication1[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,
      13,    1,   94,    2, 0x0a /* Public */,
      14,    1,   97,    2, 0x0a /* Public */,
      15,    1,  100,    2, 0x0a /* Public */,
      16,    2,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 17,    2,    2,

       0        // eod
};

void QtWidgetsApplication1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QtWidgetsApplication1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mySignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_url_clicked(); break;
        case 3: _t->on_pushButton_pamars_clicked(); break;
        case 4: _t->on_pushButton_header_clicked(); break;
        case 5: _t->on_pushButton_copy_clicked(); break;
        case 6: _t->on_pushButton_label_clicked(); break;
        case 7: _t->mySlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->mySlotUrlIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->mySlotPamarsIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mySlotCopy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->mySlotCopy2((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QtWidgetsApplication1::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QtWidgetsApplication1::mySignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtWidgetsApplication1::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_QtWidgetsApplication1.data,
    qt_meta_data_QtWidgetsApplication1,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtWidgetsApplication1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWidgetsApplication1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtWidgetsApplication1.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QtWidgetsApplication1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void QtWidgetsApplication1::mySignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
