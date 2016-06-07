#include "zombie.h"

zombie::zombie(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent)
{
   setPixmap(QPixmap(":/new/images/images/Zombies_1.gif"));
   Xpos=100;
   Ypos=150;
   power=10;

}


<<<<<<< HEAD

void zombie::walk()
{

=======
void zombie::walk()
{
>>>>>>> 4f2f156444eb394623d4b5ee6466d80b76a35669

}

zombie::~zombie(){


}
