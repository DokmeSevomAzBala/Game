#include "zombie.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/zombie"));
   power=10;
   move=new QTimer;
   move->start(3);
   connect (move,SIGNAL(timeout()),this,SLOT(walk()));

}

void zombie::walk()
{
    //setPos(x()-0.1 ,y());

    QList<QGraphicsItem *> colliding_items = collidingItems();
    QList<plant *>collid;
    int k=0;
     for (int i = 0, n = colliding_items.size(); i < n; ++i){
    if(typeid(*(colliding_items[i])) == typeid(peashooter) ||typeid(*(colliding_items[i])) == typeid(sunflower) ){
    collid.insert(k,(plant*)colliding_items[i]);
    k++;
    }
    }

     if(!collid.empty()){
       //  disconnect (move,SIGNAL(timeout()),this,SLOT(walk()));
     for (int i = 0, n = collid.size(); i < n; ++i){
        //disconnect (move,SIGNAL(timeout()),this,SLOT(walk()));
     //   move->stop();
         qDebug()<<"yess!";
       collid[i]->die();
     }
     }else{
         qDebug()<<"moved";
         setPos(x()-0.1 ,y());
     }

     }





