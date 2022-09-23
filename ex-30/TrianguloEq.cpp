#include "TrianguloEq.hpp"

TrianguloEq::TrianguloEq(double _tamLado) :
PolReg(_tamLado, 3)
{

}

TrianguloEq::~TrianguloEq()
{

}

// Redefinição do método calcArea
double TrianguloEq::calcArea()
{
	return sqrt(3) * pow(tamLado, 2) / 4;
}