#ifndef _Pessoa_h_
#define _Pessoa_h_
#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
class Pessoa{
private:
    string nome;
    int idade;
    float altura;
public:
    Pessoa();
    ~Pessoa();
    void setNome(string nome);
    void setIdade(int idade);
    void setAltura(float altura);
    string getNome();
    int getIdade();
    float getAltura();
    void imprime();
};
#endif
