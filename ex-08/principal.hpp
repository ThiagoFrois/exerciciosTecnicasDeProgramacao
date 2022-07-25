#pragma once

#include "carro.hpp"

class Principal
{
public:
  Principal();
  ~Principal();

  void Executar();

private:
  Carro gol, uno;
};
