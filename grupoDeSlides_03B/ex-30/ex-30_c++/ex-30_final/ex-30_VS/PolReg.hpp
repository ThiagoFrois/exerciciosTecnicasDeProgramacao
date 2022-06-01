#pragma once

class PolReg
{
protected:
	int numLados, tamLado;
public:
	// Construtora
	PolReg(double _tamLado = 1, int _numLados = 3);

	// Destrutora
	~PolReg();

	// Calcula o perimetro do poligono regular
	double calcPerimetro();

	// Calcula o valor dos angulos do poligono regular
	double calcAngulo();

	// A área é zero, pois não é possível calcular a área
	double calcArea();

	// Funções Get's
	int getNumLados();
	double getTamLado();
};