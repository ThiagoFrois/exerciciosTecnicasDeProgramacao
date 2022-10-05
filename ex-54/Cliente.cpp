#include "Cliente.hpp"

Cliente::Cliente(const int id, bool ehVendedor, std::string nome):
    Pessoa(id, ehVendedor, nome), credito(0)
{
    
}

Cliente::~Cliente(){

}

void Cliente::setCredito(int credito){
    this->credito = credito;
}

int Cliente::getCredito(){
    return credito;
}