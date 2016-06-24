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
    bool IfPeashooterISIn[9][5];
    bool IfZombieIsIn[9][5];
    void GridPoint(QMouseEvent*);
    static qreal retX(){return X;}
    int retI();
    int retJ();
    static qreal retY(){return Y;}
public slots:

signals:
    void click();

};
#endif // GAMESCREEN

