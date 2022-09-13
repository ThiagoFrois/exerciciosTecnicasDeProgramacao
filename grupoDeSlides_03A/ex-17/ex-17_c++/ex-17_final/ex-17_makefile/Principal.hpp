#pragma once

#include "Pessoa.hpp"

class Principal
{
private:
	Pessoa Einstein, Newton; 
	Universidade Princeton, Cambrigde;
public:
	//Construtora
	Principal();

	//Destrutora
	~Principal();

	void executar();
};