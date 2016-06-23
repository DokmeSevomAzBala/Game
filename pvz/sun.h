#ifndef SUN_H
#define SUN_H
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QPainter>
#include <QObject>
#include <QWidget>
class sun : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    bool Falling;
    static int SunScore;
    sun(QGraphicsItem *parent = 0);
    void mousePressEvent ( QGraphicsSceneMouseEvent * event);
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    QRectF boundingRect() const;
    void advance(int);
    ~sun();
public slots:
    void move_sun();
    void DeleteSun();

};



#endif // SUN_H
