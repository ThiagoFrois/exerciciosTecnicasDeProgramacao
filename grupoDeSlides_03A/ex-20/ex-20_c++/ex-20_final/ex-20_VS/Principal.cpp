#include "Principal.hpp"

// Inicializa os objetos
Principal::Principal() :
Einstein(14, 3, 1879, "Albert Einstein", &Princeton.getDepartamento()), 
Newton(4, 1, 1643, "Isaac Newton", &Princeton.getDepartamento()),
Princeton("Princeton", Departamento("Fisica")), Cambrigde("Cambridge", Departamento("Fisica"))
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