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
using namespace std;

class pea:public QObject , public QGraphicsPixmapItem
{
    Q_OBJECT
    friend class peashooter;
private:
 QPixmap P;
 //int accident;
 int p_x;
 int p_y;

public:
 int accident;
//  QRectF boundingRect() const;
// void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
 void set_x_y(int,int );

 QPixmap ret_pix();
    pea();
    float width();
    ~pea();

public slots:
   void move_p();
};

#endif // PEA_H
