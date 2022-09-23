#pragma once

#include "PolReg.hpp"

class Quadrado : public PolReg
{
public:
	// Construtora
	Quadrado(double _tamLado = 1);

	// Destrutora
	~Quadrado();

	// Redefini��o do m�todo calcArea
	double calcArea();
};