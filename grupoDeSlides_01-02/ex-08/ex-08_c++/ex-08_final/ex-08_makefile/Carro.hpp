#include <iostream>

class Carro
{
private:
    int combustivelMax, combustivelAt, consumo;
public:
    //Construtoras
    Carro(int max, int cons);
    Carro();

    //Destrutora
    ~Carro();

    //Set's
    bool setCombMax(int max);
    bool setConsumo(int comb);

    //Get's
    int getCombMax() const;
    int getCombAt() const;
    int getConsumo() const;

    void andar(int dist);

    void abastecer(int quantComb);
};
