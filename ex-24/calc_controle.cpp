#include "calc_controle.h"

#include <cmath>

CalcControle::CalcControle() : mpDados(nullptr), mpInterface(nullptr)
{

}

CalcControle::~CalcControle()
{

}

void CalcControle::SetDados(CalcDados *pDados)
{
  mpDados = pDados;
}

void CalcControle::SetInterface(const CalcInterface *pInterface)
{
  mpInterface = pInterface;
}

void CalcControle::Executar()
{
  if (mpDados == nullptr || mpInterface == nullptr)
    return;
  double valbuf = NAN;
  unsigned char opbuf = '\0';
  valbuf = mpInterface->RecebeOperando(0);
  if (std::isnan(valbuf))
    return;
  mpDados->SetOperando(0, valbuf);
  valbuf = mpInterface->RecebeOperando(1);
  if (std::isnan(valbuf))
    return;
  mpDados->SetOperando(1, valbuf);
  opbuf = mpInterface->RecebeOperacao();
  if (opbuf == '\0')
    return;
  mpDados->SetOperacao(opbuf);
  mpInterface->MostraResultado(Operar(mpDados->GetOperando(0),
                                      mpDados->GetOperando(1),
                                      mpDados->GetOperacao()));
}

double CalcControle::Operar(double opn1, double opn2, unsigned char op) const
{
  double res = NAN;
  switch(op) {
    case '+':
      res = opn1 + opn2;
      break;
    case '-':
      res = opn1 - opn2;
      break;
    case '*':
      res = opn1*opn2;
      break;
    case '/':
      res = opn1/opn2;
      break;
    default:
      break;
  }
  return res;
}
