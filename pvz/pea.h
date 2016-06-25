#ifndef PEA_H
#define PEA_H
#include <QPixmap>
#include <iostream>
#include <QTimer>
#include <QPainter>
#include <QObject>
#include <QDebug>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <QGraphicsPixmapItem>
#include <QDebug>
#include <QEventLoop>
#include <QTime>
#include <QCoreApplication>
using namespace std;

class pea:public QObject , public QGraphicsPixmapItem
{
     //Q_OS_WIN
    Q_OBJECT
    friend class peashooter;
private:

 QPixmap P;
public:
void delay( int);
    pea();
    ~pea();
 //void move_p(int,int);
public slots:
   void move_p();
};

#endif // PEA_H
