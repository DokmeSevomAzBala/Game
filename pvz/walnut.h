#ifndef WALNUT_H
#define WALNUT_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>


#include <QTimer>
#include <QObject>
#include "plant"

class walnut :public plant
{
    int cost;
    int life_time;
    Q_OBJECT
    QTimer *MakewalnutTimer;

public:
    walnut();



};

#endif // WALNUT_H
