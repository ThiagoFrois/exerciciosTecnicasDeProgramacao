#pragma once

#include "Empregado.hpp"

class Gerente : public Empregado
{
private:
	int bonus;
public:
	// Construtora
	Gerente(string _nome = "", int _cpf = 0, int _bonus = 0);

	// Destrutora
	~Gerente();

	void mostraDados();

	double calculaSalario();
};

