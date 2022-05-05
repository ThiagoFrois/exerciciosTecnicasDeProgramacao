#include "CalcControle.hpp"

//Construtora
CalcControle::CalcControle()
{
	interface = nullptr;
	dados = nullptr;
}

//Destrutoras
CalcControle::~CalcControle()
{

}

void CalcControle::executar()
{
	char op;
	dados->setOperando(1, interface->recebeOperando(1));
	op = interface->recebeOperacao();
	if (op == 's')
	{
		exit(0);
	}
	dados->setOperador(op);
	dados->setOperando(2, interface->recebeOperando(2));

	interface->mostraResultado(operar(dados->getOperando(1), dados->getOperando(2), dados->getOperador()));

}

//Funções Set's
void CalcControle::setInterface(CalcInterface* inter)
{
	interface = inter;
}

void CalcControle::setDados(CalcDados* d)
{
	dados = d;
}


double CalcControle::operar(double opn1, double opn2, char op)
{
	switch (op)
	{
		case SOMA:
			return opn1 + opn2;
			break;
		case SUBTRACAO:
			return opn1 - opn2;
			break;
		case MULTIPLICACAO:
			return opn1 * opn2;
			break;
		case DIVISAO:
			return opn1 / opn2;
			break;
		case 's':
			return 's';
			break;
		default:
			cout << "Operação inválida." << endl;
			exit(0);
	};
}