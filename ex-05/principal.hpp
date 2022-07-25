#pragma once

#include "pessoa.hpp"

class Principal
{
private:
    Pessoa Einstein, Newton;

public:
    Principal();
    ~Principal();

    void ImprimeDadosPessoa(Pessoa pessoa);

    void Executar();
};
