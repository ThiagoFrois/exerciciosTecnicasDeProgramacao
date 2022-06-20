#pragma once

class Conta
{
protected:
	double saldo;
	int numero; // Id �nico da conta
public:
	// Construtora
	Conta(int _numero, double _saldo = 0);

	// Destrutora
	~Conta();

	bool sacar(double _valor);
	void depositar(double _valor);

	// Fun��es Get's
	int getNumero();
	double getSaldo();

	virtual void aplicarJurosDiarios(int _dias) = 0;
};
