#include "Principal.hpp"

//Construtora
Principal::Principal() :
gol{45, 12, "Gol"}, uno{40, 14, "Uno"}
{

}

//Destrutora
Principal::~Principal()
{

}

void Principal::executar()
{
    gol.viajem(700, 45);
    uno.viajem(200, 70);
}
