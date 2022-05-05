#pragma once

#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

class Ponto
{
private:
	int posX, posY;
public:
	//Construtoras
	Ponto(int x, int y);
	Ponto();

	//Destrutoras
	~Ponto();

	//Funções Set's
	void setX(int x);
	void setY(int y);

	//Funções Get's
	int getX();
	int getY();

	int calcDist(Ponto p);
};