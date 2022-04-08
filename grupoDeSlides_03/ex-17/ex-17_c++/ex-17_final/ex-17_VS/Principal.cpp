#include "Principal.hpp"

Principal::Principal() :
Einstein(14, 3, 1879, "Albert Einstein", &Princeton), Newton(4, 1, 1643, "Isaac Newton", &Cambrigde),
Princeton("Princeton"), Cambrigde("Cambridge")
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
	Einstein.imprimeDados();
	Newton.imprimeDados();
}