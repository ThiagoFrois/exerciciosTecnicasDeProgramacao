#pragma once

#include "polReg.hpp"

class Principal
{
public:
  Principal();
  ~Principal();

  void PerguntaEntradas();

  void Executar();

private:
    PolReg poligono;
};
