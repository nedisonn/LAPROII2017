#include "Pessoa.h"
void Pessoa::setNome(string nome)
{
    this->nome = nome;
}
void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}
void Pessoa::setAltura(float altura)
{
    this->altura = altura;
}
string Pessoa::getNome()
{
    return nome;
}
int Pessoa::getIdade()
{
    return idade;
}
float Pessoa::getAltura()
{
    return altura;
}
void Pessoa::imprime()
{
    cout <<
         "\nNome:\t" << nome <<
         "\nIdade:\t" << idade <<
         " anos\nAltura:\t" << altura << " m\n";
}
