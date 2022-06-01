#pragma once

#include "Departamento.hpp"

class Universidade
{
private:
	Departamento fisica;
	char nome[30];
public:
	//Construtora
	Universidade(const char* _nome = "", Departamento _departamento = Departamento());

	//Destrutora
	~Universidade();

	// Retorna o endereço de departamento
	Departamento& getDepartamento();

	const char* getNome();
};