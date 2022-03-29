#include "Principal.hpp"


Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
    if(!Einstein.setDataNascimento(14, 3, 1879))
        exit(0);

    Einstein.setNome("Albert Einstein");
    Einstein.setIdade(19, 03, 2022);

    if(!Newton.setDataNascimento(4, 1, 1643))
        exit(0);

    Newton.setNome("Isaac Newton");
    Newton.setIdade(19, 03, 2022);

    Einstein.printIdadeNome();
    Newton.printIdadeNome();
}




