#pragma once

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::endl;

class Empregado
{
protected:
	char nome[30];
	char cargo[30];
	int cpf;
public:
	// Construtora
	Empregado(const char* _nome = "", int _cpf = 0, const char* _cargo = "");

	// Destrutora
	~Empregado();

	virtual void mostraDados();

	virtual double calculaSalario(int _horasTrabalhadas);
};

