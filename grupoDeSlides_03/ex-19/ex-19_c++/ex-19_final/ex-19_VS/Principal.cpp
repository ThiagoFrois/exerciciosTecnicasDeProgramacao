#include "Principal.hpp"

Principal::Principal()
{
	email.setConteudoAssunto("Ex-19 - Rela��o entre classes");
	email.addTextoMensagem("Esse � um exercicio simples que exemplifica o funcionando da rela��o de composi��o entre classes.");

}

Principal::~Principal()
{

}

void Principal::executar()
{
	email.mostraDados();
}