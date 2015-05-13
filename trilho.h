#ifndef TRILHO_H
#define TRILHO_H

#include "semaforo.h"
class Trilho
{
public:
        Trilho(int, int, int, int, Semaforo);
	void ocupar();
	void liberar();
	int getIniX();
	int getIniY();
	int getFimX();
	int getFimY();

private:
	int iniX, iniY;
	int fimX, fimY;
	Semaforo sem;
};
#endif //TRILHO_H

