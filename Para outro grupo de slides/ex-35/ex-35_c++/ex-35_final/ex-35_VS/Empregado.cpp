#include "Empregado.hpp"

Empregado::Empregado(const char* _nome, int _cpf, const char* _cargo) :
cpf(_cpf)
{
	strcpy(nome, _nome);
	strcpy(cargo, _cargo);
}

Empregado::~Empregado()
{

}

void Empregado::mostraDados()
{
	cout << "Nome: " << nome << ", CPF: " << cpf << " Cargo: " << cargo << endl;
}

double Empregado::calculaSalario(int _horasTrabalhadas)
{
	return 415;
}