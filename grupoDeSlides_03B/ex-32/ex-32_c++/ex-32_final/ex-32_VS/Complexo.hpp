#pragma once

#include <cmath>
#define PI 3.14

class Complexo
{
private:
	double imaginario;
protected:
	double real;
public:
	// Construtora
	Complexo(double _real = 0, double _imaginario = 0);

	// Destrutora
	~Complexo();

	double modulo();
	double angulo();
}; 