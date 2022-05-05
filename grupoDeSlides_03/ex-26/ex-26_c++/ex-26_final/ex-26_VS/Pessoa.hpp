#pragma once

#include <iostream>

#pragma warning(disable:4996)

class Pessoa
{
private:
	char nome[50];
	Pessoa* pais[2];
	Pessoa* filhos[10];
	int numFilhos;
public:
	//Construtoras
	Pessoa(const char* n);
	Pessoa();

	//Destrutoras
	~Pessoa();

	//Funções Get's
	const char* getNomeCompleto();

	void adicionaFilho(Pessoa* filho);

	void setPais(Pessoa* pai, Pessoa* mae);
};