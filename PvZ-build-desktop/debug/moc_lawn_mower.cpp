/****************************************************************************
** Meta object code from reading C++ file 'lawn_mower.h'
**
<<<<<<< HEAD
** Created: Sun Jun 26 13:26:11 2016
=======
** Created: Sat Jun 25 21:58:57 2016
>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pvz/lawn_mower.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lawn_mower.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lawn_mower[] = {

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
      12,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_lawn_mower[] = {
    "lawn_mower\0\0movinglawn()\0"
};

const QMetaObject lawn_mower::staticMetaObject = {
    { &plant::staticMetaObject, qt_meta_stringdata_lawn_mower,
      qt_meta_data_lawn_mower, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lawn_mower::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lawn_mower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lawn_mower::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lawn_mower))
        return static_cast<void*>(const_cast< lawn_mower*>(this));
    return plant::qt_metacast(_clname);
}

int lawn_mower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = plant::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: movinglawn(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
