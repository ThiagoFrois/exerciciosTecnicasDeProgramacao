#include "Aluno.hpp"

void Aluno::MostrarDados()
{
    std::cout << "Nome do aluno: " << m_nome << std::endl;
    std::cout << "Idade do aluno: " << m_idade << std::endl;
    std::cout << "Curso do aluno: " << m_nomeCurso << std::endl;
}

Aluno::Aluno(std::string nome, int idade, std::string nomeCurso) :
Pessoa{nome, idade}, m_nomeCurso{nomeCurso}
{

}


Aluno::Aluno()
{

}
	
Aluno::~Aluno()
{

}