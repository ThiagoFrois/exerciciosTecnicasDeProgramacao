#pragma once

#include <iostream>

class Pessoa {
protected:
    std::string nome;
    const int id;
    bool ehVendedor;
public:
    Pessoa(const int id, bool ehVendedor, std::string nome = "");
    ~Pessoa();
    bool getVendedor();
};