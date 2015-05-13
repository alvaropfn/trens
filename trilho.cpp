#include "trilho.h"

Trilho::Trilho(int iniX, int iniY, int fimX, int fimY, Semaforo sem)
{
	this->iniX = iniX;
	this->iniY = iniY;
	this->fimX = fimX;
	this->fimY = fimY;
	this->sem = sem;
}

void Trilho::ocupar()
{sem->P();}

void Trilho::liberar()
{sem->V();}

int Trilho::getIniX()
{return int = {iniX};}

int Trilho::getIniY()
{return int = {iniY};}

int Trilho::getFimX()
{return int = {fimX};}

int Trilho::getFimY()
{return int = {fimY};}