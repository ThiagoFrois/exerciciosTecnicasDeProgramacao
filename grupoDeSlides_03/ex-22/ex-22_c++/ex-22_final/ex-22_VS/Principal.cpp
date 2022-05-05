#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
	carrinho.adicionarItem(Item("P�o Franc�s", 0.30, 8));
	carrinho.adicionarItem(Item("Leite", 4.50));
	carrinho.adicionarItem(Item("Queijo", 0.6, 10));
	carrinho.adicionarItem(Item("Presunto", 0.45, 10));

	cout << "Valor total (antes remo��o): R$ " << carrinho.getValorTotal() << endl;

	carrinho.removerItem(Item("Queijo", 0.6, 5));
	carrinho.removerItem(Item("P�o Franc�s", 0.30, 8));

	cout << "Valor total (ap�s remo��o): R$ " << carrinho.getValorTotal() << endl;
}