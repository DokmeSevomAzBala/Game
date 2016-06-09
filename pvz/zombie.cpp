#include "zombie.h"
#include "sun.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/Zombies_1.gif"));
   power=10;
   move=new QTimer;
   move->start(3);
   connect (move,SIGNAL(timeout()),this,SLOT(walk()));

}

void zombie::walk()
{
    setPos(x()-0.1 ,y());

    QList<QGraphicsItem *> colliding_items = collidingItems();
    QList<plant *>collid;
    int k=0;
     for (int i = 0, n = colliding_items.size(); i < n; ++i){
    if(typeid(*(colliding_items[i])) == typeid(plant)){
    collid[k]=(plant*)colliding_items[i];
    k++;
    }
     }
     if(!collid.empty())
     move->stop();
    for (int i = 0, n = collid.size(); i < n; ++i){
        //disconnect (move,SIGNAL(timeout()),this,SLOT(walk()));
        move->stop();
        move->start(5000);
        connect(move,SIGNAL(timeout()),collid[i],SLOT (die()));


    }


}

