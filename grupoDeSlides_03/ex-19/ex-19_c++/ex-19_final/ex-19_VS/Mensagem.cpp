#include "Mensagem.hpp"

//Construtora
Mensagem::Mensagem()
{
	strcpy(texto, "");
}

//Destrutoras
Mensagem::~Mensagem()
{

}

void Mensagem::addMensagem(const char * t)
{
	strcpy(texto, t);
}

const char* Mensagem::getMensagem()
{
	return texto;
}