#include "ntrem.h"
#include <QtCore>

NTrem::NTrem(QVector<Trilho*> trilho, QVector<Sentido*> sentido)
{

    this->posX = 0;
    this->posY = 0;

	this->tempo = 100;
	this->velo = 0;
}
void NTrem::setVelo(int velo)
{this-> velo = velo;}

void NTrem::rodar()
{

}



void NTrem::updateGUI(int posX, int posY)
{

}


