/****************************************************************************
** Meta object code from reading C++ file 'menuwidgets.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Ticketing/menuwidgets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuwidgets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuWidgets_t {
    const uint offsetsAndSize[28];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MenuWidgets_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MenuWidgets_t qt_meta_stringdata_MenuWidgets = {
    {
QT_MOC_LITERAL(0, 11), // "MenuWidgets"
QT_MOC_LITERAL(12, 12), // "crear_ticket"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 16), // "vector<Producto>"
QT_MOC_LITERAL(43, 4), // "cart"
QT_MOC_LITERAL(48, 27), // "on_LEBuscarMenu_textChanged"
QT_MOC_LITERAL(76, 4), // "arg1"
QT_MOC_LITERAL(81, 9), // "addToCart"
QT_MOC_LITERAL(91, 6), // "nombre"
QT_MOC_LITERAL(98, 6), // "precio"
QT_MOC_LITERAL(105, 11), // "observacion"
QT_MOC_LITERAL(117, 5), // "image"
QT_MOC_LITERAL(123, 5), // "value"
QT_MOC_LITERAL(129, 20) // "on_PBOrdenar_clicked"

    },
    "MenuWidgets\0crear_ticket\0\0vector<Producto>\0"
    "cart\0on_LEBuscarMenu_textChanged\0arg1\0"
    "addToCart\0nombre\0precio\0observacion\0"
    "image\0value\0on_PBOrdenar_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuWidgets[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   41,    2, 0x08,    2 /* Private */,
       7,    5,   44,    2, 0x08,    4 /* Private */,
      13,    0,   55,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int,    8,    9,   10,   11,   12,
    QMetaType::Void,

       0        // eod
};

void MenuWidgets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuWidgets *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->crear_ticket((*reinterpret_cast< vector<Producto>(*)>(_a[1]))); break;
        case 1: _t->on_LEBuscarMenu_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->addToCart((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QByteArray(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 3: _t->on_PBOrdenar_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuWidgets::*)(vector<Producto> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuWidgets::crear_ticket)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MenuWidgets::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MenuWidgets.offsetsAndSize,
    qt_meta_data_MenuWidgets,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MenuWidgets_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<vector<Producto>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MenuWidgets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuWidgets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuWidgets.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MenuWidgets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MenuWidgets::crear_ticket(vector<Producto> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
