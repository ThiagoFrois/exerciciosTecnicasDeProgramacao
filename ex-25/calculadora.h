#ifndef CALCULADORA_H_
#define CALCULADORA_H_

#include "calc_dados.h"
#include "calc_interface.h"
#include "calc_controle.h"

// Principal, agrega fortemente todos os componentes.
class Calculadora
{
public:
  Calculadora();
  ~Calculadora();

  void Funcionar();

private:
  CalcDados mDados;
  CalcInterface mInterface;
  CalcControle mControle;
};

#endif
