#ifndef TRILHO_H
#define TRILHO_H

#include <QLabel>
#include "semaforo.h"

class Trilho
{
public:
    Trilho(QLabel*, Semaforo*);

    int getIniX();
    int getIniY();
    int getFimX();
    int getFimY();
    ~Trilho();
private:
	QLabel label;
    Semaforo sem;
};

#endif // TRILHO_H
