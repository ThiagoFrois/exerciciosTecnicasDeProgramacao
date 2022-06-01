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

void Assunto::setTexto(const char* _texto)
{
	strcpy(texto, _texto);
}

const char* Assunto::getTexto()
{
	return texto;
}