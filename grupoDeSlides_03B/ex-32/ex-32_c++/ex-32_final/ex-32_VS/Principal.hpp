#pragma once

#include <iostream>

using std::cout;
using std::endl;

#include "Real.hpp"

class Principal
{
private:
	Real real;
	Complexo complexo;
public:
	// Construtora
	Principal();

	// Destrutora
	~Principal();

	void executar();
};