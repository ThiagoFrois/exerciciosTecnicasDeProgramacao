#pragma once

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Universidade;

class Departamento
{
private:
	char nome[30];
	Universidade* universidade;
public:
	//Construtora
	Departamento(const char* _nome = "");
	
	//Destrutora
	~Departamento();

	const char* getNome();

	void setUniversidade(Universidade* _universidade);
	Universidade* getUniversidade();
};