#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scena=new QGraphicsScene;
    ui->graphicsView->setScene(scena);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::rysuj()
{
    scena->clear();
    obrazek.dodajPiksel(0,0);
    obrazek.rysujLinie(20,20,20,80);
    obrazek.rysujProstokat(40,40,85,90,1);
    obrazek.rysujLinie(40,40,90,90);
    obrazek.rysujLinie(100,100,120,130);
    obrazek.rysujLinie(100,100,130,120);
}
void MainWindow::odswierz()
{
    for(int i=0; i<240; i++)
        for(int j=0; j<320; j++)
        {
            if(obrazek.p[i][j])
            {
                scena->addRect(i-120,j-160,1,1);
            }
        }
}


void MainWindow::on_pushButton_clicked()
{

}
