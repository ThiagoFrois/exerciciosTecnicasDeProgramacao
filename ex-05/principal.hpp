#pragma once

#include "pessoa.hpp"

class Principal
{
public:
  Principal();
  ~Principal();

  void ImprimeDadosPessoa(Pessoa pessoa);

  void Executar();

private:
  Pessoa Einstein, Newton;
};
