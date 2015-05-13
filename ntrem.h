#ifndef NTREM_H
#define NTREM_H

#include <QThread>
#include <QVector>
#include <trilho.h>
#include <sentido.h>

class NTrem
{
public:
	NTrem( QVector<Trilho*>, QVector<Sentido*>);
    void setVelo(int velo);
    void rodar();
    

private:
	int id, velo, tempo;
	int posX, posY;
	QVector<Trilho*> trilho;
	QVector<Sentido*> sentido;
signals:
    void updateGUI(int, int);
};

#endif // NTREM_H
