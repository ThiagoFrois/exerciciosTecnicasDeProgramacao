#include "Principal.hpp"

// Inicializa os dados de Einstein e Newton
Principal::Principal() :
Einstein(14, 3, 1879, "Albert Einstein", &Princeton), Newton(4, 1, 1643, "Isaac Newton", &Cambrigde),
Princeton("Princeton"), Cambrigde("Cambridge")
{

}

Principal::~Principal()
{

}

// Imprime os dados de Einstein e Newton
void Principal::executar()
{
	Einstein.imprimeDados();
	Newton.imprimeDados();
}