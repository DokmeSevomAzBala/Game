#include "zombie.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/Zombies_1.gif"));
   Xpos=100;
   Ypos=150;
   power=10;

}



void zombie::walk()
{


}

zombie::~zombie(){


}
