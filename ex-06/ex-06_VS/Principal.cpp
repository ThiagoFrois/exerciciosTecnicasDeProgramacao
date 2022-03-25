#include "Principal.hpp"


Principal::Principal() :
Einstein{14, 3, 1879, "Albert Einstein"}, Newton{4, 1, 1643, "Isaac Newton"}
{
    Einstein.setIdade(21, 3, 2022);
    Newton.setIdade(21, 3, 2022);
}

Principal::~Principal()
{

}

void Principal::executar()
{
    Einstein.printIdadeNome();
    Newton.printIdadeNome();
}




