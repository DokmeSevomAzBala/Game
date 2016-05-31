#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sunflower.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QVector>
#include <QGraphicsView>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QGraphicsScene *scene;
    QGraphicsView *graphicsView;
    sunflower *sunfl;
    QTimer *t1;
    QVector <sun*> SunVec;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
public slots:
    void MakeSun();
};

#endif // MAINWINDOW_H
