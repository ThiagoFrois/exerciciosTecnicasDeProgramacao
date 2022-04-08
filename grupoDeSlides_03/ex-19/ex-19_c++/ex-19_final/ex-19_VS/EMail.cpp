#include "EMail.hpp"

//Construtora
EMail::EMail()
{

}

//Destrutoras
EMail::~EMail()
{

}

void EMail::setConteudoAssunto(const char* s)
{
	assunto.setTexto(s);
}

void EMail::addTextoMensagem(const char* s)
{
	mensagem.addMensagem(s);
}

void EMail::mostraDados()
{
	cout << "Assunto: " << assunto.getTexto() << endl << endl;
	cout << "Mensagem:" << endl;
	cout << mensagem.getMensagem() << endl;
}