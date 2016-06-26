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
#include <QTcpSocket>
#include <QThread>
#include <QMediaPlayer>
#include "timerthread.h"

#include <QSet>

namespace Ui {
class MainWindow;
}
/*
 * this class will control all the events in the game
 * all the functions are important
 */
class MainWindow : public QMainWindow
{
    QMediaPlayer* player;
    Q_OBJECT
    Ui::MainWindow *ui;
    //qreal x_mouse;
    //qreal y_mouse;
    QGraphicsTextItem* sunScore;
    sunflower *sunfl;
    QTimer *t1;
    QTimer *t2;
    QSet <sun*> SunVec;
    walnut* wl;
    lawn_mower* lawn;
    peashooter* pshr;
    static GameScreen* gs;          //gs is static object of gamescreen,
                                   //it's the object that we click on it

    lawn_mower* LMs[5];
    QString ThePlantingPlant;
    QSet<zombie*> zombieset;
    sun *s;
    QTimer* createSunTimer;
    QTimer* advanceTimer;
public:
    QString retPlantType();
    QString str;
    QTcpSocket *socket;

    static bool IfZombieIsInW[5];
    score *MyScore;
    void screen(qreal,qreal);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QGraphicsScene *scene;

public slots:
    //void read_connect();
    void creatzom(int);
    void IfZombieAndPeashooterAreInSameRaw(peashooter*);        //if they are in same row,
                                                                //peashooter should make pea
private slots:
    void UpdateScore();
    void createSun();
    void check();
    void planting();
    void on_walnutB_clicked();

    void on_peashooterB_clicked();

    void on_sunflowerB_clicked();

signals:
    //void start();

private slots:
    //void read_message();
    void disconnect();
    void f();
private:
    //  QTcpSocket *mysocket;
      QString myuser;
    //  QString myreceivedData;
      void updateGui(QAbstractSocket::SocketState state);


//signals:
//    void click();
};

#endif // MAINWINDOW_H
