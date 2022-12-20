#ifndef TURMA_H_
#define TURMA_H_

#include <string>
#include <vector>

#include "aluno.h"

// Turma para um sistema de controle de notas.
// Agrega fracamente Alunos, assim nao eh responsavel por destrui-los.
class Turma
{
public:
  Turma() = delete;
  Turma(const std::string &nome, int numVagas);
  ~Turma();

  bool MatricularAluno(const Aluno *pAluno);
  bool CancelarAluno(const Aluno *pAluno);
  std::string GerarRelatorio();

private:
  const std::string mNome;
  int mNumVagas;
  std::vector<const Aluno *> mpAlunos;
};

#endif
