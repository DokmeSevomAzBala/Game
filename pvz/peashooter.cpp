#include "peashooter.h"

peashooter::peashooter()
{
    cost = 100;
    seeding_time = 10;
    life_time = 10;

    setPixmap(QPixmap(":/new/images/images/PeaShooter.png"));
  // PlantPic->scaled(QSize(50,50),  Qt::KeepAspectRatio);
   //watermark.scaled(QSize(50,50),  Qt::KeepAspectRatio);

}
void peashooter::make_pea()
{
  pea* p1;
  p1=new pea();
  p1->p_x=this->Xpos+2*(p1->width());
  p1->p_y=this->Ypos-4;////////////////////////////////////////////////

  QTimer *moveP=new QTimer();
  connect(moveP,SIGNAL(timeout()),this,SLOT(move_p()));
  emit p1->move_p();
  moveP->start(10);
}
void peashooter::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawPixmap(boundingRect(), this->pixmap(), boundingRect());
}

