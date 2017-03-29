#ifndef CARRO_H
#define CARRO_H


class Carro
{
    public:
        float comb, dist, media, consome;




        Carro();
        virtual ~Carro();
        void abastecer(float gaso);
        void mover(float km);
        float quant_comb();
        float dist_total();
    protected:

    private:
};

#endif // CARRO_H
