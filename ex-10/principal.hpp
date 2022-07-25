#pragma once

#include "colaborador.hpp"

class Principal
{
public:
  Principal();
  ~Principal();

  Colaborador GetMaiorRendimento();

  Colaborador GetMaiorCusto();

  void PerguntaDadosColaboradores();

  void Executar();

private:
  Colaborador colaboradores[3];
};
