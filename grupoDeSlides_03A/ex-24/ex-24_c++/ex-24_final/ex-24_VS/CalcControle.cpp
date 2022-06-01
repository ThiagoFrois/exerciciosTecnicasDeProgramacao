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

		//Obtém o operador e o próximo número para num2 em dados
		op = interface->recebeOperacao();

		if (op == 's')
			exit(0);
		dados->setOperador(op);
		dados->setOperando(2, interface->recebeOperando(2));
	}


}

//Funções Set's
void CalcControle::setInterface(CalcInterface* _interface)
{
	interface = _interface;
}

void CalcControle::setDados(CalcDados* _dados)
{
	dados = _dados;
}


double CalcControle::operar(double _num1, double _num2, char _opcao)
{
	switch (_opcao)
	{
		case SOMA:
			return _num1 + _num2;
			break;
		case SUBTRACAO:
			return _num1 - _num2;
			break;
		case MULTIPLICACAO:
			return _num1 * _num2;
			break;
		case DIVISAO:
			return _num1 / _num2;
			break;
		default:
			cout << "Operação inválida." << endl;
	};
}