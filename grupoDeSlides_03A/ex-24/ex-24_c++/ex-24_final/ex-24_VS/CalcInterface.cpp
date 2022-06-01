#include "CalcInterface.hpp"

//Construtora
CalcInterface::CalcInterface()
{

}

//Destrutoras
CalcInterface::~CalcInterface()
{

}

double CalcInterface::recebeOperando(int _posicao)
{
	double n;
	cout << "Entrada " << _posicao << ": ";
	cin >> n;

	return n;
}

char CalcInterface::recebeOperacao()
{
	char op;
	cout << "Opera��o: ";
	cin >> op;

	return op;
}

void CalcInterface::mostraResultado(double _resultado)
{
	cout << "Resultado: " << _resultado << endl << endl;
}