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
	// Configuração da primeira geração
	dinossauroG1 = Familia("Philips");
	dinossauroG1.setChefe(&Lou);
	dinossauroG1.setConjuge(&Zilda);
	dinossauroG1.adicionaFilho(&Fran);

	// Configuração da segunda geração
	dinossauroG2 = Familia("Silva Sauro");
	dinossauroG2.setChefe(&Dino);
	dinossauroG2.setConjuge(&Fran);
	dinossauroG2.adicionaFilho(&Bobby);
	dinossauroG2.adicionaFilho(&Charlene);
	dinossauroG2.adicionaFilho(&Baby);
	
	// Configuração da terceira geração
	dinossauroG3 = Familia("Sinclair");
	dinossauroG3.setConjuge(&Charlene);
	dinossauroG3.adicionaFilho(&Monica);

	// Imprime a árvore genealógica
	dinossauroG1.listarArvoreFamiliar();
}