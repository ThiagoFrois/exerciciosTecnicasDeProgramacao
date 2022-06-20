#pragma once

#include <vector>

using std::vector;

#include "Faxineiro.hpp"
#include "Gerente.hpp"

using std::cin;

class Principal
{
private:
	vector<Empregado*> empregados;
public:
	// Construtora
	Principal();

	// Destrutora
	~Principal();

	void executar();
};

