#include "aluno.h"

Aluno::Aluno(const std::string &nome, int primeiraNotaParcial,
             int segundaNotaParcial)
    : mNome(nome), mPrimeiraNotaParcial(primeiraNotaParcial),
      mSegundaNotaParcial(segundaNotaParcial)
{

}

Aluno::~Aluno()
{

}

void Aluno::SetNome(const std::string &nome)
{
  mNome = nome;
}

void Aluno::SetPrimeiraNotaParcial(int primeiraNotaParcial)
{
  mPrimeiraNotaParcial = primeiraNotaParcial;
}

void Aluno::SetSegundaNotaParcial(int segundaNotaParcial)
{
  mSegundaNotaParcial = segundaNotaParcial;
}

const std::string &Aluno::GetNome() const
{
  return mNome;
}

int Aluno::GetPrimeiraNotaParcial() const
{
  return mPrimeiraNotaParcial;
}

int Aluno::GetSegundaNotaParcial() const
{
  return mSegundaNotaParcial;
}
