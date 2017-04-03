#include <iostream>

using namespace std;

#include "Ponto.h"
#include "Linha.h"

int main()
{
    Ponto P1(2,4);
    Ponto ConjuntoDePontos[10];
    Linha L1;
    Linha L2(&ConjuntoDePontos[3], &ConjuntoDePontos[8]);

    L1.imprime();
    cout << endl;


    cout << "=================" << endl;
    for (int i = 0; i< 10; i++)
    {
        ConjuntoDePontos[i].setPonto(i,1-i);
    }
    for (int i = 0; i< 10; i++)
    {
        ConjuntoDePontos[i].imprime();
        cout << endl;
    }
    cout << "L2 antes : ";
    L2.imprime();
    // somar 1 no X do ponto Inicial de L2


    cout << "L2 depois: ";
    L2.imprime();
    return 0;
}
