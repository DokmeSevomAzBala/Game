#include "zombie.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/zombie"));
   power=10;
   move=new QTimer;
   move->start(3);
   connect (move,SIGNAL(timeout()),this,SLOT(walk()));
   int i=qrand()%5;
   setPos(700,i*100+50);


}

zombie::~zombie()
{

}

void zombie::walk()
{

    QList<QGraphicsItem *> colliding_items = collidingItems();
//    QList<plant *>collidplant;
    bool k=false;
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if(typeid(*(colliding_items[i])) == typeid(peashooter) ||typeid(*(colliding_items[i])) == typeid(sunflower) ||typeid(*(colliding_items[i])) == typeid(walnut) ){

            ((plant*)colliding_items[i])->die();
            k=true;
        }
        else if(typeid(*(colliding_items[i])) == typeid(pea) ){
            ((pea*)colliding_items[i])->~pea();
            power--;
            if(power<=0)
                this->~zombie();
        }

        else if (typeid(*(colliding_items[i])) == typeid(lawn_mower)){
            ((lawn_mower*)colliding_items[i])->move_lawn();
            this->~zombie();
        }
    }
    if(k==false){
        //qDebug()<<"moved";
        setPos(x()-1 ,y());
     }
}
