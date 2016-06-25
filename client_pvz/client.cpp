#include "client.h"

client::client(QWidget *parent): QWidget(parent)
{
     mysocket = new QTcpSocket;
     mysocket->connectToHost("0.0.0.0",5000);
     qDebug()<<"connctted "<<mysocket->localAddress()<<"  port: "<<5000;
     view = new QGraphicsView();
}
