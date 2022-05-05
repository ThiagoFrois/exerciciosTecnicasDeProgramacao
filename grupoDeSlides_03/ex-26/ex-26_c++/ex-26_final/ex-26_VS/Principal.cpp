#include "Principal.hpp"

//Construtora
Principal::Principal()
{

}

//Destrutoras
Principal::~Principal()
{

}

void Principal::executar()
{
	dinossauro = Familia("Silva Sauro");
	dinossauro.setChefe(Pessoa("Dino"));
	dinossauro.setConjuge(Pessoa("Fran"));
	dinossauro.adicionaFilho(Pessoa("Robert"));
	dinossauro.adicionaFilho(Pessoa("Charlene"));
	dinossauro.adicionaFilho(Pessoa("Baby"));

	dinossauro.listarArvoreFamiliar();
}