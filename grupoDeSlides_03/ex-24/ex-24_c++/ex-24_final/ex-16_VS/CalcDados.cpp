#include "CalcDados.hpp"

//Construtora
CalcDados::CalcDados() :
num1(0), num2(0), opcao(' ')
{

}

//Destrutoras
CalcDados::~CalcDados()
{

}

//Fun��es Set's
void CalcDados::setOperando(int i, double valor)
{
	if (i == 1)
	{
		num1 = valor;
	}
	else if (i == 2)
	{
		num2 = valor;
	}
	else
	{
		cout << "Par�metro Inv�lido!" << endl;
	}
}

void CalcDados::setOperador(char op)
{
	opcao = op;
}

//Fun��es Get's
double CalcDados::getOperando(int i)
{
	if (i == 1)
	{
		return num1;
	}
	else if (i == 2)
	{
		return num2;
	}
	else

	{
		cout << "Par�mentro Inv�lido!" << endl;
	}
}

char CalcDados::getOperador()
{
	return opcao;
}