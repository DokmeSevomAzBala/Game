#include "walnut.h"

/*
 * @descr constructor of class
 * @param nothing
 * @return nothing
 */
walnut::walnut()
{
    life_time = 25;
    cost = 30;
    seeding_time = 50;
    QPixmap m(":/new/images/images/Walnut.png");
    PlantPic = m;
    setPixmap(PlantPic);
}

