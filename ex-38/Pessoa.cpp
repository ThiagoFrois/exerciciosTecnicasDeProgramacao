#include "Pessoa.hpp"

int Pessoa::m_quantidadePessoas{0};

void Pessoa::MostrarDados()
{
    std::cout << std::endl << "Quantidade de pessoas no sistema: " << m_quantidadePessoas << std::endl; 
    std::cout << "Nome da pessoa: " << m_nome << std::endl;
    std::cout << "Idade da pessoa: " << m_idade << std::endl;

}

Pessoa::Pessoa(std::string nome, int idade) :
m_nome{nome}, m_idade{idade}
{
    m_quantidadePessoas++;
}

Pessoa::Pessoa()
{

}
	
Pessoa::~Pessoa()
{

}