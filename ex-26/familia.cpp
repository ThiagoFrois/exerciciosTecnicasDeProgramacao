#include "familia.h"

#include <iostream>

Familia::Familia(const std::string &sobrenome, const std::string &nomePrincipal,
                 const std::string &nomeConjuge)
    : mSobrenome(sobrenome), mpPrincipal(nullptr), mpConjuge(nullptr),
      mpFilhos()
{
  mpPrincipal = new Pessoa(nomePrincipal, this);
  if (nomeConjuge != "")
    mpConjuge = new Pessoa(nomeConjuge, this);
}

Familia::~Familia()
{
  delete mpPrincipal;
  delete mpConjuge;
  for (auto pFilho : mpFilhos)
    delete pFilho;
}

const std::string &Familia::GetSobrenome() const
{
  return mSobrenome;
}

const Pessoa *Familia::getPrincipal() const
{
  return mpPrincipal;
}

const Pessoa *Familia::getConjuge() const
{
  return mpConjuge;
}

const Pessoa *Familia::getFilho(int indice) const
{
  if (indice < 0 || indice >= static_cast<int>(mpFilhos.size()))
    return nullptr;
  return mpFilhos.at(indice);
}

bool Familia::AdicionarFilho(const std::string &nomeFilho)
{
  Pessoa *pFilho = new Pessoa(nomeFilho, this);
  mpFilhos.push_back(pFilho);
  std::cout << "Adicionado filho " << nomeFilho << " a familia " << mSobrenome
            << "." << std::endl;
  if (!mpPrincipal->AdicionarFilho(pFilho))
    return false;
  if (mpConjuge != nullptr) {
    if (!mpConjuge->AdicionarFilho(pFilho))
      return false;
  }
  return true;
}

void Familia::ListarArvoreFamiliar() const
{
  std::cout << "Pais:\n" << mpPrincipal->GetNomeCompleto() << "\n";
  if (mpConjuge != nullptr)
    std::cout << mpConjuge->GetNomeCompleto() << "\n";
  std::cout << "Filhos:\n";
  for (auto pFilho : mpFilhos)
    std::cout << pFilho->GetNomeCompleto() << "\n";
  std::cout << std::flush;
}
