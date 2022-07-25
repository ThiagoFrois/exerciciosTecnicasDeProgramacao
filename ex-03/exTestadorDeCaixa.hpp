#pragma once

#include "caixa.hpp"

class ExTestadorDeCaixa
{
public:
  ExTestadorDeCaixa();
  ~ExTestadorDeCaixa();

  void PerguntaEntradas();

  void MostrarAreaEVolume(Caixa caixa);

  void Executar();

private:
  Caixa caixa1, caixa2;
};
