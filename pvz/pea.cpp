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

   P = new QPixmap (":/new/images/images/Giant_Pea.png");
   setPixmap(*P);

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
void pea::advance(int phase){
    if (!phase) return;
    move_p();
}

void pea::DeletePea()
{
    delete P;
    scene()->removeItem(this);
}
