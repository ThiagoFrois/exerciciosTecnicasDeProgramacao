#include "CarrinhoDeCompras.hpp"

//Construtora
CarrinhoDeCompras::CarrinhoDeCompras() :
quantidade(0)
{

}

//Destrutora
CarrinhoDeCompras::~CarrinhoDeCompras()
{

}

void CarrinhoDeCompras::adicionarItem(Item _item)
{
	if (quantidade == CAPACIDADE_MAX_CARRINHO)
	{
		cout << "Carinho Cheio!" << endl;
		return;
	}
	itens[quantidade] = _item;
	quantidade++;
}

void CarrinhoDeCompras::removerItem(Item _item)
{
	int j, quant;
	int pos = 0;

	for (j = 0; j < quantidade; j++)
	{
		// Acha o item no vetor
		if (!strcmp(itens[j].getNome(), _item.getNome()))
		{
			quant = itens[j].getQuantidade();
			// Verifica se está retirando um quantidade válida do item
			if (quant > _item.getQuantidade())
				cout << "Não possui no carrinha de compras a quantidade informada!" << endl;
			else // Verifica quanto está retirando do item
				itens[j].setQuantidade(quant - _item.getQuantidade());
			
			// Salva a posição do item
			pos = j;
		}
	}
	// Se o item foi retirado totalmente, todos os outros itens a 
	// frente voltam uma posição no vetor
	if (itens[pos].getQuantidade() == 0)
	{
		for (j = pos; j < quantidade - 1; j++)
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