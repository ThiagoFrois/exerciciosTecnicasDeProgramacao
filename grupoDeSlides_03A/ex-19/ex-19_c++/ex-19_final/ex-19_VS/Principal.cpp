#include "Principal.hpp"

Principal::Principal()
{
	email.setConteudoAssunto("Ex-19 - Rela��o entre classes");
	email.addTextoMensagem("Exerc�cio com o conceito de composi��o de classes.");

}

Principal::~Principal()
{

}

void Principal::executar()
{
	email.mostraDados();
}