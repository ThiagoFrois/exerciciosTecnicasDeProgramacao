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

	dados = CalcDados();
	controle.executar();
}