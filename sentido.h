#ifndef SENTIDO_H
#define SENTIDO_H


class Sentido
{
public:
    Sentido(int, int);
    
    int getSenX();
	int getSenY();
    
    ~Sentido();

private:
	int senX, senY;
};



#endif // SENTIDO_H
