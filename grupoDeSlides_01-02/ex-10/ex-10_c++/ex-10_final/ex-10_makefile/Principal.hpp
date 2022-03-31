#pragma once

#include "Colaborador.hpp"

class Principal
{
private:
    Colaborador colaboradores[3];
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    //Obt�m colaborador com maior rendimento
    Colaborador getMaiorRendimento();

    //Obt�m colaborador com maior custo
    Colaborador getMaiorCusto();

    //Obt�m dos valores de entrada dos colaboradores
    void getColaboradores();

    void executar();
};
