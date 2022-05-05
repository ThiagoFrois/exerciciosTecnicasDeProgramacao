#include "Item.hpp"

//Construtoras
Item::Item(const char* n, float v, int q) :
valor(v), quantidade(q)
{
	strcpy(nome, n);
}

Item::Item() :
valor(0), quantidade(0)
{
	strcpy(nome, "");
}

//Destrutora
Item::~Item()
{

}

//Funções Set's
void Item::setQuantidade(int q)
{
	if (q < 0)
	{
		cout << "Quantidade inválida!" << endl;
			return;
	}
	quantidade = q;
}

//Funções Get's
const char* Item::getNome()
{
	return nome;
}

float Item::getValorTotal() 
{
	return valor*quantidade;
}

int Item::getQuantidade()
{
	return quantidade;
}