#include "Pessoa.hpp"
#include "Familia.hpp"

//Construtora
Pessoa::Pessoa(const char* _nome, Pessoa* _pai, Pessoa* _mae) :
pais{nullptr}, numFilhos(0)
{
	familia = nullptr;
	strcpy(nome, _nome);
	pais[0] = _pai;
	pais[1] = _mae;
}

//Destrutora
Pessoa::~Pessoa()
{

}

//Funções Set's
void Pessoa::setFamilia(Familia* _familia)
{
	familia = _familia;
}

//Funções Get's
const char* Pessoa::getNomeCompleto()
{
	return nome;
}

Familia* Pessoa::getFamilia()
{
	return familia;
}

void Pessoa::adicionaFilho(Pessoa* _filho)
{
	filhos[numFilhos] = _filho;
	numFilhos++;
}