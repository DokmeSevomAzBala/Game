#include "timerthread.h"

timerThread::timerThread(QObject *parent) :
    QThread(parent)
{
}
void  timerThread::run(int mytime){
    thr =new QTimer();
    thr->setInterval(mytime);
     connect(thr,SIGNAL(timeout()),this,SLOT(myslot()));
     thr->start(mytime);
//    thr->setInterval(mytime);
//    thr->moveToThread(this);
//    // emit mysignal();

};
void timerThread::myslot()
{
    emit mysignal();
}
