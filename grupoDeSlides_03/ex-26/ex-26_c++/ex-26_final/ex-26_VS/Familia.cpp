#include "Familia.hpp"

//Construtoras
Familia::Familia(const char* nome) : 
numFilhos(0)
{
	strcpy(sobrenome, nome);
}
Familia::Familia() :
sobrenome(""), numFilhos(0)
{

}

//Destrutoras
Familia::~Familia()
{

}

//Funções Set's
void Familia::setChefe(Pessoa che)
{
	chefe = che;
}

void Familia::setConjuge(Pessoa con)
{
	conjuge = con;
}

//Funções Get's
const char* Familia::getSobrenome()
{
	return sobrenome;
}

void Familia::listarArvoreFamiliar()
{
	cout << "------------- Familia " << sobrenome << " ------------------" << endl << endl;

	cout << "Chefe da família: " << chefe.getNomeCompleto() << " " << sobrenome << endl;
	cout << "Cônjuge: " << conjuge.getNomeCompleto() << " " << sobrenome << endl;

	cout << endl << "Filhos:" << endl;

	for (int i = 0; i < numFilhos; i++)
	{
		cout << filhos[i].getNomeCompleto() << " " << sobrenome << endl;
	}
}

void Familia::adicionaFilho(Pessoa filho)
{
	filhos[numFilhos] = filho;
	filhos[numFilhos].setPais(&chefe, &conjuge);
	chefe.adicionaFilho(&filhos[numFilhos]);
	conjuge.adicionaFilho(&filhos[numFilhos]);
	numFilhos++;
}