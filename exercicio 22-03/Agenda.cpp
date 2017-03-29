#include "Agenda.h"
#include "Pessoa.h"

Agenda::Agenda(){
 while (int i = 0)
    {
        i++;

        if (i == 10) break;
        if (Povo[i].getNome() == "-"){
         Povo[i].setNome("-");
         Povo[i].setIdade(-1);
         Povo[i].setAltura(-1);
        }
}
}

Agenda::~Agenda(){};

void Agenda::armazenaPessoa(std::string nome, int idade, float altura)
{
    while (int i = 0)
    {
        i++;
        
        if (i == 10) break;
        if (Povo[i].getNome() == "-"){
         Povo[i].setNome(nome);
         Povo[i].setIdade(idade);
         Povo[i].setAltura(altura);
        }
    }
};
void Agenda::removePessoa(std::string nome)
{
    while (int i = 0)
    {
        i++;
        
        if (i == 10) break;
        if (nome == Povo[i].getNome())
        {
            Povo[i].setNome("-");
            Povo[i].setIdade(-1);
            Povo[i].setAltura(-1);
            
        }
    }
};
int Agenda::buscaPessoa(std::string nome)
{
    int aux;
    while (int i = 0)
    {
        i++;
        
        if (i == 10) break;
        if (nome == Povo[i].getNome())
        {
            aux = i;
            return aux;
        }
    }
    return -1;
};
void Agenda::imprimePovo()
{
    for (int i = 0; i <= 10; i++)
    {
        Povo[i].imprime();
    }
};
void Agenda::imprimePessoa(int i)
{
    Povo[i].imprime();
};
