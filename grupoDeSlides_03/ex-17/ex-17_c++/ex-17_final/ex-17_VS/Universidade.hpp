#pragma once 

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Universidade
{
private:
	char nome[30];
public:
	//Construtoras
	Universidade(const char* n);
	Universidade();

	//Destrutora
	~Universidade();

	const char* getNome();
};