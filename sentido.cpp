#include "sentido.h"

Sentido::Sentido(int senX, int senY)
{
	this->senX = senX;
	this->senY = senY;
}

int Sentido::getIniX()
{return senX;}

int Sentido::getIniY()
{return senY;}


Sentido::~Sentido()
{}

