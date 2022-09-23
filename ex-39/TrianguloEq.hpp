#pragma once

#include <cmath>

#include "PolReg.hpp"

class TrianguloEq : public PolReg
{
public:
	double CalcArea();

	TrianguloEq(double tamLado);
	TrianguloEq();
	~TrianguloEq();
};