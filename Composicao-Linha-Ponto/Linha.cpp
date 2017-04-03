#include "Linha.h"

Linha::Linha(Ponto *P1, Ponto *P2)
{
    pInicial = P1;
    pFinal = P2;
}
void Linha::imprime()
{
    if (pInicial)  // (pInicial != NULL)
    {
        cout << "LINHA - Ponto Inicial: ";
        pInicial->imprime();
    } else cout << "Ponto Inicial nulo. ";
    if (pFinal)
    {
        cout << "Ponto Final: ";
        pFinal->imprime();
    }else cout << "Ponto Final nulo. ";
}
//void setpInicial(Ponto *p);
void Linha::setpInicial(Ponto *p)
{
    pInicial = p;
}
//Ponto *getpFinal();
Ponto* Linha::getpInicial()
{
    return pInicial;
}
void Linha::setPonto(Ponto *pi, Ponto *pf)
{
    pInicial = pi;
    pFinal = pf;
}

