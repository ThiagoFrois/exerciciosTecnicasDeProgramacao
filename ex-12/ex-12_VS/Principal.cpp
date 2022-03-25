#include "Principal.hpp"

Principal::Principal() :
v1{4, 3}, v2{10, 5}
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
    Vetor soma = v1 + v2;
    Vetor mult1 = v1*4;
    Vetor mult2 = v2*2;
    std::cout << "Soma dos vetores: <" << soma.getDx() << "," << soma.getDy() << ">"<< std::endl;
    std::cout << "Multiplicação vetor 1: <" << mult1.getDx() << "," << mult1.getDy() << ">" << std::endl;
    std::cout << "Multiplicação vetor 2: <" << mult2.getDx() << "," << mult2.getDy() << ">" << std::endl;
}
