#pragma once 

#pragma warning(disable:4996)

#include <iostream>

class Universidade
{
private:
	char nome[30];
public:
	//Construtora
	Universidade(const char* _nome = "");

	//Destrutora
	~Universidade();

	const char* getNome();
};