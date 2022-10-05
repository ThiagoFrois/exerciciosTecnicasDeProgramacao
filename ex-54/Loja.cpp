#include "Loja.hpp"

Loja* Loja::loja = nullptr;

Loja::Loja():
    cliente(new Cliente(rand()%10 + 1, false)), vendedor(new Vendedor(rand()%10 + 1, true))
{
    
}

Loja::~Loja(){

}

Loja* Loja::getLoja(){
    if(loja == nullptr){
        loja = new Loja();
    }
    return loja;
}

Pessoa* Loja::getObjeto(const int i){
    if(i == 0){
        return static_cast<Pessoa*>(vendedor);
    }
    return static_cast<Pessoa*>(cliente);
}