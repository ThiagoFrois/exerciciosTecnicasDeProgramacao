#include "DAOAbstrato.hpp"

DAOAbstrato::DAOAbstrato():
    aluno()
{

}

DAOAbstrato::~DAOAbstrato(){

}

Aluno DAOAbstrato::getAluno(){
    return aluno;
}

void DAOAbstrato::executar(){
    aluno.setNome(lerNome());
    const int n1 = lerNota1();
    const int n2 = lerNota2();
    aluno.setNota(n1, n2);
}