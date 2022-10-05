#pragma once

#include "DAOAbstrato.hpp"

class DAOEntrada: public DAOAbstrato{
private:
    std::ofstream arquivoEntrada;
public:
    DAOEntrada();
    ~DAOEntrada();
    const std::string lerNome();
    const int lerNota1();
    const int lerNota2();
    void executar();
};