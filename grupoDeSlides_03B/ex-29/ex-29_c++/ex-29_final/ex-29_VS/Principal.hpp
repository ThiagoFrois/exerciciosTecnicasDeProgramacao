#pragma once

#include "CarroEsporte.hpp"

class Principal
{
private:
    Carro gol;
    CarroEsporte ferrari;
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    void executar();
};
