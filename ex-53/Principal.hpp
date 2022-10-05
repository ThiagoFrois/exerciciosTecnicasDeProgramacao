#pragma once

#include "Aluno.hpp"
#include "DAOEntrada.hpp"
#include "DAOArquivo.hpp"

class Principal {
private:
    DAOAbstrato *DAO;
    int num;
public:
    Principal();
    ~Principal();
    const bool situacao(Aluno aluno);
    const float calcMedia(Aluno aluno);
    const Aluno inicializacao();
    void executar(Aluno aluno);
};