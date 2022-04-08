#include "Universidade.hpp"

//Construtoras
Universidade::Universidade(const char* n, Departamento d)
{
	strcpy(nome, n);
	fisica = d;
}

Universidade::Universidade() :
fisica()
{
	strcpy(nome, "");
}

//Destrutora
Universidade::~Universidade()
{

}

Departamento& Universidade::getDepartamento()
{
	return fisica;
}

const char* Universidade::getNome()
{
	return nome;
}