/****************************************************************************
** Meta object code from reading C++ file 'sunflower.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pvz/sunflower.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sunflower.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sunflower_t {
    QByteArrayData data[3];
    char stringdata[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sunflower_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sunflower_t qt_meta_stringdata_sunflower = {
    {
QT_MOC_LITERAL(0, 0, 9), // "sunflower"
QT_MOC_LITERAL(1, 10, 7), // "makeSun"
QT_MOC_LITERAL(2, 18, 0) // ""

    },
    "sunflower\0makeSun\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sunflower[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void sunflower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sunflower *_t = static_cast<sunflower *>(_o);
        switch (_id) {
        case 0: _t->makeSun(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject sunflower::staticMetaObject = {
    { &plant::staticMetaObject, qt_meta_stringdata_sunflower.data,
      qt_meta_data_sunflower,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sunflower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sunflower::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sunflower.stringdata))
        return static_cast<void*>(const_cast< sunflower*>(this));
    return plant::qt_metacast(_clname);
}

int sunflower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = plant::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
