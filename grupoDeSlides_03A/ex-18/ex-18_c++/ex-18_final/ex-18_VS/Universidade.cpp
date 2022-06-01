#include "Universidade.hpp"

//Construtora
Universidade::Universidade(const char* _nome, Departamento _departamento)
{
	strcpy(nome, _nome);
	fisica = _departamento;

	// Cria um link do departamento para a universidade ao qual ele está contido
	fisica.setUniversidade(this); 
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