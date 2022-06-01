#pragma once 

#include <iostream>
using std::cout;
using std::endl;

#include "CalcInterface.hpp"
#include "CalcDados.hpp"

enum ops {SOMA = '+', SUBTRACAO = '-', MULTIPLICACAO = '*', DIVISAO = '/'};

class CalcControle
{
private:
	CalcInterface* interface;
	CalcDados* dados;
public:
	//Construtora
	CalcControle();

	//Destrutoras
	~CalcControle();

	void executar();

	//Funções Set's
	void setInterface(CalcInterface* inter);
	void setDados(CalcDados* d);

private:
	double operar(double opn1, double opn2, char op);
};