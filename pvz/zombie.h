#ifndef ZOMBIE_H
#define ZOMBIE_H
//#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QPainter>
#include <QObject>

class zombie:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    int Xpos;
    int Ypos;
    int power;  //how many bullet will kill zombie
    QPixmap ZomPic;

public:
    zombie(QGraphicsItem *parent = 0);
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    QRectF boundingRect() const;
     ~zombie();
public slots:
    void walk();

};

#endif // ZOMBIE_H
