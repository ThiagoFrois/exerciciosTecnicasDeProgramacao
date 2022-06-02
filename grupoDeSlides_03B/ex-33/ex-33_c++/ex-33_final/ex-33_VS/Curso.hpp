#pragma once

#pragma warning(disable:4996)

#include <iostream>

class Curso
{
protected:
	int cargaHorariaMinima;
	char nome[30];
public:
	// Construtora
	Curso(int _cargaHorariaMinima = 45, const char* _nome = "");

	// Destrutora
	~Curso();

	// Função Get
	const char* getNome();

	// Verifica se cumpriu a carga horário minima estipulada
	bool cumpriuCriterios(int _cargaHoraria);
};
