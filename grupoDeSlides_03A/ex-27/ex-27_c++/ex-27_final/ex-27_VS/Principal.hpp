#pragma once

#include "Triangulo.hpp"

using std::cout;
using std::endl;
using std::cin;

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