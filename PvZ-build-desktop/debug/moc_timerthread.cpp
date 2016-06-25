/****************************************************************************
** Meta object code from reading C++ file 'timerthread.h'
**
** Created: Sat Jun 25 18:54:41 2016
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pvz/timerthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'timerthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_timerThread[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      24,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_timerThread[] = {
    "timerThread\0\0mysignal()\0myslot()\0"
};

const QMetaObject timerThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_timerThread,
      qt_meta_data_timerThread, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &timerThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *timerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *timerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_timerThread))
        return static_cast<void*>(const_cast< timerThread*>(this));
    return QThread::qt_metacast(_clname);
}

int timerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mysignal(); break;
        case 1: myslot(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void timerThread::mysignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
