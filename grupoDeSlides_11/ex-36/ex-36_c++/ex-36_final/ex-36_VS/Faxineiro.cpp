#include "Faxineiro.hpp"

Faxineiro::Faxineiro(string _nome, int _cpf) :
Empregado(_nome, _cpf, "Faxineiro")
{

}

Faxineiro::~Faxineiro()
{

}

void Faxineiro::mostraDados()
{
	cout << "Nome do faxineiro: " << nome << ", CPF: " << cpf << endl;
}

double Faxineiro::calculaSalario()
{
	// Verifica se não realizou hora extra
	if (horasTrabalhadas <= 176)
		return 4.5 * horasTrabalhadas;
	else // Calcula o salário com bsae na hora extra
		return 4.5 * 176 + 6 * (horasTrabalhadas - 176);
}