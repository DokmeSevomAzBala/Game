/****************************************************************************
** Meta object code from reading C++ file 'sun.h'
**
<<<<<<< HEAD
** Created: Wed Jun 22 13:30:55 2016
=======
** Created: Sat Jun 11 21:22:44 2016
>>>>>>> b0d766d7af0ba506c9839c167dd0c081f1e3b3f4
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pvz/sun.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_sun[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       5,    4,    4,    4, 0x0a,
      16,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_sun[] = {
    "sun\0\0move_sun()\0DeleteSun()\0"
};

const QMetaObject sun::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sun,
      qt_meta_data_sun, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &sun::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *sun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *sun::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sun))
        return static_cast<void*>(const_cast< sun*>(this));
    if (!strcmp(_clname, "QGraphicsPixmapItem"))
        return static_cast< QGraphicsPixmapItem*>(const_cast< sun*>(this));
    return QObject::qt_metacast(_clname);
}

int sun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: move_sun(); break;
        case 1: DeleteSun(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
