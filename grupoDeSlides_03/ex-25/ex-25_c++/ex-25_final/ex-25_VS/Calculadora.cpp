#include "Calculadora.hpp"


//Construtora
Calculadora::Calculadora()
{

}

//Destrutoras
Calculadora::~Calculadora()
{

}

void Calculadora::funcionar()
{
	controle.setInterface(&interface);
	controle.setDados(&dados);

	cout << "Bem vindo a calculadora++" << endl;

	while (true)
	{
		dados = CalcDados();
		controle.executar();
		cout << endl;
	}
}