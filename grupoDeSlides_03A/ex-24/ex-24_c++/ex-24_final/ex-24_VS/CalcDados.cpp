#include "CalcDados.hpp"

//Construtora
CalcDados::CalcDados() :
num1(0), num2(0), opcao(' ')
{

}

//Destrutora
CalcDados::~CalcDados()
{

}

//Funções Set's
void CalcDados::setOperando(int _posicao, double _valor)
{
	if (_posicao == 1)
	{
		num1 = _valor;
	}
	else if (_posicao == 2)
	{
		num2 = _valor;
	}
	else
	{
		cout << "Parâmetro Inválido!" << endl;
	}
}

void CalcDados::setOperador(char _opcao)
{
	opcao = _opcao;
}

//Funções Get's
double CalcDados::getOperando(int _posicao)
{
	if (_posicao == 1)
	{
		return num1;
	}
	else if (_posicao == 2)
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