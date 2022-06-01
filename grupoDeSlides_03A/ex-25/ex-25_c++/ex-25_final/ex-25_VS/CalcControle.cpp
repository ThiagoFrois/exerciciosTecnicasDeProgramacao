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
	// Entrada dos primeiros dois números e um operador
	dados->setOperando(1, interface->recebeOperando(1));
	op = interface->recebeOperacao();

	if (op == 's')
		exit(0);
	dados->setOperador(op);
	dados->setOperando(2, interface->recebeOperando(2));

	while (true)
	{
		// Guarda em num1 de dados
		dados->setOperando(1, operar(dados->getOperando(1), dados->getOperando(2), dados->getOperador()));

		// Imprime na tela o resultado
		interface->mostraResultado(dados->getOperando(1));

		//Obtém o operador
		op = interface->recebeOperacao();

		if (op == 's') // Verifica se um operador de saída
			exit(0);
		else if (op == 'r') // Verifica se é um operador de resetar dados
		{
			dados->setOperando(1, interface->recebeOperando(1));
			op = interface->recebeOperacao();
			dados->setOperador(op);
			if (op == 's')
				exit(0);
		}
		else // Operado normal
			dados->setOperador(op);
		dados->setOperando(2, interface->recebeOperando(2));
	}
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
		default:
			cout << "Operação inválida." << endl;
			exit(0);
	};
}