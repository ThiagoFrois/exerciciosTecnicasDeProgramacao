#pragma once

#include "Curso.hpp"

class CursoMestrado : public Curso
{
private:
	float notaDefesa;
public:
	// Construtora
	CursoMestrado(int _cargaHorariaMinima = 60, const char* _nome = "", float _notaDefesa = 0);

	// Destrutora
	~CursoMestrado();

	bool cumpriuCriterios(int _cargaHoraria, float _nota);
};
