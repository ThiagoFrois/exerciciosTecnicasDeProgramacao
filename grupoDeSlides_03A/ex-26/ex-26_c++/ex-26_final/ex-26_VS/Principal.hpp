#pragma once

#include "Familia.hpp"

class Principal
{
private:
	// Gerãções da familia dinossauro
	Familia dinossauroG1;
	Familia dinossauroG2;
	Familia dinossauroG3;

	// Pessoas da familia dinossauro
	Pessoa Fran;
	Pessoa Bobby;
	Pessoa Charlene;
	Pessoa Baby;
	Pessoa Lou;
	Pessoa Zilda;
	Pessoa Dino;
	Pessoa Monica;
public:
	//Construtora
	Principal();

	//Destrutora
	~Principal();

	void executar();
};