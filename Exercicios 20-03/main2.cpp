/*. Implemente um carro. O tanque de combustível do carro armazena no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser possível:

    Abastecer o carro com uma certa quantidade de gasolina;
    Mover o carro em uma determinada distância (medida em km);
    Retornar a quantidade de combustível e a distância total percorrida.

No programa principal, crie 2 carros. Abasteça 20 litros no primeiro e 30 litros no segundo. Desloque o primeiro em 200 km e o segundo em 400 km. Exiba na tela a distância percorrida e o total de combustível restante para cada um.

*/

#include <iostream>
#include <stdio.h>
#include "carro.h"
using namespace std;

int main()
{
    Carro c1;
    Carro c2;

    c1.abastecer(20);
    c1.mover(200);

    c2.abastecer(30);
    c2.mover(400);

    cout << "Carro 1 tem "<< c1.quant_comb()<< " litros sobrando, em uma distancia de: "<< c1.dist_total()<<" km."<<endl;

    cout << "Carro 2 tem "<< c2.quant_comb()<< " litros sobrando, em uma distancia de: "<< c2.dist_total()<<" km."<<endl;

    return 0;
}
