/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
<<<<<<< HEAD
** Created: Sun Jun 26 13:26:01 2016
=======
** Created: Sat Jun 25 23:06:35 2016
>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pvz/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
<<<<<<< HEAD
      27,   11,   11,   11, 0x0a,
      41,   11,   11,   11, 0x0a,
      58,   11,   11,   11, 0x0a,
      72,   11,   11,   11, 0x08,
      80,   11,   11,   11, 0x08,
      91,   11,   11,   11, 0x08,
     112,   11,   11,   11, 0x08,
     137,   11,   11,   11, 0x08,
=======
      26,   11,   11,   11, 0x0a,
      43,   11,   11,   11, 0x0a,
      57,   11,   11,   11, 0x08,
      65,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      97,   11,   11,   11, 0x08,
     122,   11,   11,   11, 0x08,
>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
<<<<<<< HEAD
    "MainWindow\0\0read_connect()\0creatzom(int)\0"
    "MakeSunOnScene()\0MoveAllSuns()\0check()\0"
    "planting()\0on_walnutB_clicked()\0"
    "on_peashooterB_clicked()\0"
=======
    "MainWindow\0\0creatzom(int)\0MakeSunOnScene()\0"
    "MoveAllSuns()\0check()\0planting()\0"
    "on_walnutB_clicked()\0on_peashooterB_clicked()\0"
>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
    "on_sunflowerB_clicked()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
<<<<<<< HEAD
        case 0: read_connect(); break;
        case 1: creatzom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: MakeSunOnScene(); break;
        case 3: MoveAllSuns(); break;
        case 4: check(); break;
        case 5: planting(); break;
        case 6: on_walnutB_clicked(); break;
        case 7: on_peashooterB_clicked(); break;
        case 8: on_sunflowerB_clicked(); break;
=======
        case 0: creatzom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: MakeSunOnScene(); break;
        case 2: MoveAllSuns(); break;
        case 3: check(); break;
        case 4: planting(); break;
        case 5: on_walnutB_clicked(); break;
        case 6: on_peashooterB_clicked(); break;
        case 7: on_sunflowerB_clicked(); break;
>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
