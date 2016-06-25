/****************************************************************************
** Meta object code from reading C++ file 'plant.h'
**
** Created: Sat Jun 25 20:03:19 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pvz/plant.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plant.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_plant[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_plant[] = {
    "plant\0\0die()\0"
};

const QMetaObject plant::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_plant,
      qt_meta_data_plant, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &plant::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *plant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *plant::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_plant))
        return static_cast<void*>(const_cast< plant*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< plant*>(this));
    return QObject::qt_metacast(_clname);
}

int plant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: die(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
