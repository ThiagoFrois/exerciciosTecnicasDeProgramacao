#include "Triangulo.hpp"

//Construtora
Triangulo::Triangulo()
{

}

//Destrutoras
Triangulo::~Triangulo()
{

}

void Triangulo::setPonto(Ponto p, int i)
{
	pontos[i] = p;
}

void Triangulo::calcPerimetro()
{
	perimetro = pontos[0].calcDist(pontos[1]) + pontos[1].calcDist(pontos[2]) + pontos[2].calcDist(pontos[0]);
}

int Triangulo::getPerimetro()
{
	return perimetro;
}