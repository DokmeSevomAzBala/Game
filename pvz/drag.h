#ifndef DRAG_H
#define DRAG_H
#include <QGraphicsPathItem>
#include <QPushButton>
#include <QGraphicsSceneEvent>
#include <QDebug>

class drag :public QGraphicsPathItem//////////////////////////????????????????????
{
public:
    drag();

    void mousePressEvent(QGraphicsSceneMouseEvent *);
};

#endif // DRAG_H
