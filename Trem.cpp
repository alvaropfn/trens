#include "Trem.h"
#include <QtCore>

Trem::Trem(int id, int x, int y, QVector<Semaforo*>semaforos)
{
    this->id = id;
    this->x = x;
    this->y = y;
    stop = false;
    tempo = 100;
    velocidade = 10;
    vetorsemaforos = semaforos;
}

void Trem::run()
{
    while(true)
    {
        switch (id)
        {
        case 1:

            if(x==230 && y==10)
            {
                vetorsemaforos.at(1)->P();
                vetorsemaforos.at(0)->P();
            }
            if(x==230 && y==130)
            {
                vetorsemaforos.at(0)->V();
                vetorsemaforos.at(2)->V();
            }
            if(x==100 && y==130)
            {
                vetorsemaforos.at(1)->V();
            }
            emit updateGUI(id, x, y);
            if(y==10 && x>=10 && x<250)
            {
                if((x+velocidade)>250)
                {
                  x+=10;
                } else {
                x+=velocidade;
                }
            } else if (x==250 && y>=10 && y<130)
            {
                if((y+velocidade)>130)
                {
                  y+=10;
                } else {
                y+=velocidade;
                }
            } else if (y==130 && x<=250 && x>10)
            {
                if((x-velocidade)<10)
                {
                  x-=10;
                } else {
                x-=velocidade;
                }
            } else if (x==10 && y<=130 && y>10)
            {
                if((y-velocidade)<10)
                {
                  y-=10;
                } else {
                y-=velocidade;
                }
            }
            break;
        case 2:
            if(x==390 && y==130)
            {
                vetorsemaforos.at(0)->P();
                vetorsemaforos.at(2)->P();
                vetorsemaforos.at(3)->P();
            }
            if(x==470 && y==130)
            {
                vetorsemaforos.at(3)->V();
            }
            if(x==270 && y==10)
            {
                vetorsemaforos.at(0)->V();
            }
            if(x==250 && y==130)
            {
                vetorsemaforos.at(2)->V();
            }
            if(x==250 && y==230)
            {

            }
            emit updateGUI(id,x,y);
            if(y==10 && x>=250 && x<490)
            {
                x+=velocidade;
            } else if (x==490 && y>=10 && y<130)
            {
                y+=velocidade;
            } else if (y==130 && x<=490 && x>250)
            {
                x-=velocidade;
            } else if (x==250 && y<=130 && y>10)
            {
                y-=velocidade;
            }
            break;
        case 3:
            if(x==510 && y==130)
            {

                vetorsemaforos.at(3)->P();
            }
            if(x==510 && y==10)
            {
                vetorsemaforos.at(3)->V();
            }
            emit updateGUI(id,x,y);
            if(y==10 && x>=490 && x<730)
            {
                x+=velocidade;
            } else if (x==730 && y>=10 && y<130)
            {
                y+=velocidade;
            } else if (y==130 && x<=730 && x>490)
            {
                x-=velocidade;
            } else if (x==490 && y<=130 && y>10)
            {
                y-=velocidade;
            }
            break;
        case 4:
            if(x==120 && y==150)
            {

                vetorsemaforos.at(2)->P();
                vetorsemaforos.at(0)->P();
                vetorsemaforos.at(1)->P();
            }
            if(x==370 && y==150)
            {
                vetorsemaforos.at(2)->V();
            }
            if(x==270 && y == 130)
            {
                vetorsemaforos.at(0)->V();
                vetorsemaforos.at(1)->V();
            }
            emit updateGUI(id,x,y);
            if(y==130 && x>=120 && x<370)
            {
                x+=velocidade;
            } else if (x==370 && y>=130 && y<250)
            {
                y+=velocidade;
            } else if (y==250 && x<=370 && x>120)
            {
                x-=velocidade;
            } else if (x==120 && y<=250 && y>130)
            {
                y-=velocidade;
            }
            break;
        default:
            break;
        }
        msleep(tempo);
    }
}
void Trem::finalizar()
{
    stop = true;
}

void Trem::atualizar(int vel)
{
velocidade= vel;
}
