#include <stdio.h>
#include <iostream>
#include "agenda.h"
#include "Pessoa.h"
int main()
{
    char linha[] = "------------------------------------------------\n";
    Agenda A;

    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa("Tiago", 20, 1.80);
    A.imprimePovo();
    cout << linha;

    int posicao = A.buscaPessoa("Tiago");
    if (posicao > 0)
        A.imprimePessoa(posicao);
    cout << linha;

    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha;


    return 0;

}
