#include "item.h"

Item::Item(const std::string &nome, double valorUnitario, int quantidade)
    : mNome(nome), mValorUnitario(valorUnitario), mQuantidade(quantidade)
{

}

Item::~Item()
{

}

const std::string &Item::GetNome() const
{
  return mNome;
}

double Item::GetValorTotal() const
{
  return mValorUnitario*static_cast<double>(mQuantidade);
}
