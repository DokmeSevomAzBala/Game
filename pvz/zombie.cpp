#include "zombie.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/Zombies_1.gif"));
   Xpos=100;
   Ypos=150;
   power=10;

}

<<<<<<< HEAD

//QRectF zombie::boundingRect() const
//{
//    return QRectF(0,0,80,80);   // Set boundingRect() to image size.
//}

//void zombie::paint(QPainter *painter, const QStyleOptionGraphicsItem * , QWidget *)
//{
//    painter->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
//}
zombie::~zombie(){

=======
void zombie::walk()
{
>>>>>>> 42fd64c7569d50bc50047128c0f0829581196887

}

zombie::~zombie(){


}
