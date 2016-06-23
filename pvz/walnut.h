#ifndef WALLNUT_H
#define WALLNUT_H

#include "plant.h"
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include <QDebug>
#include <QObject>
#include <QGraphicsItem>


class walnut :public plant
{
    Q_OBJECT
//    int Xpos;
//    int Ypos;
    int cost;
    int life_time;
    int seeding_time;

public:
    walnut();
  //  ~walnut();
    //void paint(QPainter *painter,const QStyleOptionGraphicsItem *, QWidget *);
   // void setLife(int);
public slots:
    //void onPlant();
};

#endif // WALLNUT_H
