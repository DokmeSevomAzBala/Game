#ifndef PLANT_H
#define PLANT_H
#include <QGraphicsItem>
#include <QPixmap>
#include <QPainter>
class plant : public QGraphicsItem
{
public:
    int cost;           //how much we should pay to plant it?
    int seeding_time;   //how much time should pass that we can plant another one again
    float life_time;    //from the time that zombie encounter this plant, how mnay seconds should pass to die?
    int Xpos;
    int Ypos;
    QPixmap PlantPic;

    plant();
    ~plant();
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    QRectF boundingRect() const;
    void advance(int);


};


#endif // PLANT_H
