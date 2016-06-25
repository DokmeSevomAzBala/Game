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


class lawn_mower:public plant
{
    Q_OBJECT

public:
    lawn_mower();
    void move_lawn();
};

#endif // LAWN_MOWER_H
