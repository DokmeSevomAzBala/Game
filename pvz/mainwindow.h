#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sunflower.h"
#include <QMainWindow>
#include <QGraphicsScene>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QGraphicsScene *scene;
    sunflower *sf;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
