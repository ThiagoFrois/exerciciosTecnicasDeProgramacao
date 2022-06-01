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

	//Destrutora
	~CalcDados();

	//Fun��es Set's
	void setOperando(int _posicao, double _valor);
	void setOperador(char _opcao);

	//Fun��es Get's
	double getOperando(int _posicao);
	char getOperador();

};