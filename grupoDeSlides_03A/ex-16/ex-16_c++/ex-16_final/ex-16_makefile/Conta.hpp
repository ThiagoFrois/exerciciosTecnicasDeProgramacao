#pragma once

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Conta
{
private:
    int numero, numUsuarios;
    double saldo;
public:

    //Construtora
    Conta(int _numero = -1, double _saldo = 0);

    //Destrutora
    ~Conta();

    int getNumUsuarios();

    void sacar(float _valor);

    void depositar(float _valor);

    int getNumero();

    double getSaldo();
};

