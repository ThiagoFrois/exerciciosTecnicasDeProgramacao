#include "EMail.hpp"

//Construtora
EMail::EMail()
{

}

//Destrutoras
EMail::~EMail()
{

}

void EMail::setConteudoAssunto(const char* _assunto)
{
	assunto.setTexto(_assunto);
}

void EMail::addTextoMensagem(const char* _mensagem)
{
	mensagem.addMensagem(_mensagem);
}

void EMail::mostraDados()
{
	cout << "Assunto: " << assunto.getTexto() << endl;
	cout << "Mensagem:" << endl;
	cout << mensagem.getMensagem() << endl;
}