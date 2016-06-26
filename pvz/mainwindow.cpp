#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sun.h"
#include <QPixmap>
#include <QBrush>
#include <QPalette>
#include <QDebug>
#include <QGraphicsPixmapItem>
#include <QMessageBox>
#include <QSound>
#include <QStringList>
//bool  GameScreen::IfGridIsFull[9][5]
qreal x1 = 65;
#include <QTcpSocket>
#include <QStringList>
GameScreen* MainWindow::gs;
bool MainWindow::IfZombieIsInW[5];
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), socket(new QTcpSocket)
{
    QSound::play(":/new/images/images/plants_vs_zombies.wav");
//    player = new QMediaPlayer;
//    player->setMedia(QUrl(":/new/images/images/plants_vs_zombies.wav"));
//    player->setVolume(150);
//    player->play();
    ui->setupUi(this);
    gs = new GameScreen(ui->view);          //gs is a static object of gamesecreen, gamescreen is
                                            //the qgraphicsview that we click on it.
    gs->setFixedSize(ui->view->size());     //fix the size, no need to maximize.
    socket = new QTcpSocket();              //socket is for client and server.
    ThePlantingPlant = "";
    connect(gs,SIGNAL(click()),this,SLOT(planting()));
   connect(socket, SIGNAL(readyRead()),this,SLOT(read_connect()));
   connect(socket,SIGNAL(connected()),this,SLOT(read_connect()));
   connect(socket,SIGNAL(disconnected()),this,SLOT(disconnect()));
   socket->connectToHost("0.0.0.0",12345);

    // Make scene and make dimensions same as graphicsView.
    scene = new QGraphicsScene(gs);
    ui->view->setStyleSheet("background:transparent");
    gs->setStyleSheet("background:transparent");
    gs->setScene(scene);
    gs->show();
    setFixedSize(1000,700);
    Level::loadLevels();
    zombie::moverstart();

    // Validate level file (if it exists or readable).
    if (!Level::validLevelFile())
    {
        QMessageBox::question(this, "Invalid file", "Invalid level file. Cannot run game.", QMessageBox::Ok);
        close();
    }

    scene = new QGraphicsScene(this);
    gs->setScene(scene);
    //scene->setSceneRect(0,0,1031,726);
    QPixmap bkgnd(":/new/images/images/Background1");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    scene->setSceneRect(0,0,1000,700);
    for (int i = 0 ; i < 5 ; i++){
        LMs[i]= new lawn_mower();
        scene->addItem(LMs[i]);
        LMs[i]->setPos(gs->grid[0][i].x()-80,gs->grid[0][i].y()+20);
        IfZombieIsInW[i] = 0;

    }
    timerThread *t1 = new timerThread();

    t1->run(3000);
    createSunTimer = new QTimer;
    connect(createSunTimer, SIGNAL(timeout()), this, SLOT(createSun()));
    createSunTimer->start(5000);
    t1->start();
    advanceTimer = new QTimer;
    connect(advanceTimer, SIGNAL(timeout()), scene, SLOT(advance()));

    advanceTimer->start(10);
    timerThread *t2 = new timerThread();
    t2->run(10);
    t2->start();


    creatzom(Level::level);
    QGraphicsPixmapItem *item = new QGraphicsPixmapItem();
    item->setPixmap(QPixmap(":/new/images/images/score_background_note"));
    scene->addItem(item);
    sunScore = new QGraphicsTextItem();
    sunScore->setPlainText(QString::number(s->GetSunPoint()));
    sunScore->setFont(QFont("Helvetica", 30));
    sunScore->setPos(70,25);
    scene->addItem(sunScore);
    QPixmap a(":/new/images/images/peashooter_card3");
    QPixmap b(":/new/images/images/walnut_card3");
    QPixmap c(":/new/images/images/sunflower_card3");
    ui->walnutB->setIcon(b);
    ui->peashooterB->setIcon(a);
    ui->sunflowerB->setIcon(c);

    timerThread *ck=new timerThread();
    ck->run(20);
    connect(ck,SIGNAL(mysignal()),SLOT(check()));
    ck->start();

}
void MainWindow::read_connect()
{
    if(socket->state()!=QAbstractSocket::ConnectedState)
    {
        qDebug()<<"no connection exist Dg";
        return;
        qDebug()<<"ASDFGHFDSAS";
    }
    qDebug()<<"connected";

    str.append(socket->readAll());
    qDebug() << QString(socket->readAll());
        if(!str.contains(QChar(23))){
            qDebug()<<"!connected!!!!";
            return;
        }
    QStringList msge = str.split(QChar(23));
    str = msge.takeLast();
    qDebug()<<"connected!!!!"<<str;
//    if (gs->IfGridIsFull[gs->retI()][gs->retJ()] == 0){
//        qDebug()<<"connectedaaaaaaaaaaa";

//        if (str == "peashooterB"){
//            qDebug() <<";;peashooter";
//            pshr = new peashooter();
//            scene->addItem(pshr);
//            pshr->setPos(gs->retX(),gs->retY());
//            pshr->make_pea();
//            gs->IfPeashooterISIn[gs->retI()][gs->retJ()] = 1;
//            this->MyScore->subtract(100);
//            IfZombieAndPeashooterAreInSameRaw(pshr);
//            gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;
//             //pshr->make_pea();////////in nbayad inja bashe
//        }
//        else if (str == "sunflowerB"){
//            qDebug() <<";;sunflower";
//            sunfl = new sunflower();
//            scene->addItem(sunfl);
//            sunfl->setPos(gs->retX(),gs->retY());
//            this->MyScore->subtract(50);
//            gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;

//        }
//        else if(str == "walnutB"){
//            qDebug()<<"HHHHHHHHHHHHHHHHHHHHHHHHH";
//            wl = new walnut();
//            scene->addItem(wl);
//            wl->setPos(gs->retX(),gs->retY());
//            this->MyScore->subtract(50);
//            gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;
//     }
//        else if (str == ""){
//           qDebug() << "JJJJJJJJ";
//           wl = new walnut();
//           scene->addItem(wl);
//           x1 += 100;
//           wl->setPos(x1,310);
//           //this->MyScore->subtract(50);
//           qDebug()<<"HHHHHHHHHHHHHHHHHHHHHHHHH";

//           //gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;

//        }
//    }
//        ThePlantingPlant = "";
//    creatzom(1);


}


void MainWindow::check()

{
    if(s->GetSunPoint()>=50)
   {
        ui->walnutB->setEnabled(true);
        ui->sunflowerB->setEnabled(true);

    }
    else{
        ui->walnutB->setEnabled(false);
        ui->sunflowerB->setEnabled(false);
    }
    if(s->GetSunPoint()>=100)
        ui->peashooterB->setEnabled(true);
    else ui->peashooterB->setEnabled(false);
}

void MainWindow::planting()
{
    //socket->write(ThePlantingPlant.toLocal8Bit());
    if (gs->IfGridIsFull[gs->retI()][gs->retJ()] == 0){
        UpdateScore();
        QString mass;
        if (ThePlantingPlant == "peashooterB"){
            mass = "peashooterB";
            pshr = new peashooter();
            scene->addItem(pshr);
            pshr->setPos(gs->retX(),gs->retY());
            pshr->make_pea();
            pshr->IfPeashooter[gs->retJ()] =1 ;
            gs->IfPeashooterISIn[gs->retI()][gs->retJ()] = 1;
            //QTimer * CheckTimer = new QTimer();
            //connect(CheckTimer,SIGNAL(timeout()),this,SLOT
            IfZombieAndPeashooterAreInSameRaw(pshr);
            gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;
        }
        else if (ThePlantingPlant == "sunflowerB"){
            mass = "sunflowerB";
            sunfl = new sunflower();
            scene->addItem(sunfl);
            sunfl->setPos(gs->retX()-20,gs->retY()-10);
            //this->MyScore->subtract(50);
            gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;

        }
        else if(ThePlantingPlant == "walnutB"){
            mass = "walnutB";
            wl = new walnut();
            scene->addItem(wl);
            wl->setPos(gs->retX(),gs->retY());
            //this->MyScore->subtract(50);
            gs->IfGridIsFull[gs->retI()][gs->retJ()] = true;

     }
        mass.push_back(QChar(23));
        qDebug() << "r"<< mass;
        socket->write(mass.toLocal8Bit());

    }
        ThePlantingPlant = "";
}


void MainWindow::createSun()
{
    s = new sun;
    scene->addItem(s);
}


void MainWindow::IfZombieAndPeashooterAreInSameRaw(peashooter * shooter)
{
    //ba set zombie tu mainwindow kar kon
    for (int i = 0 ; i < 9 ; i++){
        for (int j = 0; j < 5 ; j++){
            for (auto iter = zombieset.begin() ; iter!= zombieset.end() ; iter++){ //bebin in zombie to kodum khate
            if (gs->IfPeashooterISIn[i][j] == 1 && (*iter)->countInRow[j] > 0
                    && shooter->x() < (*iter)->x()){
//                    QTimer *t = new QTimer();
//                    t->start(1000);
//                    connect (t,SIGNAL(timeout()),shooter,SLOT(make_pea()));
            }
        }
    }
    }
}

void MainWindow::UpdateScore()
{
    if (ThePlantingPlant == "walnutB" || ThePlantingPlant == "sunflowerB")
        s->SetSunPoint(-50);
    else if (ThePlantingPlant == "peashooterB")
        s->SetSunPoint(-100);
    else if (s->clicked == 1){
        s->clicked = 0;
        s->SetSunPoint(25);
    }
    sunScore->setPlainText(QString::number(s->GetSunPoint()));
    sunScore->setFont(QFont("Helvetica", 30));
    sunScore->setPos(70,25);
    scene->addItem(sunScore);
}

QString MainWindow::retPlantType()
{

        socket->write(ThePlantingPlant.toLocal8Bit());

}

void MainWindow::creatzom(int l)
{
    QStringList poses=Level::poses(l);
    zombieset=zombie::lvlStart(poses);
    for(QSet<zombie*>::iterator it=zombieset.begin();it!=zombieset.end();it++){
        scene->addItem(*it);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_walnutB_clicked()
{
    ThePlantingPlant = "walnutB";
}

void MainWindow::on_peashooterB_clicked()
{
    ThePlantingPlant = "peashooterB";
}

void MainWindow::on_sunflowerB_clicked()
{
    ThePlantingPlant = "sunflowerB";
}

void MainWindow::disconnect()
{
    socket->close();
}

void MainWindow::f(){
    QPixmap pa(":/new/images/images/ConeHead");
    scene->addPixmap(pa);
    QGraphicsPixmapItem * pad = new QGraphicsPixmapItem();
   scene->addItem(pad);
   pad->setPos(600,600);
}
