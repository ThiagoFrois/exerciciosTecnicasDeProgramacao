#include "principal.h"

#include <iostream>
#include <iomanip>

#include "item.h"
#include "carrinho_de_compras.h"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::Executar()
{
  // Instancia objetos estaticamente.
  Item jogo("Jogo", 400.0, 1), dlc("DLCs", 150.0, 3), skin("Skins", 20.0, 4);
  CarrinhoDeCompras carrinho;
  // Estabelece devidas agregacoes.
  carrinho.AdicionarItem(&jogo);
  carrinho.AdicionarItem(&dlc);
  carrinho.AdicionarItem(&skin);
  // Imprime resultado.
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Custo total: R$ " << carrinho.GetValorTotal() << std::endl;
  // Testa remocao de itens.
  carrinho.RemoverItem(&dlc);
  std::cout << "Novo custo total: R$ " << carrinho.GetValorTotal() << std::endl;
}
