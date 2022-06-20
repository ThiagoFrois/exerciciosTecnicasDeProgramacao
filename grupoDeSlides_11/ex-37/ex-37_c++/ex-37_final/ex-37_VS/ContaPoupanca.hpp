#pragma once

#define JUROS_CP 0.02
#include "Conta.hpp"

class ContaPoupanca : public Conta
{
public:
	// Construtora
	ContaPoupanca(int _numero);

	// Destrutora
	~ContaPoupanca();

	void aplicarJurosDiarios(int _dias);
};
