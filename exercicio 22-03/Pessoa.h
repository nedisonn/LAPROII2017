#include <iostream>
#include <string>
using namespace std;
class Pessoa
{
private:
    string nome;
    int idade;
    float altura;
public:
    void setNome(string nome);
    void setIdade(int idade);
    void setAltura(float altura);
    string getNome();
    int getIdade();
    float getAltura();
    void imprime();
};
