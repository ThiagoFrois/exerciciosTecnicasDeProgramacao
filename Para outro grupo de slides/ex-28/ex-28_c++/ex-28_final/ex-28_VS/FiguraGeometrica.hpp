#pragma once

#include "Ponto.hpp"
#include <vector>
using std::vector;

class FiguraGeometrica
{
private:
	vector<Ponto*> pontos;
	vector<Ponto*> paux;
	int perimetro;
	int numPontos;
public:
	//Construtora
	FiguraGeometrica();

	//Destrutoras
	~FiguraGeometrica();

	void setPonto(Ponto* p);
	
	void removerPonto(Ponto* p);

	void calcPerimetro();

	int getPerimetro();

	void imprimirTodosPontos();
};
