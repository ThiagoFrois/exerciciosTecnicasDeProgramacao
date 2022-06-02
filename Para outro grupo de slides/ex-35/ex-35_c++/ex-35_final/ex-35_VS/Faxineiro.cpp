#include "Faxineiro.hpp"

Faxineiro::Faxineiro(const char* _nome, int _cpf) :
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

double Faxineiro::calculaSalario(int _horasTrabalhadas)
{
	if (_horasTrabalhadas <= 176)
		return 4.5 * _horasTrabalhadas;
	else
		return 4.5 * _horasTrabalhadas + 6 * (_horasTrabalhadas - 176);
}