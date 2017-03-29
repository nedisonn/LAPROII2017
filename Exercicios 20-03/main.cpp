#include <iostream>
#include <stdio.h>
#include "Televisao.h"
using namespace std;

int main()
{

    Televisao T;


    T.canalMais();
    T.ControleVol(50);
    T.ControleCan(30);
    T.canalMais();
    T.volumeMenos();
    T.volumeMenos();
    cout << "Canal: " << T.consultaCan() << " ,volume: " << T.consultaVol() << endl;
    return 0;
}
