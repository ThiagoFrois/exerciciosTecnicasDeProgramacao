#pragma once

class Conta
{
private:
    int numero;
    float saldo;
public:
    //Construtoras
    Conta(int num, int saldo);
    Conta();

    //Destrutora
    ~Conta();

    void sacar(float s);

    void depositar(float d);

    int getNumero();

    float getSaldo();
};
