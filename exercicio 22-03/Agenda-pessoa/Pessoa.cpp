#include "Pessoa.h"
Pessoa::Pessoa(){
    nome = "-";
    idade = -1 ;
    altura = -1;
};
Pessoa::~Pessoa(){};
void Pessoa::setNome(std::string nome)
{
    this->nome = nome;
};
void Pessoa::setIdade(int idade)
{
    this->idade = idade;
};
void Pessoa::setAltura(float altura)
{
    this->altura = altura;
};
string Pessoa::getNome()
{
    return nome;
};
int Pessoa::getIdade()
{
    return idade;
};
float Pessoa::getAltura()
{
    return altura;
};
void Pessoa::imprime()
{
    cout <<
         "\nNome:\t" << nome <<
         "\nIdade:\t" << idade <<
         " anos\nAltura:\t" << altura << " m\n"<< endl;
};
