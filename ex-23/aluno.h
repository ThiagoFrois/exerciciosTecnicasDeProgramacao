#ifndef ALUNO_H_
#define ALUNO_H_

#include <string>

// Aluno para um sistema de controle de notas.
class Aluno
{
public:
  Aluno(const std::string &nome = "", int primeiraNotaParcial = -1,
        int segundaNotaParcial = -1);
  ~Aluno();

  void SetNome(const std::string &nome);
  void SetPrimeiraNotaParcial(int primeiraNotaParcial);
  void SetSegundaNotaParcial(int segundaNotaParcial);
  const std::string &GetNome() const;
  int GetPrimeiraNotaParcial() const;
  int GetSegundaNotaParcial() const;

private:
  std::string mNome;
  int mPrimeiraNotaParcial, mSegundaNotaParcial;
};

#endif
