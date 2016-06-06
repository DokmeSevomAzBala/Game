#include "plant.h"
#include "pea.h"
#include <QTimer>
#ifndef PEASHOOTER_H
#define PEASHOOTER_H

class peashooter: public plant
{
    Q_OBJECT
 friend class pea;
public:
 void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    peashooter();
public slots:
    void make_pea();
//signals:
 // void timeout(pea*);
};

#endif // PEASHOOTER_H
