#include "Principal.hpp"

Principal::Principal()
{
	mulher = Professor("Unicamp", 2000, "Roberta", 'f');
	mulher.setDataNascimento(15, 12, 1975);
	homem = Aluno("Física", "Unicamp", 1990, "Roberto", 'm');
}

Principal::~Principal()
{

}

void Principal::executar()
{
	printf(mulher.obterDescricao());
	printf("\n");
	printf(homem.obterDescricao());
	printf("\n");
}