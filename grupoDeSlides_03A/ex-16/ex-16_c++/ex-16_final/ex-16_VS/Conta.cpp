#include "Conta.hpp"

Conta::Conta(int _numero, double _saldo) :
numero(_numero), numUsuarios(0), saldo(_saldo)
{

}

Conta::~Conta()
{

}

int Conta::getNumUsuarios()
{
    return numUsuarios;
}

void Conta::sacar(float _valor)
{
    saldo -= _valor;
}

void Conta::depositar(float _valor)
{
    saldo += _valor;
}

int Conta::getNumero()
{
    return numero;
}

double Conta::getSaldo()
{
    return saldo;
}

