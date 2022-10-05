#pragma once

#include "Pessoa.hpp"
#include "Cliente.hpp"
#include "Vendedor.hpp"
#include <time.h>

class Loja {
private:
    //os dois objetos que são criados quando é chamado a construtora
    Cliente* cliente;
    Vendedor* vendedor;
    
    //padrão singleton:
    static Loja* loja;
    Loja();
public:
    ~Loja();
    Pessoa* getObjeto(const int i);
    Loja* getLoja();
};