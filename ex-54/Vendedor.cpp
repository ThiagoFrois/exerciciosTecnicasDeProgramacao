#include "Vendedor.hpp"

Vendedor::Vendedor(const int id, bool ehVendedor, std::string nome):
    Pessoa(id, ehVendedor, nome), comissao(0)
{

}

Vendedor::~Vendedor(){

}

void Vendedor::setComissao(int comissao){
    this->comissao += comissao;
}

int Vendedor::getComissao(){
    return comissao;
}