#pragma once

#include <iostream>
#include <cstring>
#include "Conta.hpp"

using std::cout;
using std::endl;

class Cliente
{
private:
    char nome[30];
    char cpf[30];
    Conta* contas[3];

public:
    //Construtoras
    Cliente(const char* n, const char* c);
    Cliente();

    //Destrutora
    ~Cliente();

    void incializaContasVazias();

    void criarConta(Conta* c);

    void removerConta(int num);

    const char* gerarRelatorio();

    void aplicarRecursos(int num, float valor);

};
