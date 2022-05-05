#include "CarrinhoDeCompras.hpp"

//Construtora
CarrinhoDeCompras::CarrinhoDeCompras() :
quantidade(0)
{

}

//Destrutoras
CarrinhoDeCompras::~CarrinhoDeCompras()
{

}

void CarrinhoDeCompras::adicionarItem(Item i)
{
	if (quantidade == CAPACIDADE_MAX_CARRINHO)
	{
		cout << "Carinho Cheio!" << endl;
		return;
	}
	itens[quantidade] = i;
	quantidade++;
}

void CarrinhoDeCompras::removerItem(Item i)
{
	int j, quant;
	int pos = 0;
	for (j = 0; j < quantidade; j++)
	{
		if (!strcmp(itens[j].getNome(), i.getNome()))
		{
			quant = itens[j].getQuantidade();
			if(quant == i.getQuantidade())
				itens[j] = Item();
			itens[j].setQuantidade(quant - i.getQuantidade());
			pos = j;
		}
	}
	if (itens[pos].getQuantidade() == 0)
	{
		for (j = pos; j <= quantidade - 1; j++)
		{
			itens[j] = itens[j + 1];
		}
		quantidade--;
	}
}

float CarrinhoDeCompras::getValorTotal()
{
	float valor = 0;
	for (int i = 0; i < quantidade; i++)
	{
		valor += itens[i].getValorTotal();
	}

	return valor;
}