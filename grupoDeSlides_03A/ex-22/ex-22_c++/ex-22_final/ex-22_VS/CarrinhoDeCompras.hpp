#pragma once

#include "Item.hpp"
#define CAPACIDADE_MAX_CARRINHO 10

class CarrinhoDeCompras
{
private:
	int quantidade;
	Item itens[CAPACIDADE_MAX_CARRINHO];
public:
	//Construtora
	CarrinhoDeCompras();

	//Destrutora
	~CarrinhoDeCompras();

	void adicionarItem(Item _item);
	void removerItem(Item _item);

	float getValorTotal();
};