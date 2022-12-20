#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
#include <vector>

class Familia;

// Individuo pertencente a uma unica familia.
class Pessoa
{
public:
  Pessoa() = delete;
  Pessoa(const std::string &nome, const Familia *pFamilia);
  ~Pessoa();

  bool AdicionarFilho(Pessoa *pFilho);
  const std::string &GetNome() const;
  const std::string GetNomeCompleto() const;
  void ImprimirPais() const;
  void ImprimirFilhos() const;

private:
  // Chamada somente internamente.
  bool AdicionarPai(Pessoa *pPai);

  const std::string mNome;
  const Familia *const mpFamilia;
  std::vector<const Pessoa *> mpPais, mpFilhos;
};

#endif
