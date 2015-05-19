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
    void updateInterface(int, int);

private slots:
    void on_pushButton_clicked();

    void on_pushButton2_clicked();

private:
    Ui::MainWindow *ui;
    NTrem *trem1, *trem2, *trem3,*trem4,*trem5,*trem6;


    Semaforo//primeira linha horizontal
            *sem0, *sem1, *sem2, *sem3, *sem4, *sem5, *sem6, *sem7
            //primeira linha vertical
            , *sem8, *sem9, *sem10, *sem11
            //segunda linha horizontal
            , *sem12, *sem13, *sem14, *sem15, *sem16, *sem17, *sem18, *sem19, *sem20, *sem21, *sem22, *sem23, *sem24
            //segunda linha vertical
            , *sem25, *sem26, *sem27
            //terceira linha horizontal
            , *sem28, *sem29, *sem30, *sem31, *sem32, *sem33, *sem34, *sem35, *sem36
            //terceira linha vertical
            , *sem37, *sem38
            //quarta linha horizontal
            , *sem39, *sem40, *sem41
            ;

};

#endif // MAINWINDOW_H
