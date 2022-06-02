#include "Curso.hpp"

Curso::Curso(int _cargaHorariaMinima, const char* _nome) :
cargaHorariaMinima(_cargaHorariaMinima)
{
	strcpy(nome, _nome);
}

Curso::~Curso()
{

}


const char* Curso::getNome()
{
	return nome;
}

bool Curso::cumpriuCriterios(int _cargaHoraria)
{
	if (_cargaHoraria < cargaHorariaMinima)
		return false;
	else
		return true;
}