#pragma once

#include "Complexo.hpp"

class Real : public Complexo
{
public:
	// Construtora
	Real(double _numero = 0);

	// Destrutora
	~Real();

	int sinal();
};