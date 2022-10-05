#pragma once

#include "Pessoa.hpp"

class Vendedor: public Pessoa {
private:
    int comissao;
public:
    Vendedor(const int id, bool ehVendedor, std::string nome = "");
    ~Vendedor();
    void setComissao(int comissao);
    int getComissao();

};