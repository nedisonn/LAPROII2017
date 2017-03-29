#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;
class Agenda
{
    Pessoa Povo[10];
public:
    void armazenaPessoa(string nome, int idade, float altura);
    void removePessoa(string nome);
    int buscaPessoa(string nome); // informa em que posição da agenda está a pessoa
    void imprimePovo(); // imprime todos os dados de todas as pessoas da agenda
    void imprimePessoa(int i); // imprime os dados da pessoa que está na posição 'i' da agenda
}
