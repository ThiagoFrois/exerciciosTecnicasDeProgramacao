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

	// Redefinição do método calcArea
	double calcArea();
};