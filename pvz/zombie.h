#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include <QObject>
#include <QGraphicsItem>
#include <QTimer>
#include <QDebug>
#include <typeinfo>
#include "sun.h"
#include "plant.h"
#include "peashooter.h"
#include "sunflower.h"

class zombie:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    int Xpos;
    int Ypos;
    int power;  //how many bullet will kill zombie
    //QPixmap ZomPic;
    QTimer *move;
public:
    zombie(QGraphicsItem *parent = 0);
    ~zombie();

public slots:
    void walk();
};

#endif // ZOMBIE_H
