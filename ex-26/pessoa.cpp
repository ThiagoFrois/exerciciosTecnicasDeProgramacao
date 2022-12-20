#include "pessoa.h"

#include <iostream>

#include "familia.h"

Pessoa::Pessoa(const std::string &nome, const Familia *pFamilia)
    : mNome(nome), mpFamilia(pFamilia), mpPais(), mpFilhos()
{

}

Pessoa::~Pessoa()
{

}

bool Pessoa::AdicionarFilho(Pessoa *pFilho)
{
  if (pFilho == nullptr) {
    std::cout << "Erro: tentou-se adicionar filho nulo." << std::endl;
    return false;
  }
  mpFilhos.push_back(pFilho);
  std::cout << "Adicionado " << pFilho->GetNome() << " como filho de " << mNome
            << "." << std::endl;
  return pFilho->AdicionarPai(this);
}

const std::string &Pessoa::GetNome() const
{
  return mNome;
}

const std::string Pessoa::GetNomeCompleto() const
{
  if (mpFamilia == nullptr) {
    return mNome;
  } else {
    return ((mNome + " ") + mpFamilia->GetSobrenome());
  }
}

void Pessoa::ImprimirPais() const
{
  std::cout << "Pais de " << mNome << ":\n";
  for (auto pPai : mpPais)
    std::cout << pPai->GetNome() << "\n";
  std::cout << std::flush;
}

void Pessoa::ImprimirFilhos() const
{
  std::cout << "Filhos de " << mNome << ":\n";
  for (auto pFilho : mpFilhos)
    std::cout << pFilho->GetNome() << "\n";
  std::cout << std::flush;
}

bool Pessoa::AdicionarPai(Pessoa *pPai)
{
  if (pPai == nullptr) {
    std::cout << "Erro: tentou-se adicionar pai nulo." << std::endl;
    return false;
  }
  mpPais.push_back(pPai);
  std::cout << "Adicionado " << pPai->GetNome() << " como pai de " << mNome
            << "." << std::endl;
  return true;
}
