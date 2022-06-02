#include "CursoMestrado.hpp"

CursoMestrado::CursoMestrado(int _cargaHorariaMinima, const char* _nome, float _notaDefesa) :
Curso(_cargaHorariaMinima, _nome), notaDefesa(_notaDefesa)
{

}

CursoMestrado::~CursoMestrado()
{

}

bool CursoMestrado::cumpriuCriterios(int _cargaHoraria, float _nota)
{
	if (_cargaHoraria >= cargaHorariaMinima && _nota >= notaDefesa)
		return true;
	else
		return false;
}