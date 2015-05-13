#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<Trem.h>
#include <ntrem.h>
#include<sentido.h>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void updateInterface(int, int, int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton2_clicked();

private:
    Ui::MainWindow *ui;
    NTrem *trem1, *trem2, *trem3,*trem4,*trem5,*trem6;
    Semaforo *h00, *h01, *h02, *h03, *h04, *h50, *h60, *h07, *h08;// cria semaforos
    Semaforo *h09, *h10, *h11, *h12, *h13, *h14, *h15, *h16, *h17;// cria semaforos
    Semaforo *v00, *v01, *v02, *v03, *v04, *v05, *v06, *v07, *v08;// cria semaforos

    QVector<Sentido> sentidos;

};

#endif // MAINWINDOW_H
