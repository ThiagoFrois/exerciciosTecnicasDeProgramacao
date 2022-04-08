#include "Universidade.hpp"

//Construtoras
Universidade::Universidade(const char* n)
{
	strcpy(nome, n);
}

Universidade::Universidade()
{

}

//Destrutora
Universidade::~Universidade()
{

}

const char* Universidade::getNome()
{
	return nome;
}