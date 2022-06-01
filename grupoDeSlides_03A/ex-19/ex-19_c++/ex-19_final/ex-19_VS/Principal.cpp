#include "Principal.hpp"

Principal::Principal()
{
	email.setConteudoAssunto("Ex-19 - Relação entre classes");
	email.addTextoMensagem("Exercício com o conceito de composição de classes.");

}

Principal::~Principal()
{

}

void Principal::executar()
{
	email.mostraDados();
}