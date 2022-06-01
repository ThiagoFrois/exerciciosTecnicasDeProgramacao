#pragma once

#include "Carro.hpp"

class CarroEsporte : public Carro
{
private:
	double tamanhoSpoiler, potenciaExtraTurbo;
	int numAdesivosTuning;
public:
	// Construtora
	CarroEsporte(double _tamanhoSpoiler = 10, double _potenciaExtraTurbo = 1, int _numAdesivosTuning = 1, 
				int _capacidadeMaxima  = 100, int _consumoCarroBase = 20);

	// Destrutora
	~CarroEsporte();

	// Redefinição do método andar da classe carro
	void andar(int _distancia);

	void acelerar();
};