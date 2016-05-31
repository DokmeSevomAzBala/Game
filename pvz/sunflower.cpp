#include "sunflower.h"
sunflower::sunflower()
{
    cost = 50;
    seeding_time = 10;
    life_time = 15;
    //PlantPic.load(":/new/images/images/Sunflower.png");
    //setPixmap(QPixmap(":/new/images/images/dead"));
    setPixmap(QPixmap(":/new/images/images/Zombies_1"));
}
void sunflower::makeSun(){
    sun s1;
    s1.setX(this->x());
    s1.setY(this->y());

}

