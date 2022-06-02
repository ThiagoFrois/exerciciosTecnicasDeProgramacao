#pragma once

#include "Aluno.hpp"
#include "Professor.hpp"

#include <iostream>

using std::cout;
using std::endl;

class Principal
{
private:
	Aluno homem;
	Professor mulher;
public:
	// Construtora
	Principal();

	// Destrutora
	~Principal();

	void executar();
};