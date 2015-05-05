#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include<Trem.h>

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
    Trem *trem1, *trem2, *trem3,*trem4,*trem5,*trem6;
    QVector<Semaforo*> semaforos;
    Semaforo *sem1, *sem2, *sem3, *sem4, *sem5, *sem6,*sem7, *sem8, *sem9; // cria semaforos

};

#endif // MAINWINDOW_H
