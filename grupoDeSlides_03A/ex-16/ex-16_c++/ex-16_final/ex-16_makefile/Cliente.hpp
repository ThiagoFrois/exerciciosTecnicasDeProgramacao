#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include "Conta.hpp"

using std::string;
using std::cout;
using std::endl;
class Cliente
{
private:
    // Nome e CPF: Restrito a 29 caracteres 
    char nome[30];
    char cpf[30];

    int numContasT; // N�mero de contas onde o cliente � titular.
    int numContasV; // N�mero de contas onde o cliente n�o � titular.
    
    /*
    * Nas tr�s primeiras posi��es o cliente � o titular, e nas demais n�o.
    * No entanto, temos 3 contas reservadas como titular, e mais dez 
    * contas dispon�veis como n�o titular.
    */
    Conta* contas[13]; 

public:


    // Construtora
    Cliente(const char* _nome = "", const char* _cpf = "");

    // Destrutora
    ~Cliente();

    // Retorna um string com o relat�rio do cliente
    string gerarRelatorio();

    // Deposita um certo valor no n�mero da conta dado
    void aplicarRecursos(int _numConta, double _valor);

    // Pertmite ao cliente sacar um certo valor de uma de suas contas 
    void sacarRecursos(int _numConta, double _valor);

    void vincularConta(Conta* _conta);

    void criarConta(Conta* _conta);    
    
};
