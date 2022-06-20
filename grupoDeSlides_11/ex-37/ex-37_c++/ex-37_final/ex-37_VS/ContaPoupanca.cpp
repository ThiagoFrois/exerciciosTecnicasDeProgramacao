#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(int _numero) :
Conta(_numero)
{

}

ContaPoupanca::~ContaPoupanca()
{

}

void ContaPoupanca::aplicarJurosDiarios(int _dias)
{
    for (int i = 0; i < _dias; i++) {
        saldo += JUROS_CP * saldo; // Calcula o juros diário
    }
}