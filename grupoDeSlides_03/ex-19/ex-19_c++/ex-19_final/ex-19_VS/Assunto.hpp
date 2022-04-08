#pragma once

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Assunto
{
private:
	char texto[50];
public:
	//Construtora
	Assunto();

	//Destrutoras
	~Assunto();

	void setTexto(const char* t);

	const char* getTexto();
};