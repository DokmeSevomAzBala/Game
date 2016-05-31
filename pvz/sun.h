#ifndef SUN_H
#define SUN_H
#include <QGraphicsItem>
#include <QPixmap>
#include <QMouseEvent>
class sun : public QGraphicsItem
{
public:
    static int SunScore;
    QPixmap SunPic;
    sun();
    static void mouseReleaseEvent ( QMouseEvent * event);
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    QRectF boundingRect() const;
    void advance(int);
};

#endif // SUN_H
