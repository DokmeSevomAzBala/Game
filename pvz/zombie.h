#ifndef ZOMBIE_H
#define ZOMBIE_H
//#include <QPixmap>
#include <QGraphicsPixmapItem>
class zombie:public QObject,public QGraphicsPixmapItem
{
    int Xpos;
    int Ypos;
    int power;  //how many bullet will kill zombie
   // QPixmap ZombiePic;

public:
    zombie();
    public slots:
    void walk();
};

#endif // ZOMBIE_H
