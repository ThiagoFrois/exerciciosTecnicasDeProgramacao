#pragma once

#include "Loja.hpp"

class Principal {
private:
    Loja* loja;
public:
    Principal();
    ~Principal();
    void executar();
};