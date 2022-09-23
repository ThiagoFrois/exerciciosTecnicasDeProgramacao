#pragma once

#include "Pessoa.hpp"

class Aluno : public Pessoa
{
public:
    void MostrarDados();

    Aluno(std::string nome, int idade, std::string nomeCurso);
	Aluno();
	~Aluno();
private:
    std::string m_nomeCurso;
};
