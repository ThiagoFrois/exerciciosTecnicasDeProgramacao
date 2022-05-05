#include "CalcInterface.hpp"

//Construtora
CalcInterface::CalcInterface()
{

}

//Destrutoras
CalcInterface::~CalcInterface()
{

}

double CalcInterface::recebeOperando(int i)
{
	double n;
	cout << "Entrada " << i << ": ";
	cin >> n;

	return n;
}

char CalcInterface::recebeOperacao()
{
	char op;
	cout << "Operação: ";
	cin >> op;

	return op;
}

void CalcInterface::mostraResultado(double res)
{
	cout << "Resultado: " << res << endl;
}