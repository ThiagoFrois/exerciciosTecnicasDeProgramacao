#pragma once

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

#include "ContaCorrente.hpp"
#include "ContaPoupanca.hpp"

class Principal
{
private:
	vector<Conta*> contas;
public:
	// Construtora
	Principal();

	// Destrutora
	~Principal();

	void executar();

	void criarNovaConta();
	void exec();
	void lerSaldo(int _numConta);
	void depositar(double _valor, int _numConta);
	void sacar(double _valor, int _numConta);
	void aplicarJuros(int _dias);
	int MenuPrincipal() const;
	Conta* encontraConta();
};
