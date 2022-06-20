#include "Empregado.hpp"

Empregado::Empregado(string _nome, int _cpf, string _cargo) :
nome(_nome), cargo(_cargo), cpf(_cpf)
{

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