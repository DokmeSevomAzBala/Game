#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include <QObject>
#include <QGraphicsItem>


class zombie:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    int Xpos;
    int Ypos;
    int power;  //how many bullet will kill zombie
    //QPixmap ZomPic;

public:
    zombie(QGraphicsItem *parent = 0);
     ~zombie();
public slots:
    void walk();
};

#endif // ZOMBIE_H
