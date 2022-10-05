#pragma once

#include <iostream>

#include "Aluno.hpp"
#include <fstream>
#include <string>

class DAOAbstrato{
protected:
    Aluno aluno;
public:
    DAOAbstrato();
    ~DAOAbstrato();
    Aluno getAluno();
    virtual const std::string lerNome() = 0;
    virtual const int lerNota1() = 0;
    virtual const int lerNota2() = 0;
    virtual void executar();
};