#include "Televisao.h"

Televisao::Televisao()
{
    canal = volume = 0;
}

Televisao::~Televisao()
{
    //dtor
}

    void Televisao::ControleVol(int num){
    volume = num;
    }

    void Televisao::ControleCan(int num){
    canal = num;
    }

    void Televisao::canalMais(){
    canal = canal+1;
    }

    void Televisao::canalMenos(){
    canal = canal-1;
    }

    void Televisao::volumeMais(){
    volume = volume +1;
    }

    void Televisao::volumeMenos(){
    volume = volume-1;
    }

    int Televisao::consultaVol(){
    return volume;
    }

    int Televisao::consultaCan(){
    return canal;
    }

