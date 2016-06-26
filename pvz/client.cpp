#include "client.h"

client::client(QWidget *parent): QWidget(parent)
{
     mysocket = new QTcpSocket;
     mysocket->connectToHost("0.0.0.0",5000);
     qDebug()<<"connctted "<<mysocket->localAddress()<<"  port: "<<5000;
     view = new QGraphicsView();

     connect(mysocket, SIGNAL(readyRead()), this, SLOT(read_message()));
     //connect(mysocket, SIGNAL(connected()), this, SLOT(connectedToServer()));
     connect(mysocket, SIGNAL(disconnected()), this, SLOT(disconnect()));

     view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
     setFixedSize(1000,800);
     scene = new QGraphicsScene();
     scene->setSceneRect(0,0,1000,800);
     view->setScene(scene);
     display_menu();


}

void client::display_menu()
{
     view->setBackgroundBrush(QBrush(QImage(":/new/prefix1/Background")));
}

//void mouseMoveEvent(QMouseEvent *event)
//{

//}
void client::start()
{
    view->setBackgroundBrush(QBrush(QImage(":/new/prefix1/Background")));

}
void client::disconnect()
{
    mysocket->close();
}
void client::read_message()
{
    if(mysocket->state() != QAbstractSocket::ConnectedState)
    {
        qDebug()<<"no connection exist any more";
        return;
    }
    qDebug()<<"it connected to: "<<mysocket->localAddress()<<"  port: "<<5044;
    myreceivedData.append(mysocket->readAll());
    if(!myreceivedData.contains(QChar(23)))
        return;
    QStringList message = myreceivedData.split(QChar(23));
    myreceivedData = message.takeLast();
//    foreach(const QString &msg, message)
//    {

//    }
}
