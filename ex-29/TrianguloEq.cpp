#include "TrianguloEq.hpp"

double TrianguloEq::CalcArea()
{
	return sqrt(3) * pow(m_tamLado, 2) / 4;
}

TrianguloEq::TrianguloEq() :
PolReg{1, 3}
{

}

TrianguloEq::TrianguloEq(double tamLado) :
PolReg{tamLado, 3}
{

}

TrianguloEq::~TrianguloEq()
{

}