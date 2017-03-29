#include "matriz.h"
#include <iostream>
#include <stdio.h>
using namespace std;
const int NUM = 3;


   matriz::matriz(){
    a[NUM][NUM] = 0;
    linha = 0;
    };

    int getA(){
    return a[NUM][NUM];
    };


    void setA(int valor){

    for (int i=0;i<=NUM;i++)
        for (int j=0;j<=NUM;j++){
            cout<<"valor da linha"<< i << "e coluna" << j <<endl;
            a[i][j]=valor;}

    };


   int menorLido(int linha){
        int menor, i, j;
    for (i = 0; i <= NUM; i++)
        for (j=0;j<=NUM;j++)
            if (a[i][j] <= menor)
            linha = i;
            menor = a[i][j];
     return menor;
    };


    matriz::void imprimirLinha(){
    cout << "A linha que contém o menor número é a:" << linha << endl;

    };
