#pragma once

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Departamento
{
private:
	char nome[30];
public:
	//Construtoras
	Departamento(const char* n);
	Departamento();
	
	//Destrutora
	~Departamento();

	const char* getNome();
};