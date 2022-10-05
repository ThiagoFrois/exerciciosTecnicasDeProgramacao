#include "Principal.hpp"

Principal::Principal():
    DAO(nullptr), num(-1)
{
    Aluno aluno = inicializacao();
    executar(aluno);
}

Principal::~Principal(){

}

const bool Principal::situacao(Aluno aluno){
    return (calcMedia(aluno) > 60.0) ? true : false;
}

const float Principal::calcMedia(Aluno aluno){
    return (aluno.getNota1() + aluno.getNota2())/2;
}

const Aluno Principal::inicializacao(){
    Aluno aluno;
    while(num != 1 && num != 2){
        system("cls");
        std::cout << "1 - DAO Arquivo de Texto(Acessar dados salvos)" << std::endl;
        std::cout << "2 - DAO Entrada Padrao(console)" << std::endl;
        std::cout << "Digito: ";
        std::cin >> num;

        switch (num){
            case 1:
                DAO = static_cast<DAOAbstrato*>(new DAOArquivo());
                break;
            case 2:
                DAO = static_cast<DAOAbstrato*>(new DAOEntrada());
                break;
            default:
                std::cout << "Entrada invalida!" << std::endl;
                system("pause");
                break;
        }
    }
    DAO->executar();
    return DAO->getAluno();
}

void Principal::executar(Aluno aluno){
    system("cls");
    std::cout << "Nome: " << aluno.getNome() << std::endl;
    std::cout << "==========" << std::endl;
    std::cout << "Nota 1: " << aluno.getNota1() << std::endl;
    std::cout << "Nota 2: " << aluno.getNota2() << std::endl;
    std::cout << "Media: " << calcMedia(aluno) << std::endl;
    std::cout << "==========" << std::endl;
    if(situacao(aluno)){
        std::cout << "Aprovado!" << std::endl;
    } else {
        std::cout << "Reprovado!" << std::endl;
    }
}