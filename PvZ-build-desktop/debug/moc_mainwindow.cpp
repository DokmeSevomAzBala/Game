/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
<<<<<<< HEAD
** Created: Wed Jun 22 14:41:29 2016
=======
** Created: Wed Jun 22 13:08:27 2016
>>>>>>> b0d766d7af0ba506c9839c167dd0c081f1e3b3f4
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
<<<<<<< HEAD
       6,   14, // methods
=======
       8,   14, // methods
>>>>>>> b0d766d7af0ba506c9839c167dd0c081f1e3b3f4
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
<<<<<<< HEAD
      42,   11,   11,   11, 0x0a,
      59,   11,   11,   11, 0x0a,
      73,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
=======
      23,   11,   11,   11, 0x0a,
      40,   11,   11,   11, 0x0a,
      62,   11,   11,   11, 0x0a,
      76,   11,   11,   11, 0x08,
      94,   11,   11,   11, 0x08,
     116,   11,   11,   11, 0x08,
     124,   11,   11,   11, 0x08,
>>>>>>> b0d766d7af0ba506c9839c167dd0c081f1e3b3f4

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
<<<<<<< HEAD
    "MainWindow\0\0mousePressEvent(QMouseEvent*)\0"
    "MakeSunOnScene()\0MoveAllSuns()\0"
    "planting_sunflower()\0planting_peashooter()\0"
    "check()\0"
=======
    "MainWindow\0\0make_pea()\0MakeSunOnScene()\0"
    "MakeSunForSunFlower()\0MoveAllSuns()\0"
    "planting_walnut()\0planting_peashooter()\0"
    "check()\0on_SunflowerButton_clicked()\0"
>>>>>>> b0d766d7af0ba506c9839c167dd0c081f1e3b3f4
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
        case 0: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: MakeSunOnScene(); break;
<<<<<<< HEAD
        case 2: MoveAllSuns(); break;
        case 3: planting_sunflower(); break;
        case 4: planting_peashooter(); break;
        case 5: check(); break;
        default: ;
        }
        _id -= 6;
=======
        case 2: MakeSunForSunFlower(); break;
        case 3: MoveAllSuns(); break;
        case 4: planting_walnut(); break;
        case 5: planting_peashooter(); break;
        case 6: check(); break;
        case 7: on_SunflowerButton_clicked(); break;
        default: ;
        }
        _id -= 8;
>>>>>>> b0d766d7af0ba506c9839c167dd0c081f1e3b3f4
    }
    return _id;
}
QT_END_MOC_NAMESPACE
