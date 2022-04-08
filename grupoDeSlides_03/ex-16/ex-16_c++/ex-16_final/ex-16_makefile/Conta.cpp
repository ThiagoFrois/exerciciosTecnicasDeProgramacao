#include "Conta.hpp"

Conta::Conta(int num, int s) :
numero(num), saldo(s)
{

}

Conta::Conta() :
numero(-1), saldo(0)
{

}

void Conta::sacar(float s)
{
    saldo -= s;
}

void Conta::depositar(float d)
{
    saldo += d;
}

int Conta::getNumero()
{
    return numero;
}

float Conta::getSaldo()
{
    return saldo;
}

