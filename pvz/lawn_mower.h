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
#include "timerThread.h"


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
