#include "Conta.hpp"

Conta::Conta(int _numero, double _saldo) :
saldo(_saldo), numero(_numero)
{

}

Conta::~Conta()
{

}

bool Conta::sacar(double _valor)
{
	// Verifica se possui saldo suficiente
	if (saldo >= 0) 
	{
		saldo -= _valor;
		return true;
	}
	else
		return false;
}

void Conta::depositar(double _valor)
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