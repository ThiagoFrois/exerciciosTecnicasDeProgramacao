#include "carrinho_de_compras.h"

#include <iostream>

CarrinhoDeCompras::CarrinhoDeCompras() : mNumItens(0)
{
  for (int i = 0; i < 16; ++i)
    mpItens[i] = nullptr;
}

CarrinhoDeCompras::~CarrinhoDeCompras()
{

}

bool CarrinhoDeCompras::AdicionarItem(const Item *pI)
{
  if (pI == nullptr) {
    std::cout << "Erro: tentou-se adicionar item nulo ao carrinho. "
              << "Item nao adicionado." << std::endl;
    return false;
  } else if (mNumItens >= 16) {
    std::cout << "Erro: carrinho cheio. " << pI->GetNome() << " nao adicionado."
              << std::endl;
    return false;
  } else {
    mpItens[mNumItens++] = pI;
    std::cout << pI->GetNome() << " adicionado ao carrinho." << std::endl;
    return true;
  }
}

bool CarrinhoDeCompras::RemoverItem(const Item *pI)
{
  if (pI == nullptr) {
    std::cout << "Erro: tentou-se remover item nulo do carrinho." << std::endl;
    return false;
  } else {
    int i = 0;
    while (i < mNumItens) {
      if (pI == mpItens[i])
        break;
      ++i;
    }
    if (i == mNumItens) {
      std::cout << "Erro: nao se encontrou " << pI->GetNome()
                << " no carrinho. Item nao removido." << std::endl;
      return false;
    } else {
      while (i < mNumItens - 1) {
        mpItens[i] = mpItens[i + 1];
        ++i;
      }
      mpItens[--mNumItens] = nullptr;
      std::cout << pI->GetNome() << " removido do carrinho." << std::endl;
      return true;
    }
  }
}

double CarrinhoDeCompras::GetValorTotal() const
{
  double soma = 0.0;
  for (int i = 0; i < mNumItens; ++i)
    soma += mpItens[i]->GetValorTotal();
  return soma;
}
