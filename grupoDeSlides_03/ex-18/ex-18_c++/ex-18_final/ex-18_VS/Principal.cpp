#include "Principal.hpp"

Principal::Principal() :
Einstein(14, 3, 1879, "Albert Einstein", &Princeton, &Princeton.getDepartamento()), 
Newton(4, 1, 1643, "Isaac Newton", &Cambrigde, &Princeton.getDepartamento()),
Princeton("Princeton", Departamento("Fisica")), Cambrigde("Cambridge", Departamento("Fisica"))
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