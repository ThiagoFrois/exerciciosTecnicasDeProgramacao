#pragma once


#include "Cliente.hpp"
#include "Conta.hpp"

class Principal
{
private:
    Cliente clientes[3]; // N�mero de clientes para fins de exemplo
    Conta contas[5]; // N�mero de contas para fins de exemplo
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    // Relaciona os cliente com suas respectivas contas e n�veis de autoridade
    void setClientesEContas();

    // Gera relat�rios de todos clientes
    void geraRelatorioClientes();

    void executar();
};

