#ifndef SUNFLOWER_H
#define SUNFLOWER_H

#include "plant.h"
#include "sun.h"

class sunflower : public plant
{
public:
    sunflower();
public slots:
    void makeSun();
};

#endif // SUNFLOWER_H
