#pragma once

#include "Conta.hpp"

class Cliente
{
private:
    char nome[30];
    char cpf[30];

    int numContasT; // Número de contas onde o cliente é titular.
    int numContasV; // Número de contas onde o cliente não é titular.
    
    Conta* contas[13]; // Nas três primeiras posições o cliente é o titular, e nas demais não.

public:


    // Construtora
    Cliente(const char* _nome = "", const char* _cpf ="");

    // Destrutora
    ~Cliente();

    // Retorna um string com o relatório do cliente
    const char* gerarRelatorio();

    // Depositar um certo valor no número da conta dado
    void aplicarRecursos(int _numConta, double _valor);

    void vincularConta(Conta* _conta);

    void criarConta(Conta* _conta);

    
};
