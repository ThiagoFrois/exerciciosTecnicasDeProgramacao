#include "Principal.hpp"

Principal::Principal():
    loja(nullptr)
{
    srand(time(NULL));
    //cria a loja e os dois objetos
    loja = loja->getLoja();
    executar();
}

Principal::~Principal(){

}

void Principal::executar(){
    int i;
    Pessoa* pessoa = nullptr;
    inicio:
    system("cls");
    std::cout << "0 - Vendedor" << std::endl;
    std::cout << "1 - Cliente" << std::endl;
    std::cout << "Seu digito: ";
    std::cin >> i;
    if(i == 0 || i == 1){
        //retorna o tipo de objeto
        pessoa = loja->getObjeto(i);
    } else {
        goto inicio;
    }
    //diz que tipo de objeto é
    std::cout << "Objeto eh: ";
    if(pessoa->getVendedor()){
        std::cout << "Vendedor" << std::endl;
    } else {
        std::cout << "Cliente" << std::endl;
    }
}