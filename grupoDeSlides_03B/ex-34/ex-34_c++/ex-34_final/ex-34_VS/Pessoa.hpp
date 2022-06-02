#pragma once

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::endl;

class Pessoa
{
protected:
	char nome[30];
	char genero;
	int dia, mes, ano;
public:
	// Construtora
	Pessoa(const char* _nome = "", char _genero = 'm', int _dia = 1, int _mes = 1, int _ano = 1970);

	// Destrutora
	~Pessoa();

	const char* obterDescricao();

	void setDataNascimento(int _dia, int _mes, int _ano);
	void setGenero(char _genero);
};
