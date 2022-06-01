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

//Fun��es Set's
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

//Fun��es Get's
const char* Familia::getSobrenome()
{
	return sobrenome;
}

void Familia::listarArvoreFamiliar()
{
	cout << "------------- Familia " << sobrenome << " ------------------" << endl << endl;

	if(chefe != nullptr)
		cout << "Chefe da fam�lia: " << chefe->getNomeCompleto() << " " << sobrenome << endl;
	if(conjuge != nullptr)
		cout << "C�njuge: " << conjuge->getNomeCompleto() << " " << sobrenome << endl;

	cout << endl << "Filhos:" << endl;

	// Imprime o nome dos filhos da familia
	for (int i = 0; i < numFilhos; i++)
	{
		cout << filhos[i]->getNomeCompleto() << " " << sobrenome << endl;
	}

	cout << endl;

	// Imprime a �rvore familiar a partir dos filhos (se existir)
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