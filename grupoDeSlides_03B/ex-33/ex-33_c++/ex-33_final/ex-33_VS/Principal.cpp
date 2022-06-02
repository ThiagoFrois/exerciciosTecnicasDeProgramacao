#include "Principal.hpp"

Principal::Principal() :
graduacao(3040, "Sistemas de Informação"), mestrado(1200, "Teoria dos Grafos", 7)
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
    if (graduacao.cumpriuCriterios(3100))
        cout << "Cumpriu os critérios da gradução em " << graduacao.getNome() << endl;
    else
        cout << "Nao cumpriu os critérios da gradução em " << graduacao.getNome() << endl;

    if (mestrado.cumpriuCriterios(1210, 6.9))
        cout << "Cumpriu os critérios do mestrado em " << mestrado.getNome() << endl;
    else
        cout << "Nao cumpriu os critérios do mestrado em " << mestrado.getNome()  << endl;
}