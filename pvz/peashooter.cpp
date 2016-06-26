#include "peashooter.h"
#include "zombie.h"
//#include "mainwindow.h"
#include <QGraphicsScene>
//extern MainWindow *w;
bool peashooter::IfPeashooter[5];
bool peashooter::MakePea[5];
peashooter::peashooter()
{

    cost = 100;
    seeding_time = 10;
    life_time = 20;
    peaTimer = new QTime;
    peaTimer->start();
     PlantPic= new QPixmap(":/new/images/images/PeaShooter.png");
     setPixmap(*PlantPic);

}
void peashooter::make_pea()
{
//    qDebug() <<"LL";
//    p1 = new pea();
//    scene()->addItem(p1);
// p1->setPos(this->x()+70,this->y());
// QTimer * ti = new QTimer();
// ti->start(10);
//connect (ti, SIGNAL(timeout()),p1,SLOT(move_p()));
}


void peashooter::advance(int phase)
{
    if (!phase) return;
    if (peaTimer->elapsed() >= 1000 && MakePea[gsp->retJ()] == 1)
    {
        p1 = new pea();  // Create new bullet.
        scene()->addItem(p1);   // Add bullet to scene.
        p1->setPos(this->x()+70,this->y());
        peaTimer->restart();   // Restart shooting interval.
        return;                     // Only shoot first zombie.
    }
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
