#pragma once


#include "Cliente.hpp"
#include "Conta.hpp"

class Principal
{
private:
    Cliente clientes[3]; // Número de clientes para fins de exemplo
    Conta contas[5]; // Número de contas para fins de exemplo
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    // Relaciona os cliente com suas respectivas contas e níveis de autoridade
    void setClientesEContas();

    // Gera relatórios de todos clientes
    void geraRelatorioClientes();

    void executar();
};

