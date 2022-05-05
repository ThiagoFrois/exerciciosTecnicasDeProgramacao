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

//Funções Set's
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
		cout << "Parâmetro Inválido!" << endl;
	}
}

void CalcDados::setOperador(char op)
{
	opcao = op;
}

//Funções Get's
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
		cout << "Parâmentro Inválido!" << endl;
	}
}

char CalcDados::getOperador()
{
	return opcao;
}