#pragma once

#pragma warning(disable:4996)

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Conta
{
private:
    int numero, usuarios;
    double saldo;
public:

    //Construtoras
    Conta(int num, int saldo = 0);
    Conta();

    //Destrutora
    ~Conta();

    void incrementaUsuarios();
    void decrementaUsuarios();

    int getUsuarios();

    void sacar(float s);

    void depositar(float d);

    int getNumero();

    double getSaldo();
};
