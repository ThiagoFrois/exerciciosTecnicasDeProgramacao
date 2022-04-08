#pragma once

#include "EMail.hpp"

class Principal
{
private:
	EMail email;
public:
	//Construtoras
	Principal();
	~Principal();

	//Destrutoras
	void executar();
};