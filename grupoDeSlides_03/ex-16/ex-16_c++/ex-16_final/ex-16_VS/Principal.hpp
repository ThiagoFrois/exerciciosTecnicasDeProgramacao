#pragma once

#include "Cliente.hpp"
#include "Conta.hpp"

class Principal
{
private:
    Cliente clientes[3];
    Conta c1, c2, c3;
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    void setClientesEContas();

    void geraRelatorioClientes();

    void executar();
};
