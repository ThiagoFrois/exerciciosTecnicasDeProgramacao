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

	//Destrutoras
	~CarrinhoDeCompras();

	void adicionarItem(Item i);
	void removerItem(Item i);

	float getValorTotal();
};