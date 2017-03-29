#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    int canal, volume;

    public:
        Televisao();
        virtual ~Televisao();

    void ControleVol(int);
    void ControleCan(int);

    void canalMais();
    void canalMenos();

    void volumeMais();
    void volumeMenos();

    int consultaVol();
    int consultaCan();


    protected:

    private:
};

#endif // TELEVISAO_H
