#include "Familia.hpp"

//Construtora
Familia::Familia(const char* _sobrenome) : 
filhos{nullptr}, numFilhos(0)
{
	chefe = nullptr;
	conjuge = nullptr;
	strcpy(sobrenome, _sobrenome);
}

//Destrutora
Familia::~Familia()
{

}

//Funções Set's
void Familia::setChefe(Pessoa* _chefe)
{
	chefe = _chefe;
	chefe->setFamilia(this);
}

void Familia::setConjuge(Pessoa* _conjuge)
{
	conjuge = _conjuge;
	conjuge->setFamilia(this);
}

//Funções Get's
const char* Familia::getSobrenome()
{
	return sobrenome;
}

void Familia::listarArvoreFamiliar()
{
	cout << "------------- Familia " << sobrenome << " ------------------" << endl << endl;

	if(chefe != nullptr)
		cout << "Chefe da família: " << chefe->getNomeCompleto() << " " << sobrenome << endl;
	if(conjuge != nullptr)
		cout << "Cônjuge: " << conjuge->getNomeCompleto() << " " << sobrenome << endl;

	cout << endl << "Filhos:" << endl;

	// Imprime o nome dos filhos da familia
	for (int i = 0; i < numFilhos; i++)
	{
		cout << filhos[i]->getNomeCompleto() << " " << sobrenome << endl;
	}

	cout << endl;

	// Imprime a árvore familiar a partir dos filhos (se existir)
	for (int i = 0; i < numFilhos; i++)
	{
		Familia* f = filhos[i]->getFamilia();
		if (f != nullptr)
			f->listarArvoreFamiliar();
			
	}
}

void Familia::adicionaFilho(Pessoa* _filho)
{
	filhos[numFilhos] = (Pessoa*)(_filho->getNomeCompleto());
	if(chefe != nullptr)
		chefe->adicionaFilho(filhos[numFilhos]);
	if(conjuge != nullptr)
		conjuge->adicionaFilho(filhos[numFilhos]);
	numFilhos++;
}