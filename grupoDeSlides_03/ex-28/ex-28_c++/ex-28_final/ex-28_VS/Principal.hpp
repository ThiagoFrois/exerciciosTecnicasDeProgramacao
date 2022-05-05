#pragma once

#include "FiguraGeometrica.hpp"

class Principal
{
private:
	FiguraGeometrica triangulo;
	vector<Ponto> pontos;
	vector<Ponto> aux;
public:
	//Construtora
	Principal();

	//Destrutoras
	~Principal();

	void executar();
	
	void lerPonto();

	void removerPonto();
};