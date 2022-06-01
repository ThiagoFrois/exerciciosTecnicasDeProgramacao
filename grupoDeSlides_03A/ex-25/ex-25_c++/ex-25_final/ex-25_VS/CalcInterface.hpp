#pragma once

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class CalcInterface
{
private:
public:
	//Construtora
	CalcInterface();

	//Destrutoras
	~CalcInterface();

	double recebeOperando(int _posicao);

	char recebeOperacao();

	void mostraResultado(double _resultado);
};