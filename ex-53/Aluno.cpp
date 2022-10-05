#include "Aluno.hpp"

Aluno::Aluno(const int n1, const int n2, const std::string nome):
    nota1(n1), nota2(n2), nome(nome)
{

}

Aluno::Aluno(const std::string nome):
    nota1(-1), nota2(-1), nome(nome)
{

}

Aluno::~Aluno(){

}

void Aluno::setNota(const int nota1, const int nota2){
    this->nota1 = nota1;
    this->nota2 = nota2;
}

int Aluno::getNota1(){
    return nota1;
}

int Aluno::getNota2(){
    return nota2;
}

void Aluno::setNome(const std::string nome){
    this->nome = nome;
}

std::string Aluno::getNome(){
    return nome;
}