#ifndef CALCCONTROLE_H
#define CALCCONTROLE_H

#include "calc_dados.h"
#include "calc_interface.h"

// Processador da calculadora.
class CalcControle
{
public:
  CalcControle();
  ~CalcControle();

  void SetDados(CalcDados *pDados);
  void SetInterface(const CalcInterface *pInterface);
  void Executar();

private:
  double Operar(double opn1, double opn2, unsigned char op) const;

  CalcDados *mpDados;
  const CalcInterface *mpInterface;
};

#endif
