#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(int _numero) :
Conta(_numero)
{

}

ContaCorrente::~ContaCorrente()
{

}

void ContaCorrente::aplicarJurosDiarios(int _dias)
{
    double excedente;

    for (int i = 0; i < _dias; i++) {
        excedente = saldo - LIMITE;
        if (excedente > 0) // Verifica se o saldo é maior que o LIMITE
            saldo += JUROS_CC * excedente; // Calcula o juros sobre o excendente
    }
}