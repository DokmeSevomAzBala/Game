#ifndef GAMESCREEN
#define GAMESCREEN
#include <QPoint>
#include <QGraphicsView>
#include <QObject>
#include <QMouseEvent>

class GameScreen : public QGraphicsView
{
    Q_OBJECT
    static qreal X;
    static qreal Y;
public:
    explicit GameScreen(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent*);
    //GameScreen();
    QPoint grid[9][5];
    static bool IfGridIsFull[9][5];
    static bool IfPeashooterISIn[9][5];
    static bool IfZombieIsIn[5];
    void GridPoint(QMouseEvent*);
    static qreal retX(){return X;}
    static qreal retY(){return Y;}
    static void setX(qreal x1){X = x1;}
    static void setY(qreal y1){Y = y1;}
    int retI();
    int retJ();
public slots:

signals:
    void click();

};
#endif // GAMESCREEN

