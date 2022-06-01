#pragma once

#include <iostream>
using std::cout;
using std::endl;

#include "Pessoa.hpp"

class Familia
{
private:
	char sobrenome[30];
	Pessoa* chefe;
	Pessoa* conjuge;

	Pessoa* filhos[10];
	int numFilhos;
public:

	//Construtora
	Familia(const char* _sobrenome = "");

	//Destrutora
	~Familia();

	//Funções Set's
	void setChefe(Pessoa* _chefe);
	void setConjuge(Pessoa* _conjuge);

	//Funções Get's
	const char* getSobrenome();

	void listarArvoreFamiliar();

	void adicionaFilho(Pessoa* _filho);
};