#pragma once

#include "Conta.hpp"

class Cliente
{
private:
    char nome[30];
    char cpf[30];

    int numContasT; // N�mero de contas onde o cliente � titular.
    int numContasV; // N�mero de contas onde o cliente n�o � titular.
    
    Conta* contas[13]; // Nas tr�s primeiras posi��es o cliente � o titular, e nas demais n�o.

public:


    // Construtora
    Cliente(const char* _nome = "", const char* _cpf ="");

    // Destrutora
    ~Cliente();

    // Retorna um string com o relat�rio do cliente
    const char* gerarRelatorio();

    // Depositar um certo valor no n�mero da conta dado
    void aplicarRecursos(int _numConta, double _valor);

    void vincularConta(Conta* _conta);

    void criarConta(Conta* _conta);

    
};
