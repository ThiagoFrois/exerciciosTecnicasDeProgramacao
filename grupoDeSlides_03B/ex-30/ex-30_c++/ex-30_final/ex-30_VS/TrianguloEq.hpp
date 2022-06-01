#pragma once

#include <cmath>

#include "PolReg.hpp"

class TrianguloEq : public PolReg
{
public:
	// Construtora
	TrianguloEq(double _tamLado = 1);

	// Destrutora
	~TrianguloEq();

	// Redefini��o do m�todo calcArea
	double calcArea();
};