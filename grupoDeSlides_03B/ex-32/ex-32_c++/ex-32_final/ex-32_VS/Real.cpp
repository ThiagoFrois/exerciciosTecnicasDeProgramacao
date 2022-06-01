#include "Real.hpp"

Real::Real(double numero) :
Complexo(numero)
{

}

Real::~Real()
{

}

int Real::sinal()
{
	if (real >= 0)
		return 1;
	else
		return -1;
}