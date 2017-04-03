
#include "Ponto.h"

class Linha{
    Ponto *pInicial, *pFinal;

public:
    Linha(Ponto *P1=NULL, Ponto *P2=NULL);
    void imprime();
    void setpInicial(Ponto *p);
    void setpFinal(Ponto *p);
    void setPonto(Ponto *pi, Ponto *pf);

    Ponto* getpInicial();
    Ponto* getpFinal();

    void setXpInicial(int x)
    {
        pInicial->setX(x);
    }


};

