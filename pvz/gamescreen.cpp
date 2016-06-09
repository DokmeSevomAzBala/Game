#include "gamescreen.h"

GameScreen::GameScreen(QWidget *parent) :
    QGraphicsView(parent)
{
    int x[] = {250,335,420,505,590,675,760,845,930};
    int y[] = {80,180,280,380,480};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            grid[i][j] = QPoint(x[i],y[j]);
        }
    }

    setMouseTracking(true);
}

GameScreen::~GameScreen()
{

}

bool GameScreen::rectAvailable()
{
    QGraphicsRectItem *collisionRect = new QGraphicsRectItem(currentGridPoint.x(),currentGridPoint.y(),85,100);
    QList<QGraphicsItem *> list = scene()->collidingItems(collisionRect);
    for (int i = 0; i < list.size(); i++)
    {
        plant *item = dynamic_cast<plant *>(list[i]);
        if (item)
        {
            delete collisionRect;
            return false;
        }
    }

    delete collisionRect;
    return true;
}

//bool GameScreen::peaShooterRect()
//{
//    QGraphicsRectItem *collisionRect = new QGraphicsRectItem(currentGridPoint.x(),currentGridPoint.y(),85,100);
//    QList<QGraphicsItem *> list = scene()->collidingItems(collisionRect);

//    for (int i = 0; i < list.size(); i++)
//    {
//        peashooter *item = dynamic_cast<peashooter *>(list.at(i));
//        if (item)
//        {
//            delete item;
//            delete collisionRect;
//            return true;
//        }
//    }

//    delete collisionRect;
//    return false;
//}

void GameScreen::mousePressEvent(QMouseEvent *e)
{
    QGraphicsView::mousePressEvent(e);
    getGridPoint(e);
    click();
}

QPoint GameScreen::getGridPoint(QMouseEvent *e)
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (e->x() >= grid[i][j].x() && e->x() < grid[i+1][j].x() && e->y() >= grid[i][j].y() && e->y() < grid[i][j+1].y())
            {
                currentGridPoint = grid[i][j];
                return grid[i][j];
            }
        }
    }
    return QPoint(0,0);
}
