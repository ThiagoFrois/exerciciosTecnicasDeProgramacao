#include "Conta.hpp"

Conta::Conta(double _saldo, int _numero) :
saldo(_saldo), numero(_numero)
{

}

Conta::~Conta()
{

}

bool Conta::sacar(double _valor)
{
	saldo -= _valor;

	if (saldo >= 0)
		return true;
	else
		return false;
}

void Conta::depositar(double _valor)
{
	saldo += _valor;
}

double Conta::getSaldo()
{
	return saldo;
}