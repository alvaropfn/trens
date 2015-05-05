#ifndef TREM_H
#define TREM_H

#include <QThread>
#include <QVector>
#include <semaforo.h>

class Trem: public QThread
{

Q_OBJECT
public:
    Trem(int, int, int,QVector<Semaforo*>);
    void run();
    void atualizar(int vel);
    void finalizar();

signals: // id, X, Y
    void updateGUI(int, int, int);

private:
    int id, x, y;
    int velocidade;
    int tempo;
    bool stop;
    QVector<Semaforo*>vetorsemaforos;
};

#endif // TREM_H
