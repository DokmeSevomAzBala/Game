#include "peashooter.h"

#include "mainwindow.h"
extern MainWindow *w;

peashooter::peashooter()
{

    cost = 100;
    seeding_time = 10;
    life_time = 10;

    QPixmap m(":/new/images/images/PeaShooter.png");
  PlantPic=m;
  setPixmap(PlantPic);

}
void peashooter::make_pea()
{
 pea* p1;
 p1=new pea();
 w->scene->addItem(p1);
 p1->setPos(this->Xpos+70,this->Ypos);
 p1->move_p(Xpos+70,Ypos);

}


