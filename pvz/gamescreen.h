#ifndef GAMESCREEN
#define GAMESCREEN
#include <QPoint>
#include <QGraphicsView>
#include <QObject>
#include <QMouseEvent>

class GameScreen : public QGraphicsView
{
    Q_OBJECT
    qreal X;
    qreal Y;
public:
    explicit GameScreen(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent*);
    //GameScreen();
    QPoint grid[9][5];
    bool IfGridIsFull[9][5];
    void GridPoint(QMouseEvent*);
    qreal retX(){return X;}
    int retI();
    int retJ();
    qreal retY(){return Y;}
public slots:

signals:
    void click();

};
#endif // GAMESCREEN

