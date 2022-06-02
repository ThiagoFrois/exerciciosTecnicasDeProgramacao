#pragma once

#include <iostream>

using std::cout;
using std::endl;

#include "CursoMestrado.hpp"

class Principal
{
private:
	Curso graduacao;
	CursoMestrado mestrado;
public:
	// Construtora
	Principal();

	// Destrutora
	~Principal();

	void executar();
};