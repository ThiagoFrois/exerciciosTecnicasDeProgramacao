#include "Ponto.hpp"

//Construtora
Ponto::Ponto(int x, int y) :
posX(x), posY(y)
{

}

Ponto::Ponto() :
posX(0), posY(0)
{

}

//Destrutoras
Ponto::~Ponto()
{

}

//Funções Set's
void Ponto::setX(int x)
{
	posX = x;
}

void Ponto::setY(int y)
{
	posY = y;

}

//Funções Get's
int Ponto::getX()
{
	return posX;
}

int Ponto::getY()
{
	return posY;
}

int Ponto::calcDist(Ponto p)
{
	return sqrt(pow(p.posX - posX, 2) + pow(p.posY - posY, 2));
}