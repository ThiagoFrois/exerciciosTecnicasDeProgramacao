#pragma once

#include "Empregado.hpp"

class Faxineiro : public Empregado
{
public:
	// Construtora
	Faxineiro(string _nome = "", int _cpf = 0);

	// Destrutora
	~Faxineiro();

	void mostraDados();

	double calculaSalario();
};

