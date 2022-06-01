#include "Departamento.hpp"
#include "Universidade.hpp"

//Construtoras
Departamento::Departamento(const char* _nome)
{
	strcpy(nome, _nome);
	universidade = nullptr;
}

Departamento::~Departamento()
{

}

const char* Departamento::getNome()
{
	return nome;
}

void Departamento::setUniversidade(Universidade* _universidade)
{
	universidade = _universidade;
}

Universidade* Departamento::getUniversidade()
{
	return universidade;
}
