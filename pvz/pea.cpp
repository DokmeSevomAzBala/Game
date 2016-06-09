#include "pea.h"
#include <QGraphicsView>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>

pea::pea()
{
    accident=0;
    QPixmap pixmap(":/new/images/images/Giant_Pea.png");
    P=pixmap;
    setPixmap(P);
    accident=0;
}
float pea::width()
{
    return P.width();///////////////
}
void pea::move_p()
{
//this->setPos(p_x+400,p_y);

}
QPixmap pea::ret_pix()
{
   return P;
}
void pea::set_x_y(int x,int y)
{
    this->setPos(x,y);
}

pea::~pea(){};

