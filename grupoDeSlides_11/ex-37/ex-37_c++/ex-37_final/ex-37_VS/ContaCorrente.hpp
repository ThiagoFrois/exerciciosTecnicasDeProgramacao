#pragma once

#define LIMITE 1000.00
#define JUROS_CC 0.01 // Juros diário

#include "Conta.hpp"

class ContaCorrente : public Conta
{
public:
	// Construtora
	ContaCorrente(int _numero);

	// Destrutora
	~ContaCorrente();

	void aplicarJurosDiarios(int _dias);
};
