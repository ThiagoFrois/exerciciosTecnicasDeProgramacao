#include "Principal.hpp"

//Construtora
Principal::Principal() :
gol(80, 20), ferrari()
{

}

//Destrutora
Principal::~Principal()
{

}

void Principal::executar()
{
    gol.abastecer(20);
    cout << "O gol tem atualmente " << gol.getCombustivel() << " litros de combustível." << endl;

    ferrari.abastecer(20);
    ferrari.acelerar();
    cout << "A ferrari tem atualmente " << ferrari.getCombustivel() << " litros de combustível." << endl;

    ferrari.acelerar();
    ferrari.andar(80);
    cout << "Depois de viajar A ferrari tem " << ferrari.getCombustivel() << " litros de combustível." << endl;

    gol.andar(80);
    cout << "Depois de viajar o gol tem " << gol.getCombustivel() << " litros de combustível." << endl;

}
