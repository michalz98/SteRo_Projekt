#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scena=new QGraphicsScene;
    ui->graphicsView->setScene(scena);
    tim=new QTimer(this);
    connect(tim,SIGNAL(timeout()),this,SLOT(czytajDane()));
    tim->start(1000);
    ostatnioCzytana=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::rysuj()
{
    czytajDane();
}
void MainWindow::odswierz()
{
    if(obrazek.doWyczyszczenia)
        scena->clear();

    for(int i=0; i<240; i++)
        for(int j=0; j<320; j++)
        {
            if(obrazek.p[i][j])
            {
                scena->addRect(i-120,j-160,1,1,QColor(obrazek.c[i][j].red,obrazek.c[i][j].green,obrazek.c[i][j].blue,255));
            }
        }
}

void MainWindow::czytajDane()
{
    qDebug()<<"update";
    char buff;
    char ignore[50];
    int x, y, r, g, b;
    bool czytajDalej=true;
    fstream plik;
    plik.open("netcat/out.txt");
    if(!plik.is_open())
        qDebug()<<"Nie znaleziono pliku";
    for(int i=0; i<ostatnioCzytana;i++)
    {
        plik.getline(ignore, 50);
    }
    while(czytajDalej&&(plik.get(buff)))
    {
        //plik>>buff;
        switch(buff)
        {
        case 'c':
            obrazek.doWyczyszczenia=true;
            ostatnioCzytana++;
            obrazek.wyczysc();
            obrazek.p[0][0]=true;       //zapobiegniecie przesunieciu obrazka
            obrazek.c[0][0].red=255;
            obrazek.c[0][0].green=255;
            obrazek.c[0][0].blue=255;
            break;
        case 'p':
            plik>>x;
            plik>>y;
            /*
            plik>>r;
            plik>>g;
            plik>>b;*/
            obrazek.p[x][y]=true;
            /*obrazek.c[x][y].red=r;
            obrazek.c[x][y].green=g;
            obrazek.c[x][y].blue=b;*/
            obrazek.c[0][0].red=0;
            obrazek.c[0][0].green=0;
            obrazek.c[0][0].blue=0;
            ostatnioCzytana++;
            //qDebug()<<x<<y;
            break;
        case 'k':
            czytajDalej=false;
            ostatnioCzytana++;
            break;
        }
    }
    plik.close();
    odswierz();
}

//void MainWindow::czytajDane()
//{
//    qDebug()<<"update";
//    char buff;
//    char ignore[50];
//    int x=0, y=0;
//    bool czytajDalej=true;
//    fstream plik;
//    plik.open("netcat/out.txt");
//    for(int i=0; i<ostatnioCzytana;i++)
//    {
//        plik.getline(ignore, 50);
//    }
//    while(czytajDalej&&(plik.get(buff)))
//    {
//        if(buff=='1')
//            obrazek.p[x][y]=1;
//        else if(buff=='\n')
//        {
//                        obrazek.doWyczyszczenia=true;
//                        ostatnioCzytana++;
//                        obrazek.wyczysc();
//                        obrazek.p[0][0]=true;       //zapobiegniecie przesunieciu obrazka
//                        obrazek.c[0][0].red=255;
//                        obrazek.c[0][0].green=255;
//                        obrazek.c[0][0].blue=255;
//        }
//        else
//            obrazek.p[x][y]=0;
//        x++;
//        if(x==240)
//        {
//            y++;
//            x=0;
//        }
//    }
//    plik.close();
//    odswierz();
//}

