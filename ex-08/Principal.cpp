#include "Principal.hpp"

//Construtora
Principal::Principal() :
gol{45, 12}, uno{40, 14}
{

}

//Destrutora
Principal::~Principal()
{

}

void Principal::executar()
{
    gol.abastecer(20);
    std::cout << "O gol tem atualmente " << gol.getCombAt() << " litros de combustível." << std::endl;

    uno.abastecer(25);
    std::cout << "O uno tem atualmente " << uno.getCombAt() << " litros de combustível." << std::endl;

    uno.andar(150);
    std::cout << "Depois de viajar o uno tem " << uno.getCombAt() << " litros de combustível." << std::endl;

    gol.andar(80);
    std::cout << "Depois de viajar o gol tem " << gol.getCombAt() << " litros de combustível." << std::endl;

}
