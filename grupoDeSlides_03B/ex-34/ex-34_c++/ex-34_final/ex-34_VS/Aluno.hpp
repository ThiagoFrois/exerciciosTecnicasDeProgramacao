#pragma once

#include "Pessoa.hpp"

class Aluno : public Pessoa
{
private:
	char curso[30];
	char universidade[30];
	int anoIngresso;
public:
	// Construtora
	Aluno(const char* _curso = "", const char* _universidade = "", int _anoIngresso = 1988, const char* _nome = "", char _genero = 'm');

	// Destrutora
	~Aluno();

	const char* obterDescricao();
};
