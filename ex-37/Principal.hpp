#pragma once

#include "Aluno.hpp"

class Principal
{
public:
    void Executar();

	Principal();
	~Principal();
private:
    Pessoa *p_pessoa;
};
