#pragma once

#include <iostream>

#include "TrianguloEq.hpp"
#include "Quadrado.hpp"

class Principal
{
public:
	void Executar();

	Principal();
	~Principal();
private:
	PolReg *p_poligono;
};