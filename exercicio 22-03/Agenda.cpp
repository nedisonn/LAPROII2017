#include "agenda.h"
void Agenda::armazenaPessoa(string nome, int idade, float altura)
{
    setNome(nome);
    setIdade(idade);
    setAltura(altura);
}
void Agenda::removePessoa(string nome)
{
    while (int i <= 10)
    {
        i++
        if (nome == Povo[i].getNome())
        {
            Povo[i].setNome("-");
            Povo[i].setIdade(-1);
            Povo[i].setAltura(-1);
        }
    }
}
int Agenda::buscaPessoa(string nome)
{
    int aux;
    while (int i <= 10)
    {
        i++
        if (nome == Povo[i].getNome())
        {
            aux = i;
            return aux;
        }
    }
    return -1;
}
void Agenda::imprimePovo()
{
    for (int i = 0; i <= 10; i++)
    {
        Povo[i].imprime();
    }
}
void Agenda::imprimePessoa(int i)
{
    Povo[i].imprime();
}
