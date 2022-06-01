#include "Universidade.hpp"

//Construtoras
Universidade::Universidade(const char* _nome)
{
	strcpy(nome, _nome);
}

//Destrutora
Universidade::~Universidade()
{

}

const char* Universidade::getNome()
{
	return nome;
}