#pragma once

#include <iostream>

#pragma warning(disable:4996)

class Familia;

class Pessoa
{
private:
	char nome[50];
	Pessoa* pais[2];
	int numFilhos;
	Familia* familia;
	Pessoa* filhos[10];
public:
	// Construtora
	Pessoa(const char* _nome = "", Pessoa* _pai = nullptr, Pessoa* _mae = nullptr);

	// Destrutora
	~Pessoa();

	// Fun��es Set's
	void setFamilia(Familia* _familia);

	// Fun��es Get's
	const char* getNomeCompleto();
	Familia* getFamilia();

	void adicionaFilho(Pessoa* _filho);

};