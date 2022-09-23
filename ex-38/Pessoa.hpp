#pragma once

#include <iostream>
#include <string>

class Pessoa
{
public:
    virtual void MostrarDados();

    Pessoa(std::string nome, int idade);
	Pessoa();
	~Pessoa();
protected:
    std::string m_nome;
    int m_idade;
    static int m_quantidadePessoas;
};
