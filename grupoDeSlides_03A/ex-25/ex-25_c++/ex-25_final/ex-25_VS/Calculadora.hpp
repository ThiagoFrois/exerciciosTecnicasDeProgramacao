#pragma once

#include "CalcControle.hpp"

class Calculadora
{
private:
	CalcControle controle;
	CalcDados dados;
	CalcInterface interface;
public:
	//Construtora
	Calculadora();

	//Destrutoras
	~Calculadora();

	void funcionar();
};