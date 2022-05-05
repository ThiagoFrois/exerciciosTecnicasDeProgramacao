#pragma once

#include <iostream>
using std::cout;
using std::endl;

class CalcDados
{
private:
	double num1, num2;
	char opcao;
public:
	//Construtora
	CalcDados();

	//Destrutoras
	~CalcDados();

	//Funções Set's
	void setOperando(int i, double valor);
	void setOperador(char op);

	//Funções Get's
	double getOperando(int i);
	char getOperador();

};