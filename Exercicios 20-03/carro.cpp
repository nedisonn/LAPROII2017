#include "carro.h"

            Carro::Carro()
            {
                comb = dist = media = 0;
                consome=15;
            }

            Carro::~Carro()
            {
                //dtor
            }

            void Carro::abastecer(float gaso){

            if (comb <= 50)
                if (comb + gaso <=50)
                    comb = comb + gaso;

            }

            void Carro::mover(float km){
                dist = dist + km;
            }

            float Carro::quant_comb(){
            if (dist/comb == consome)
                {comb = comb - dist/consome;
                return comb;
                }
            }

            float Carro::dist_total(){

            return dist;
            }
