#include "Assunto.hpp"

//Construtora
Assunto::Assunto()
{
	strcpy(texto, "");
}

//Destrutoras
Assunto::~Assunto()
{

}

void Assunto::setTexto(const char* t)
{
	strcpy(texto, t);
}

const char* Assunto::getTexto()
{
	return texto;
}