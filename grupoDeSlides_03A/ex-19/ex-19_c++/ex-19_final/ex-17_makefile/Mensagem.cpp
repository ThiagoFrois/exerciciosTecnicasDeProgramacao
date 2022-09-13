#include <cstring>
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

void Mensagem::addMensagem(const char * _texto)
{
	strcpy(texto, _texto);
}

const char* Mensagem::getMensagem()
{
	return texto;
}