#pragma once

#include "Triangulo.hpp"

class Principal
{
private:
	Triangulo triangulo;
public:
	//Construtora
	Principal();

	//Destrutoras
	~Principal();

	void executar();
	
	void getCoordenadas();
};