#pragma once

class Conta
{
private:
	double saldo;
	int numero;
public:
	// Construtora
	Conta(double _saldo = 0, int _numero = 0);

	// Destrutora
	~Conta();

	bool sacar(double _valor);
	void depositar(double _valor);

	double getSaldo();
};
