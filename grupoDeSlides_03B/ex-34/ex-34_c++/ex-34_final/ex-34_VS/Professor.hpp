#pragma once

#include "Pessoa.hpp"

class Professor : public Pessoa
{
private:
	char universidade[30];
	int anoContratacao;
public:
	// Construtora
	Professor(const char* _universidade = "", int _anoContratacao = 1990, const char* _nome = "", char _genero = 'm');

	// Destrutora
	~Professor();

	const char* obterDescricao();
};
