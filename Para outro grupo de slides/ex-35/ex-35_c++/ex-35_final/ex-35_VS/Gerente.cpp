#include "Gerente.hpp"

Gerente::Gerente(const char* _nome, int _cpf, int _bonus) :
Empregado(_nome, _cpf, "Gerente"), bonus(_bonus)
{

}

Gerente::~Gerente()
{

}

void Gerente::mostraDados()
{
	cout << "Nome do gerente: " << nome << ", CPF: " << cpf << " bonus: " << bonus << endl;
}

double Gerente::calculaSalario(int _horasTrabalhadas)
{
	if (_horasTrabalhadas < 176)
		return 30 * _horasTrabalhadas + bonus;
	else
		return 4.5 * 176 + bonus;
}