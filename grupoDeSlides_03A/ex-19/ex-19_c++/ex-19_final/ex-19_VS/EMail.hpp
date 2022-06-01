#pragma once

#include "Mensagem.hpp"
#include "Assunto.hpp"

using std::cout;
using std::cin;
using std::endl;

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

	void setConteudoAssunto(const char* _assunto);
	void addTextoMensagem(const char* _mensagem);

	void mostraDados();
};