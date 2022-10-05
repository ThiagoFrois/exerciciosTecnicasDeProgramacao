#pragma once

#include <iostream>
#include <string>

class Aluno {
private:
    std::string nome;
    int nota1;
    int nota2;
public:
    Aluno(const int n1, const int n2, const std::string nome = "");
    Aluno(const std::string nome = "");
    ~Aluno();
    void setNota(const int nota1, const int nota2);
    int getNota1();
    int getNota2();
    void setNome(const std::string nome);
    std::string getNome();
};