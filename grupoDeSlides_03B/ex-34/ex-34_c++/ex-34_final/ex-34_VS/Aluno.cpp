#include "Aluno.hpp"

Aluno::Aluno(const char* _curso, const char* _universidade, int _anoIngresso, const char* _nome, char _genero) :
anoIngresso(_anoIngresso), Pessoa(_nome, _genero)
{
	strcpy(curso, _curso);
	strcpy(universidade, _universidade);
}

Aluno::~Aluno()
{

}

// “<nome>, [homem|mulher], nasceu em dd/mm/aa, professor da  
// <universidade> desde <ano de ingresso>”
const char* Aluno::obterDescricao()
{
	char descricao[300];
	sprintf(descricao, "%s , %c, nasceu em %02d/%02d/%04d, cursa %s desde %d.", nome, genero, dia, mes, ano, curso, anoIngresso);

	return descricao;
}