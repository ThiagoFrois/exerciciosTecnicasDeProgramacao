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

	//Fun��es Set's
	void setX(int x);
	void setY(int y);

	//Fun��es Get's
	int getX();
	int getY();

	int calcDist(Ponto p);
};