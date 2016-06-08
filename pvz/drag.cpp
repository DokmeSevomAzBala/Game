#include "drag.h"

drag::drag()
{
}
void drag::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
       qDebug()<<"in musubclass mouse press event: ";

    }
}
