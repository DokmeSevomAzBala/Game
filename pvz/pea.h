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
/*
 * this class will make the peas
 */
class pea:public QObject , public QGraphicsPixmapItem
{
     //Q_OS_WIN
    Q_OBJECT
    friend class peashooter;
private:

 QPixmap *P;
 //int p_x;
   //int p_y;
    void advance (int phase);

public:
    void DeletePea();
    void delay(int);
    pea();
    ~pea();
 //void move_p(int,int);
public slots:
   void move_p();
};

#endif // PEA_H
