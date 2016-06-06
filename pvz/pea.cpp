#include "pea.h"

pea::pea()
{
    accident=0;
    QPixmap pixmap(":/new/images/images/Giant_Pea.png");
    pixmap.scaled(p_x,p_y);
    this->P=pixmap;
   // this->scaled(p_x,p_y);///////////////////////////////////////////////////???????????????
}
float pea::width()
{
    return P.width();///////////////
}
void pea::move_p()
{
    p_x+=20;

}
pea::~pea(){};

