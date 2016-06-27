#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "gamescreen.h"
#include "sunflower.h"
#include "zombie.h"
#include "lawn_mower.h"
#include "pea.h"
#include "lawn_mower.h"
#include "walnut.h"
#include "peashooter.h"
#include "score.h"
#include "level.h"
#include <QPushButton>
#include <QMainWindow>
#include <QIcon>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <QTimer>
#include <QVector>
#include <QTcpSocket>
#include <QGraphicsView>
#include <QWidget>
#include <QMouseEvent>
#include <QString>
#include <QThread>
namespace Ui {
class MainWindow;
}
/*
 * this class will control all the events in the game
 * all the functions are important
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    Ui::MainWindow *ui;
    qreal x_mouse;
    qreal y_mouse;
    QGraphicsView *View;
    QGraphicsView *graphicsView;
    sunflower *sunfl;
    QTimer *t1;
    QTimer *t2;
    QVector <sun*> SunVec;
    walnut* wl;
    lawn_mower* lawn;
    peashooter* pshr;
    static GameScreen* gs;
    void IfZombieAndPeashooterAreInSameRaw(peashooter*);
    lawn_mower* LMs[5];
    QString ThePlantingPlant;
public:
//    QString str;
//    QTcpSocket *socket;
    static bool IfZombieIsInW[5];
    score *MyScore;
    void screen(qreal,qreal);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene *scene;

public slots:
    //void read_connect();
    void creatzom(int);
    void MakeSunOnScene();
    void MoveAllSuns();
private slots:
  //  void planting_lawn_mower();
    void check();
    void planting();
    void on_walnutB_clicked();

    void on_peashooterB_clicked();

    void on_sunflowerB_clicked();

//signals:
//    void click();
};

#endif // MAINWINDOW_H
