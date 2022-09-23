#include "Principal.hpp"

void Principal::Executar()
{
    int entrada, idade;
    std::string nome, nomeCurso;

    std::cout << "1 - Pessoa" << std::endl;
    std::cout << "2 - Aluno" << std::endl;
    std::cout << "Escolha o tipo de instância: ";
    std::cin >> entrada;

    if (entrada == 1)
    {
        std::cout << "Preencha os dados da pessoa <nome> <idade>: ";
        std::cin >> nome >> idade;

        p_pessoa = new Pessoa(nome, idade);
    }
    else if (entrada == 2)
    {   
        std::cout << "Preencha os dados do aluno <nome> <idade> <curso>: ";
        std::cin >> nome >> idade >> nomeCurso;
        p_pessoa = new Aluno(nome, idade, nomeCurso);
    }
    else
    {
        std::cout << "Escolha incorreta!" << std::endl;
    }

    p_pessoa->MostrarDados();

}

Principal::Principal()
{

}
	
Principal::~Principal()
{
    delete p_pessoa;
}