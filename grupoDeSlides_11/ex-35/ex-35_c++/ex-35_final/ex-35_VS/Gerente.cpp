#include "Gerente.hpp"

Gerente::Gerente(string _nome, int _cpf, int _bonus) :
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
	// Verifica se trabalhou menos do estipulado
	if (_horasTrabalhadas < 176)
		return 30 * _horasTrabalhadas + bonus;
	else // Se trabalhou o estipulado e mais, retorna o mesmo salário.
		return 4.5 * 176 + bonus;
}