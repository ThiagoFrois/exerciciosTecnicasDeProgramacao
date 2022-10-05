#include "DAOEntrada.hpp"

 DAOEntrada::DAOEntrada():
    DAOAbstrato(), arquivoEntrada()
 {

 }

DAOEntrada::~DAOEntrada(){

}
const std::string DAOEntrada::lerNome(){
    std::string nome;
    std::cout << "Nome: ";
    std::cin >> nome;
    return nome;
}

const int DAOEntrada::lerNota1(){
    int nota1;
    std::cout << "Nota 1: ";
    std::cin >> nota1;
    return nota1;
}

const int DAOEntrada::lerNota2(){
    int nota2;
    std::cout << "Nota 2: ";
    std::cin >> nota2;
    return nota2;
}

void DAOEntrada::executar(){
    const std::string nome = lerNome();
    const int n1 = lerNota1();
    const int n2 = lerNota2();
    Aluno aux(n1, n2, nome);
    aluno = aux;
    arquivoEntrada.open("Dados.DAO");
    if(!arquivoEntrada.is_open()){
        std::cout << "Nao foi possivel abrir o arquivo!" << std::endl;
        exit(1);
    }
    arquivoEntrada << aluno.getNome() << " " << aluno.getNota1() << " " << aluno.getNota2(); 
    arquivoEntrada.close();
}