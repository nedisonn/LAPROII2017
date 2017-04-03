#ifndef _AAAAA
#define _AAAAA

#include <iostream>
using namespace std;

class Ponto
{
    int x,y;
public:

    Ponto(int a=0, int b=0);
    void setPonto(int a,int b);
    void getPonto(int &a,int &b);
    void setX(int a)
    {
        x = a;
    }
    void setY(int a)
    {
        y = a;
    }
    void imprime()
    {
        cout << "(" << x << "," << y << ")";
    }
};

#endif
