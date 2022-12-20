#ifndef ITEM_H_
#define ITEM_H_

#include <string>

// Item a se comprar em um site de e-commerce.
class Item
{
public:
  Item() = delete;
  Item(const std::string &nome, double valorUnitario, int quantidade);
  ~Item();

  const std::string &GetNome() const;
  double GetValorTotal() const;

private:
  const std::string mNome;
  const double mValorUnitario;
  const int mQuantidade;
};

#endif
