#ifndef _Agenda_h_
#define _Agenda_h_

#include "Pessoa.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
class Agenda{
    Pessoa Povo[10];
public:
    Agenda();
    ~Agenda();
    void armazenaPessoa(string nome, int idade, float altura);
    void removePessoa(string nome);
    int buscaPessoa(string nome); // informa em que posi��o da agenda est� a pessoa
    void imprimePovo(); // imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(int i); // imprime os dados da pessoa que est� na posi��o 'i' da agenda
};
#endif
