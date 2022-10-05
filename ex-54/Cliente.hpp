#pragma once

#include "Pessoa.hpp"

class Cliente: public Pessoa{
private:
    int credito;
public:
    Cliente(const int id, bool ehVendedor, std::string nome = "");
    ~Cliente();
    void setCredito(int credito);
    int getCredito();
};