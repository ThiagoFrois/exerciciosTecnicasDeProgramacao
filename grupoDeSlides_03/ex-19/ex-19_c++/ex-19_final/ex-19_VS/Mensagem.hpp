#pragma once

#pragma warning(disable:4996)

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Mensagem
{
private:
	char texto[250];
public:
	//Construtora
	Mensagem();

	//Destrutoras
	~Mensagem();

	void addMensagem(const char* t);

	const char* getMensagem();
};