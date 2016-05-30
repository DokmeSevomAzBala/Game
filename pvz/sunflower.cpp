#include "sunflower.h"

sunflower::sunflower()
{
    cost = 50;
    seeding_time = 10;
    life_time = 15;
    PlantPic = new QPixmap();
    PlantPic->load(":/new/images/images/sunflower");
}

