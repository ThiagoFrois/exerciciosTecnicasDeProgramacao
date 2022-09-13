#pragma once

#pragma warning(disable:4996)

#include <iostream>

class Assunto
{
private:
	char texto[50];
public:
	//Construtora
	Assunto();

	//Destrutora
	~Assunto();

	void setTexto(const char* _texto);

	const char* getTexto();
};