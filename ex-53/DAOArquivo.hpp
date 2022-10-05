#pragma once

#include "DAOAbstrato.hpp"

class DAOArquivo: public DAOAbstrato{
private:
    std::ifstream arquivoSaida;
public:
    DAOArquivo();
    ~DAOArquivo();
    const std::string lerNome();
    const int lerNota1();
    const int lerNota2();
    std::string getLinha();
};