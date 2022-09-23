#include "Quadrado.hpp"

Quadrado::Quadrado(double _tamLado) :
PolReg(_tamLado, 4)
{

}

Quadrado::~Quadrado()
{

}

// Redefinição do método calcArea
double Quadrado::calcArea()
{
	return tamLado * tamLado;
}