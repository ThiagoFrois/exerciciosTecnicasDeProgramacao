#include "Pessoa.hpp"

//Construtoras
Pessoa::Pessoa(const char* n) :
pais{nullptr}, numFilhos(0)
{
	strcpy(nome, n);
}

Pessoa::Pessoa() :
nome(""), pais{nullptr}, numFilhos(0)
{

}

//Destrutoras
Pessoa::~Pessoa()
{

}

//Fun��es Set's
void Pessoa::setPais(Pessoa* pai, Pessoa* mae)
{
	pais[0] = pai;
	pais[1] = mae;
}

//Fun��es Get's
const char* Pessoa::getNomeCompleto()
{
	return nome;
}

void Pessoa::adicionaFilho(Pessoa* filho)
{
	filhos[numFilhos] = filho;
	numFilhos++;
}