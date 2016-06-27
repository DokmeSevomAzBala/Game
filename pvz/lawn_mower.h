#ifndef LAWN_MOWER_H
#define LAWN_MOWER_H
#include "plant.h"
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsScene>
#include <QPainter>
#include <QDebug>
#include <QObject>
#include <QGraphicsItem>
<<<<<<< HEAD
/*
 * this class will move the lawnmower
 */
=======
#include "timerThread.h"


>>>>>>> 1a0058f86f68060bf216e51c4e8fcccf33f2929c
class lawn_mower: public plant
{
   Q_OBJECT
public:
    lawn_mower();
    ~lawn_mower();
    void move_lawn();

public slots:
    void movinglawn();

};

#endif // LAWN_MOWER_H
