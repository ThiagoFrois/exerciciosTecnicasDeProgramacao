#include "Departamento.hpp"

//Construtoras
Departamento::Departamento(const char* n)
{
	strcpy(nome, n);
}

Departamento::Departamento()
{
	strcpy(nome, "");
}

Departamento::~Departamento()
{

}

const char* Departamento::getNome()
{
	return nome;
}