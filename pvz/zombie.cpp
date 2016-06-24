#include "zombie.h"
GameScreen* zombie::gsp;
zombie::zombie(qreal i,qreal j,QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/zombie"));
   power=10;
   move=new QTimer;
   move->start(25);
   gsp = new GameScreen();
   connect (move,SIGNAL(timeout()),this,SLOT(walk()));
   //int i=qrand()%5;
   //setPos(700,i*100+50);
   setPos(i,j);
   gsp->setX(250);
   setY(j);
}

zombie::~zombie()
{

}

int zombie::retJz()
{
    qDebug() << get_y();
    if (get_y() == 65) return 0;
    else if (get_y() == 190) return 1;
    else if (get_y() == 310) return 2;
    else if (get_y() == 430) return 3;
    else if (get_y() == 540) return 4;
}

QVector<zombie*> zombie::lvlStart(QStringList lev)
{
    //zombie* zz;
    QVector <zombie*> zomz;
    qreal i,j;
    int n;
    for(n=1;n<lev.size();n++){
        i=lev.at(n).split(",").at(0).toInt();
  //      qDebug()<<lev.at(n).split(",").size();
        j=lev.at(n).split(",").at(1).toInt();
        zombie* zz=new zombie(i,j);
        //gsp->IfZombieIsIn[0][zz->retJz()] = 1;
        zomz.push_back(zz);
    }
    return zomz;


}

void zombie::setY(qreal h)
{
    Ypos = h+30;
}

void zombie::walk()
{

    QList<QGraphicsItem *> colliding_items = collidingItems();
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
        setPos(x()-1 ,y());
     }
}
