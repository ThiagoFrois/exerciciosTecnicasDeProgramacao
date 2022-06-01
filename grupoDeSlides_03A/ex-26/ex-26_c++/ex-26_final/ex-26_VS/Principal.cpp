#include "Principal.hpp"

// Construtora
Principal::Principal()
{
	// Inicializa as pessoas
	Fran = Pessoa("Fran");
	Bobby = Pessoa("Bobby");
	Charlene = Pessoa("Charlene");
	Baby = Pessoa("Baby");
	Lou = Pessoa("Lou");
	Zilda = Pessoa("Zilda");
	Dino = Pessoa("Dino");
	Monica = Pessoa("Monica");
}

// Destrutoras
Principal::~Principal()
{

}

void Principal::executar()
{
	// Configura��o da primeira gera��o
	dinossauroG1 = Familia("Philips");
	dinossauroG1.setChefe(&Lou);
	dinossauroG1.setConjuge(&Zilda);
	dinossauroG1.adicionaFilho(&Fran);

	// Configura��o da segunda gera��o
	dinossauroG2 = Familia("Silva Sauro");
	dinossauroG2.setChefe(&Dino);
	dinossauroG2.setConjuge(&Fran);
	dinossauroG2.adicionaFilho(&Bobby);
	dinossauroG2.adicionaFilho(&Charlene);
	dinossauroG2.adicionaFilho(&Baby);
	
	// Configura��o da terceira gera��o
	dinossauroG3 = Familia("Sinclair");
	dinossauroG3.setConjuge(&Charlene);
	dinossauroG3.adicionaFilho(&Monica);

	// Imprime a �rvore geneal�gica
	dinossauroG1.listarArvoreFamiliar();
}