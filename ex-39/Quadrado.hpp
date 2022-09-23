#pragma once

#include "PolReg.hpp"

class Quadrado : public PolReg
{
public:
	double CalcArea();

	Quadrado(double tamLado);
	Quadrado();
	~Quadrado();
};