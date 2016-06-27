#include "peashooter.h"
#include "zombie.h"
#include "mainwindow.h"
#include <QGraphicsScene>
//extern MainWindow *w;

/*
 * @descr constructor of the cass
 * @param nothing
 * @return nothing
 */
peashooter::peashooter()
{
    cost = 100;
    seeding_time = 10;
    life_time = 20;
    QPixmap m(":/new/images/images/PeaShooter.png");
  PlantPic=m;
  setPixmap(PlantPic);
}
/*
 * @descr makes pea
 * @param nothing
 * @return nothing
 */
void peashooter::make_pea()
{
 pea* p1;
 p1=new pea();
 scene()->addItem(p1);
 p1->setPos(this->x()+70,this->y());
 //p1->move_p();
 QTimer * ti = new QTimer();
 ti->start(10);
connect (ti, SIGNAL(timeout()),p1,SLOT(move_p()));//after making pea this connect will move peas
}

//void peashooter::IfZombieAndPeashooterAreInSameRaw()
//{

//    for (int i = 0 ; i < 9 ; i++){
//        for (int j = 0; j < 5 ; j++){
//            if (gsp->IfPeashooterISIn[i][j] == 1 ){
//                qDebug()<<gsp->retJ();
//                    qDebug()<<gsp->IfZombieIsIn[0][gsp->retJ()];
//            }
//            for (int k = 0 ; k < 5 ; k++){
//                if(gsp->IfZombieIsIn[0][k] == 1){
//                    qDebug() <<"fdsafdsfdagffssdfg";
//                    this->make_pea();
//                }

//            }
//        }
//    }
//}

////////////////////////////
