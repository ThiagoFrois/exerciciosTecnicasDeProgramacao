#pragma once

#include "Ponto.hpp"

class Triangulo
{
private:
	Ponto pontos[3];
	int perimetro;
public:
	//Construtora
	Triangulo();

	//Destrutoras
	~Triangulo();

	void setPonto(Ponto p, int i);

	void calcPerimetro();

	int getPerimetro();
};