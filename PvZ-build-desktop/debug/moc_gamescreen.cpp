/****************************************************************************
** Meta object code from reading C++ file 'gamescreen.h'
**
<<<<<<< HEAD
** Created: Sun Jun 26 13:26:08 2016
=======
** Created: Sat Jun 25 20:03:27 2016
>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pvz/gamescreen.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GameScreen[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      20,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_GameScreen[] = {
    "GameScreen\0\0click()\0create()\0"
};

const QMetaObject GameScreen::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_GameScreen,
      qt_meta_data_GameScreen, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GameScreen::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GameScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GameScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GameScreen))
        return static_cast<void*>(const_cast< GameScreen*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int GameScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: click(); break;
        case 1: create(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void GameScreen::click()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GameScreen::create()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
