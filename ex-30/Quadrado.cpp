#include "Quadrado.hpp"

Quadrado::Quadrado(double _tamLado) :
PolReg(_tamLado, 4)
{

}

Quadrado::~Quadrado()
{

}

// Redefini��o do m�todo calcArea
double Quadrado::calcArea()
{
	return tamLado * tamLado;
}