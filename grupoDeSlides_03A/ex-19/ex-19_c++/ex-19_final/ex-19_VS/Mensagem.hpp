#pragma once

#pragma warning(disable:4996)

#include <iostream>

class Mensagem
{
private:
	char texto[250];
public:
	//Construtora
	Mensagem();

	//Destrutoras
	~Mensagem();

	void addMensagem(const char* _texto);

	const char* getMensagem();
};