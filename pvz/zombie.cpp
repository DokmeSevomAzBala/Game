#include "zombie.h"
/*
 * @descr constructor of class
 * @param qreal,QGraphicsIem
 * @return nothing
 */
QTimer * zombie::move=new QTimer;

QSet<zombie*> zombie::zombieset;
int zombie::countInRow[5];

void zombie::moverstart()
{
    move->start(2);

}


zombie::zombie(qreal i,qreal j,QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/zombie"));
   power=5;
   connect (move,SIGNAL(timeout()),this,SLOT(walk()));
   setPos(i,j);
   setY(j);
   countInRow[retJz()]++;
   ps = new peashooter();
}

/*
 * @descr destructor of class
 * @param nothing
 * @return nothing
 */
zombie::~zombie()
{

    countInRow[retJz()]--;
    if ( retJz() == 1)
    qDebug() <<retJz()<<"SSS"<<countInRow[retJz()];
    zombieset.remove(this);
    if(zombieset.empty()){
        qDebug()<<"win!!";
    }

}

int zombie::retJz()
{
    //qDebug() << get_y();
    if (get_y() == 65) return 0;
    else if (get_y() == 190) return 1;
    else if (get_y() == 310) return 2;
    else if (get_y() == 430) return 3;
    else if (get_y() == 540) return 4;
}
/*
 * @descr
 * @param QStringList
 * @return vector <zombie*>
 */
//QVector<zombie*> zombie::lvlStart(QStringList lev)


QSet<zombie*> zombie::lvlStart(QStringList lev)
{
    zombie* zz;
    qreal i,j;
    int n;
    for(n=1;n<lev.size();n++){
        i=lev.at(n).split(",").at(0).toInt();
  //      qDebug()<<lev.at(n).split(",").size();
        j=lev.at(n).split(",").at(1).toInt();
        zz=new zombie(i,j);
        zombieset.insert(zz);
        //gsp->IfZombieIsIn[0][zz->retJz()] = 1;
    }
    return zombieset;
}
/*
 * @descr set y position
 * @param qreal
 * @return nothing
 */
void zombie::setY(qreal h)
{
    Ypos = h+30;
}
/*
 * @descr walking zombie
 * @param nothing
 * @return nothing
 */
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
            ((pea*)colliding_items[i])->DeletePea();
            power--;
            if(power <= 0)
                this->~zombie();
        }

        else if (typeid(*(colliding_items[i])) == typeid(lawn_mower)){
            ((lawn_mower*)colliding_items[i])->move_lawn();
            this->~zombie();
        }
    }
    if(k==false){
        setPos(x()-1 ,y());
        Xpos--;
        if(Xpos<20){
            qDebug()<<"lost";


        }
     }
}


void zombie::advance(int phase)
{
    if (!phase) return;
    for (int i=0 ; i < 5 ; i++){

        if (ps->peaTimer->elapsed() >= 1000 && countInRow[i] > 0 && ps->IfPeashooter[i]==1)
        {
            ps->MakePea[i] = 1;

        }
        else if(countInRow[i] == 0) {
            ps->MakePea[i] = 0;
        }
    }

}
