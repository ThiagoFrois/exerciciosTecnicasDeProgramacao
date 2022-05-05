#pragma once

#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.hpp"

class Familia
{
private:
	char sobrenome[30];
	Pessoa chefe, conjuge;
	Pessoa filhos[10];
	int numFilhos;
public:
	//Construtoras
	Familia(const char* nome);
	Familia();

	//Destrutoras
	~Familia();

	//Fun��es Set's
	void setChefe(Pessoa che);
	void setConjuge(Pessoa con);

	//Fun��es Get's
	const char* getSobrenome();

	void listarArvoreFamiliar();

	void adicionaFilho(Pessoa filho);
};