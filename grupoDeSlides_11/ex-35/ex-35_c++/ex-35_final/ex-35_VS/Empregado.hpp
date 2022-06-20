#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Empregado
{
protected:
	string nome;
	string cargo;
	int cpf;
public:
	// Construtora
	Empregado(string _nome = "", int _cpf = 0, string _cargo = "");

	// Destrutora
	~Empregado();

	virtual void mostraDados();

	virtual double calculaSalario(int _horasTrabalhadas);
};

