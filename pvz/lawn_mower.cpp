#include <QGraphicsScene>
#include "lawn_mower.h"

lawn_mower::lawn_mower()
{

    QPixmap m(":/new/images/images/Lawn_Mower");
    setPixmap(m);


}
void lawn_mower::move_lawn()
{
    //creat a lawn
    lawn_mower* lawn1;
    lawn1 = new lawn_mower();
    scene()->addItem(lawn1);
}

//pea* p1;
//p1=new pea();
//w->scene->addItem(p1);
//p1->setPos(this->Xpos+70,this->Ypos);
//p1->move_p(Xpos+70,Ypos);
