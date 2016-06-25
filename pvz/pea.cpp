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
//    p_x=a;
//    p_y=b;
//    while(p_x<1000){
//        this->delay(500);
//      p_x=p_x+15;
//      this->setPos(p_x,p_y);

//   }
    //this->~pea();

}
void pea::delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}


pea::~pea(){}

