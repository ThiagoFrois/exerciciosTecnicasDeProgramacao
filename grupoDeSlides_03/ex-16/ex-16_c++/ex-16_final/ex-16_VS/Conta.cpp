#include "Conta.hpp"

Conta::Conta(int num, int s) :
numero(num), usuarios(0), saldo(s)
{

}

Conta::Conta() :
numero(-1), usuarios(0), saldo(0)
{

}

Conta::~Conta()
{

}

void Conta::incrementaUsuarios()
{
    usuarios++;
}

void Conta::decrementaUsuarios()
{
    usuarios--;
}

int Conta::getUsuarios()
{
    return usuarios;
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

double Conta::getSaldo()
{
    return saldo;
}

