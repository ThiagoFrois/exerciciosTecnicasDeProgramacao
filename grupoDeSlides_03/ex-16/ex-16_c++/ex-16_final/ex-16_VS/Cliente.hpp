#pragma once

#include "Conta.hpp"

class Cliente
{
private:
    char nome[30];
    char cpf[30];
    Conta* contas[3];

public:
    char relatorio[180];
    char aux[180];
    char aux2[180];


    //Construtoras
    Cliente(const char* n, const char* c);
    Cliente();

    //Destrutora
    ~Cliente();

    void incializaContasVazias();

    void criarConta(Conta* c);

    void removerConta(int num);

    const char* gerarRelatorio();

    void aplicarRecursos(int num, double valor);
};
