#ifndef ZOMBIE_H
#define ZOMBIE_H
//#include <QPixmap>
#include <QPainter>
#include <QGraphicsPixmapItem>
class zombie:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    int Xpos;
    int Ypos;
    int power;  //how many bullet will kill zombie
   // QPixmap ZombiePic;

public:
    zombie(QGraphicsItem *parent = 0);
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
        void walk();
        QRectF boundingRect() const;
        void advance(int);
};

#endif // ZOMBIE_H
