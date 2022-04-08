#pragma once

#include "Departamento.hpp"

class Universidade
{
private:
	Departamento fisica;
	char nome[30];
public:
	//Construtoras
	Universidade(const char* n, Departamento d);
	Universidade();

	//Destrutora
	~Universidade();

	Departamento& getDepartamento();
	const char* getNome();
};