#include "Principal.hpp"

Principal::Principal()
{
	email.setConteudoAssunto("Ex-19 - Relação entre classes");
	email.addTextoMensagem("Esse é um exercicio simples que exemplifica o funcionando da relação de composição entre classes.");

}

Principal::~Principal()
{

}

void Principal::executar()
{
	email.mostraDados();
}