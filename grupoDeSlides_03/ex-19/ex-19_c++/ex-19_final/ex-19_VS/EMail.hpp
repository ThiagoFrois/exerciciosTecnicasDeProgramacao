#pragma once

#include "Mensagem.hpp"
#include "Assunto.hpp"

class EMail
{
private:
	Assunto assunto;
	Mensagem mensagem;
public:
	//Construtora
	EMail();

	//Destrutoras
	~EMail();

	void setConteudoAssunto(const char* s);
	void addTextoMensagem(const char* s);

	void mostraDados();
};