#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QtCore>
#include <QtGui>
#include "Obraz.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void rysuj();
    void odswierz();
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scena;
    QGraphicsRectItem* piksel;
    Obraz obrazek;
    QGraphicsView graphicsView;
};
#endif // MAINWINDOW_H
