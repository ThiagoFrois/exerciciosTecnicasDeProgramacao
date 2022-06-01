#include "Complexo.hpp"

Complexo::Complexo(double _real, double _imaginario) :
real(_real), imaginario(_imaginario)
{

}

Complexo::~Complexo()
{

}

double Complexo::modulo()
{
	return sqrt((real * real) + (imaginario * imaginario));
}

double Complexo::angulo()
{
	return  acos(real / modulo()) * 180.0 / PI;
}