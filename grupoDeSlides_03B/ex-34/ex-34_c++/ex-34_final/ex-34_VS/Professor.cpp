#include "Professor.hpp"

Professor::Professor(const char* _universidade, int _anoContratacao, const char* _nome, char _genero) :
anoContratacao(_anoContratacao), Pessoa(_nome, _genero)
{
	strcpy(universidade, _universidade);
}

Professor::~Professor()
{

}
// “<nome>, [homem|mulher], nasceu em dd/mm/aa, professor da  
// <universidade> desde <ano de ingresso>”
const char* Professor::obterDescricao()
{
	char descricao[300];
	sprintf(descricao, "%s , %c, nasceu em %2d/%2d/%4d, professor(a) da %s desde %d.", nome, genero, dia, mes, ano, universidade, anoContratacao);

	return descricao;
}