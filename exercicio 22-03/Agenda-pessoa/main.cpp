#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include "Pessoa.h"
#include "Agenda.h"
using namespace std;
int main()
{
    char linha[] = "------------------------------------------------\n";

    Agenda A;

    A.armazenaPessoa("Abel", 22, 1.78);
    A.armazenaPessoa("Tiago", 20, 1.80);
    A.imprimePovo();
    cout << linha <<endl;

    int posicao = A.buscaPessoa("Tiago");
    if (posicao > 0)
        A.imprimePessoa(posicao);
    cout << linha << endl;;

    A.removePessoa("Tiago");
    A.imprimePovo();
    cout << linha << endl;


    return 0;

}
