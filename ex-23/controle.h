#ifndef CONTROLE_H_
#define CONTROLE_H_

#include <vector>

#include "aluno.h"
#include "turma.h"

// Principal.
class Controle
{
public:
  Controle();
  ~Controle();

  void Executar();

private:
  bool CriarTurma();
  bool MatricularAluno();
  bool CancelarAluno();

  std::vector<Aluno *> mpAlunos;
  Turma *mpTurma;
};

#endif
