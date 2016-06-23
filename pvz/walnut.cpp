#include "walnut.h"

walnut::walnut()
{

    life_time = 25;
    cost = 30;
    seeding_time = 50;

    QPixmap m(":/new/images/images/Walnut.png");
    PlantPic = m;
    setPixmap(PlantPic);

}

