#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QThread"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sem1 = new Semaforo (1,1,IPC_CREAT|0600);
    sem2 = new Semaforo (2,1,IPC_CREAT|0600);
    sem3 = new Semaforo (3,1,IPC_CREAT|0600);
    sem4 = new Semaforo (4,1,IPC_CREAT|0600);
    sem5 = new Semaforo (5,1,IPC_CREAT|0600);
    sem6 = new Semaforo (6,1,IPC_CREAT|0600);
    sem7 = new Semaforo (7,1,IPC_CREAT|0600);
    sem8 = new Semaforo (8,1,IPC_CREAT|0600);
    sem9 = new Semaforo (9,1,IPC_CREAT|0600);


    semaforos.push_back(sem1);
    semaforos.push_back(sem2);
    semaforos.push_back(sem3);
    semaforos.push_back(sem4);
    semaforos.push_back(sem5);
    semaforos.push_back(sem6);
    semaforos.push_back(sem7);
    semaforos.push_back(sem8);
    semaforos.push_back(sem9);


    trem1 = new Trem(1, 10, 10,semaforos);
    trem2 = new Trem(2,470,10,semaforos);
    trem3 = new Trem(3, 730, 10,semaforos);
    trem4 = new Trem(4,120,250,semaforos);
    trem5 = new Trem(5,610,250,semaforos);
    trem6 = new Trem(6,490,370,semaforos);

    connect(trem1, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int, int, int)));
    connect(trem2, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int, int, int)));
    connect(trem3, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int, int, int)));
    connect(trem4, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int, int, int)));
   // connect(trem5, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int, int, int)));
    //connect(trem6, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int, int, int)));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateInterface(int id, int x, int y)
{
    switch (id) {
    case 1:
        ui->label_trem1->setGeometry(x,y,20,20);
        break;
    case 2:
        ui->label_trem2->setGeometry(x,y,20,20);
        break;
    case 3:
       ui->label_trem3->setGeometry(x,y,20,20);
        break;
    case 4:
        ui->label_trem4->setGeometry(x,y,20,20);
        break;
   // case 5:
       // ui->label_trem5->setGeometry(x,y,20,20);
        //break;
    //case 6:
       // ui->label_trem6->setGeometry(x,y,20,20);
       // break;
    default:
        break;
    }
}

void MainWindow::on_pushButton_clicked()
{
    trem1->start();
    trem2->start();
   trem3->start();
    trem4->start();
   // trem5->start();
   // trem6->start();

}

void MainWindow::on_pushButton2_clicked()
{
    trem1->atualizar(ui->lineEdit->text().toInt());
    trem2->atualizar(ui->lineEdit_2->text().toInt());
    trem3->atualizar(ui->lineEdit_3->text().toInt());
    trem4->atualizar(ui->lineEdit_4->text().toInt());
   // trem5->atualizar(ui->lineEdit_5->text().toInt());
   // trem6->atualizar(ui->lineEdit_6->text().toInt());
}
