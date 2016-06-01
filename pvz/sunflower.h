#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "plant.h"
#include "sun.h"

class sunflower : public plant
{
public:

    sunflower();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);
public slots:
    void makeSun();
};

#endif // SUNFLOWER_H
