#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Carro
{
protected:
    int combustivelMax, combustivelAt, consumo; // Consumo = Km/L
public:
    //Construtora
    Carro(int _capacidadeMaxima = 80, int _consumo = 20);

    //Destrutora
    ~Carro();

    //Get's
    int getCombustivel();

    //O carro anda uma distância dada
    void andar(int _distancia);

    //O carro abastece o tanque com um quantidade dada
    void abastecer(int _quantidade);
};
