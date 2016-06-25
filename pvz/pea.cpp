#include "pea.h"
#include <QGraphicsView>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "mainwindow.h"
#include <QThread>
//extern MainWindow *w;

pea::pea()
{

   QPixmap pixmap(":/new/images/images/Giant_Pea.png");
   P=pixmap;
   setPixmap(P);

}

void pea::move_p()
{

    this->setPos(this->x()+5,this->y());
    if(this->x()>1000)
    this->~pea();


}


pea::~pea(){}

