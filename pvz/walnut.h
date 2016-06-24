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
//    int cost;           //how much we should pay to plant it?
//    int seeding_time;   //how much time should pass that we can plant another one again
//    float life_time;    //from the time that zombie encounter this plant, how mnay seconds should pass to die?
//    int Xpos;
//    int Ypos;
//    QPixmap PlantPic;
//    void Place(QPoint);
    Q_OBJECT
//    int Xpos;
//    int Ypos;
    //int cost;
   //// int life_time;
   // int seeding_time;

public:
    walnut();
  //  ~walnut();
    //void paint(QPainter *painter,const QStyleOptionGraphicsItem *, QWidget *);
   // void setLife(int);
public slots:
    //void onPlant();
};

#endif // WALLNUT_H
