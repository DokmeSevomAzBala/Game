#ifndef GAMESCREEN
#define GAMESCREEN
#include <QPoint>
#include <QGraphicsView>
#include <QObject>
#include <QMouseEvent>
/*
 * this class will balance the plants and zombies and make them in a straight path
 * Example include static bool IfGridIsFull[9][5],static bool IfPeashooterISIn[9][5], static bool IfZombieIsIn[5]
 */
class GameScreen : public QGraphicsView
{
    Q_OBJECT

public:
    static qreal X;
    static qreal Y;
    qreal zomX;
    qreal zomY;
    explicit GameScreen(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent*);
    //GameScreen();
    QPoint grid[9][5];
    static bool IfGridIsFull[9][5];
    static bool IfPeashooterISIn[9][5];
    static bool IfZombieIsIn[5];
    void GridPoint(QMouseEvent*);
     qreal retX(){return X;}
     qreal retY(){return Y;}
    static void setX(qreal x1){X = x1;}
    static void setY(qreal y1){Y = y1;}
    int retI();
    int retJ();
public slots:

signals:
    void click();
    void create();
};
#endif // GAMESCREEN

