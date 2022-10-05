#include "Pessoa.hpp"


Pessoa::Pessoa(const int id, bool ehVendedor, std::string nome):
    id(id), ehVendedor(ehVendedor), nome(nome)
{
    
}

Pessoa::~Pessoa(){
    
}

bool Pessoa::getVendedor(){
    return ehVendedor;
}