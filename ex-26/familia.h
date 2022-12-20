#ifndef FAMILIA_H_
#define FAMILIA_H_

#include <string>
#include <vector>

#include "pessoa.h"

// Nucleo familiar de duas geracoes: 1..2 pais e * filhos.
// Agrega fortemente as Pessoas que a compoem, assim as destroi ao se destruir.
class Familia
{
public:
  Familia() = delete;
  // Para o caso de valor default, nao cria um conjuge.
  Familia(const std::string &sobrenome, const std::string &nomePrincipal,
          const std::string &nomeConjuge = "");
  ~Familia();

  const std::string &GetSobrenome() const;
  const Pessoa *getPrincipal() const;
  const Pessoa *getConjuge() const;
  const Pessoa *getFilho(int indice) const;
  bool AdicionarFilho(const std::string &nomeFilho);
  void ListarArvoreFamiliar() const;

private:
  const std::string mSobrenome;
  Pessoa *mpPrincipal, *mpConjuge;
  std::vector<Pessoa *> mpFilhos;
};

#endif
