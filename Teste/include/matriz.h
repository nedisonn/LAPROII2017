#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <stdio.h>
const int NUM = 3;

using namespace std;

class matriz {
public:
 int a[NUM][NUM];
 int linha;


    matriz();
    void setA(int valor);
    int menorLido(int linha);
    void imprimirLinha();
};


#endif // MATRIZ_H
