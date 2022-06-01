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
	void setInterface(CalcInterface* _interface);
	void setDados(CalcDados* _dados);

private:
	double operar(double _num1, double _num2, char _opcao);
};