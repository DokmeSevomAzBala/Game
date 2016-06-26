
#ifndef SUN_H
#define SUN_H
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsItem>
#include <QMouseEvent>
#include <QPainter>
#include <QObject>
#include <QWidget>
#include <QTimer>
#include <QGraphicsScene>

class sun : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
    QPixmap *pix;     // Holds image.
    qreal xPos;               // Holds falling sun's x-position (random).
    qreal yEndPos;
    QTime *destroySunTimer;    // Destroy sunflower sun every 7.5s.

public:
    static bool clicked;
    void SetSunPoint(int k){sunPoints += k;}
    int GetSunPoint(){return sunPoints;}
    static int sunPoints;
    bool pressed;
    bool sunType;
    QTimer * DeletSunTimer;
    //static int SunScore;
    //sun(QGraphicsItem *parent = 0);
    sun();                  // Sun type 1 (falling sun).
    sun(QPoint point);      // Sun type 2 (sunflower sun).
    void mousePressEvent ( QGraphicsSceneMouseEvent * event);
    void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *);
    QRectF boundingRect() const;
    void advance(int phase);
    ~sun();
public slots:
    void move_sun();
    void DeleteSun();

};



#endif // SUN_H
