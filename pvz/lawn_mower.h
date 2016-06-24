#ifndef LAWN_MOWER_H
#define LAWN_MOWER_H

#include "plant.h"
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include <QDebug>
#include <QObject>
#include <QGraphicsItem>


class lawn_mower:public plant
{
    Q_OBJECT
//    int cost;
//    int life_time;
//    int seeding_time;
public:
    lawn_mower();
};

#endif // LAWN_MOWER_H
