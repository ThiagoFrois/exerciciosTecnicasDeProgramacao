#include "Quadrado.hpp"

double Quadrado::CalcArea()
{
	return m_tamLado * m_tamLado;
}

Quadrado::Quadrado(double tamLado) :
PolReg{tamLado, 4}
{

}

Quadrado::Quadrado() :
PolReg{1, 3}
{
	
}


Quadrado::~Quadrado()
{

}

