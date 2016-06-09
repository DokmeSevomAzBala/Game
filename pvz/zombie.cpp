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
<<<<<<< HEAD
void zombie::walk()
{
}
=======

<<<<<<< HEAD
void zombie::walk()
{
    setPos(x()-0.1 ,y());
=======

<<<<<<< HEAD

void zombie::walk()
{

=======
void zombie::walk()
{
>>>>>>> 4f2f156444eb394623d4b5ee6466d80b76a35669
>>>>>>> 9f8d83c30750237ac974a871eacfc1759b3f1ce4

    QList<QGraphicsItem *> colliding_items = collidingItems();
    QList<plant *>collid;
     for (int i = 0, n = colliding_items.size(); i < n; ++i){
    if(typeid(*(colliding_items[i])) == typeid(plant)){
    collid[i]=colliding_items[i];
    }
    for (int i = 0, n = collid.size(); i < n; ++i){
        //disconnect (move,SIGNAL(timeout()),this,SLOT(walk()));
        move->stop();
        move->start(5000);
        connect(move,SIGNAL(timeout()),(*(colliding_items[i])),SLOT (die()));
>>>>>>> c277f2d26e255fb0b7eba24f99fbea3f12b17981

    }


}

