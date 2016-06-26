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
/*
 * this class will move the lawnmower
 */

#include "timerThread.h"


class lawn_mower:public QObject , public QGraphicsPixmapItem

{
   Q_OBJECT
public:
    lawn_mower(QGraphicsItem *parent = 0);
    ~lawn_mower();
    void move_lawn();

public slots:
    void movinglawn();

};

#endif // LAWN_MOWER_H
