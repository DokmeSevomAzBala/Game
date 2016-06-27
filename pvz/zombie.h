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
//#include "gamescreen.h"
#include "peashooter.h"
#include "sunflower.h"
#include "lawn_mower.h"
#include "walnut.h"
/*
 *this class will make zambie and the zombie can move
 */
class zombie:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    QTimer* move;
    qreal Xpos;
    qreal Ypos;
    int power;  //how many bullet will kill zombie
    //QPixmap ZomPic;

public:
    zombie(qreal i=0, qreal j=0, QGraphicsItem *parent = 0);
    ~zombie();
    int retJz();
    static QVector<zombie *> lvlStart(QStringList lev);
    qreal get_x(){return Xpos;}
    qreal get_y(){return Ypos;}
    void setY(qreal h);
    //static GameScreen* gsp;

public slots:
    void walk();
};

#endif // ZOMBIE_H
