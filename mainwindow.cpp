#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QThread"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int i = 0;
    //primeira linhahorzontal
    Trilho h00 = new Trilho(10, 10, 110, 10, new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h01 = new Trilho(110, 10, 210, 10,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h02 = new Trilho(210, 10, 310, 10,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h03 = new Trilho(310, 10, 410, 10,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h04 = new Trilho(410, 10, 510, 10,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h05 = new Trilho(510, 10, 610, 10,new Semaforo (++i,1, IPC_CREAT|0600));
    //primeira linha vertical
    Trilho v00 = new Trilho(10, 30, 10, 130, new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h01 = new Trilho(190, 30, 190, 130, new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h02 = new Trilho(390, 30, 390, 130, new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h03 = new Trilho(590, 30, 590, 130, new Semaforo (++i,1, IPC_CREAT|0600));
    //segunda linha horizontal
    Trilho h06 = new Trilho(10, 130, 110, 130,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h07 = new Trilho(110, 130, 210, 130,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h08 = new Trilho(210, 130, 310, 130,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h09 = new Trilho(310, 130, 410, 130,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h10 = new Trilho(410, 130, 510, 130,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h11 = new Trilho(510, 130, 610, 130,new Semaforo (++i,1, IPC_CREAT|0600));
    //segunda linha vertical
    Trilho v04 = new Trilho(110, 150, 110, 250, new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho v05 = new Trilho(310, 150, 310, 250, new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho v06 = new Trilho(490, 150, 490, 250, new Semaforo (++i,1, IPC_CREAT|0600));
    //terceira linha horizontal
    Trilho h12 = new Trilho(110, 250, 210, 250,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h13 = new Trilho(210, 250, 310, 250,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h14 = new Trilho(310, 250, 410, 250,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h15 = new Trilho(410, 250, 510, 250,new Semaforo (++i,1, IPC_CREAT|0600));
    //terceira linha vertical
    Trilho v07 = new Trilho(210, 270, 210, 370,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho v08 = new Trilho(390, 270, 390, 370,new Semaforo (++i,1, IPC_CREAT|0600));
    //quarta linha horizontal
    Trilho h16 = new Trilho(210, 270, 310, 270,new Semaforo (++i,1, IPC_CREAT|0600));
    Trilho h17 = new Trilho(310, 270, 410, 270,new Semaforo (++i,1, IPC_CREAT|0600));

    trem1 = new NTrem();

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




    connect(trem1, SIGNAL(updateGUI(int,int)), SLOT(updateInterface( int, int)));
    connect(trem2, SIGNAL(updateGUI(int,int)), SLOT(updateInterface( int, int)));
    connect(trem3, SIGNAL(updateGUI(int,int)), SLOT(updateInterface( int, int)));
    connect(trem4, SIGNAL(updateGUI(int,int)), SLOT(updateInterface( int, int)));
   // connect(trem5, SIGNAL(updateGUI(int,int)), SLOT(updateInterface( int, int)));
    //connect(trem6, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface( int, int)));

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
