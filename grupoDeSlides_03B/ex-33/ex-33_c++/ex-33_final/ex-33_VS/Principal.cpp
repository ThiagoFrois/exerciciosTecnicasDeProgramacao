#include "Principal.hpp"

Principal::Principal() :
graduacao(3040, "Sistemas de Informa��o"), mestrado(1200, "Teoria dos Grafos", 7)
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
    if (graduacao.cumpriuCriterios(3100))
        cout << "Cumpriu os crit�rios da gradu��o em " << graduacao.getNome() << endl;
    else
        cout << "Nao cumpriu os crit�rios da gradu��o em " << graduacao.getNome() << endl;

    if (mestrado.cumpriuCriterios(1210, 6.9))
        cout << "Cumpriu os crit�rios do mestrado em " << mestrado.getNome() << endl;
    else
        cout << "Nao cumpriu os crit�rios do mestrado em " << mestrado.getNome()  << endl;
}