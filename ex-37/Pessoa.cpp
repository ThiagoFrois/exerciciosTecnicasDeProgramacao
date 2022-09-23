#include "Pessoa.hpp"

void Pessoa::MostrarDados()
{
    std::cout << "Nome da pessoa: " << m_nome << std::endl;
    std::cout << "Idade da pessoa: " << m_idade << std::endl;

}

Pessoa::Pessoa(std::string nome, int idade) :
m_nome{nome}, m_idade{idade}
{

}

Pessoa::Pessoa()
{

}
	
Pessoa::~Pessoa()
{

}