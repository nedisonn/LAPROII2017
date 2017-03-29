/*
FACIN / PUCRS
Porto Alegre, setembro de 2008
Autor: Tallis Hüther da Costa
Email: tallis.hcosta@gmail.com
Referencia: http://www.cplusplus.com/reference/clibrary/cstdio/fscanf.html
*/

#include <stdio.h>
#include "Pessoa.h"

int main ()
{
    int i, ret, int_temp;
    char string_temp[100];
    float float_temp;
    Pessoa p1, *p2;
    Pessoa povo[10]; //vetor de pessoas
    FILE *fp; //ponteiro para arquivo

    //testando a  classe
    p1.setNome("Tallis");
    p1.setIdade(19);
    p1.setAltura(1.78);
    //p1.imprime();


    fp = fopen ("agenda\\teste.txt", "rt");
    if (fp == NULL)
    {
        printf ("erro! arquivo nao foi aberto!\n");
        system("pause");
    }
    else
    {
        //prototipo da funcao fscanf
        //int fscanf ( FILE * stream, const char * format, ... );

        ret = 0;
        for(i = 0; ret != EOF; i++)
        {
            ret = fscanf (fp, "%s %d %f", string_temp, &int_temp, &float_temp);

            if (ret != EOF)
            {
                povo[i].setNome(string_temp);
                povo[i].setIdade(int_temp);
                povo[i].setAltura(float_temp);
            }
        }
        fclose (fp);
        int QtdDePessoas = i-1;
        for (i=0; i< QtdDePessoas; i++)
        {
            povo[i].imprime();
        }
    }
    system("pause");
    return 0;
}
