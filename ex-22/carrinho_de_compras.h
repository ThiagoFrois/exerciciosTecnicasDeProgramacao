#ifndef CARRINHO_DE_COMPRAS_H_
#define CARRINHO_DE_COMPRAS_H_

#include "item.h"

// Lista de compras em um site de e-commerce.
// Agrega fracamente Itens, assim nao eh responsavel por destrui-los.
class CarrinhoDeCompras
{
public:
  CarrinhoDeCompras();
  ~CarrinhoDeCompras();

  bool AdicionarItem(const Item *pI);
  bool RemoverItem(const Item *pI);
  double GetValorTotal() const;

private:
  int mNumItens;
  const Item *mpItens[16]; // Array de ponteiros.
};

#endif
