#include "Principal.hpp"

//Construtora
Principal::Principal() :
gol(45, 12, "Gol")
{

}

//Destrutora
Principal::~Principal()
{

}

void Principal::setViajem()
{
    int dist = 1;
    float comb = 1;

    cout << "Digite a dist�ncia da viajem, e o n�vel de combust�vel do ve�culo <distancia, combustivel> :";
    cin >> dist >> comb;
    cout << endl;

    gol.viajem(dist, comb);
}

void Principal::executar()
{
    setViajem();
}
