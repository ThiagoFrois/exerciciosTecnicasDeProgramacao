#include "Item.hpp"

//Construtora
Item::Item(const char* _nome, float _valor, int _quantidade) :
valor(_valor), quantidade(_quantidade)
{
	strcpy(nome, _nome);
}

//Destrutora
Item::~Item()
{

}

//Funções Set's
void Item::setQuantidade(int _quantidade)
{
	if (_quantidade < 0)
	{
		cout << "Quantidade inválida!" << endl;
			return;
	}
	quantidade = _quantidade;
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