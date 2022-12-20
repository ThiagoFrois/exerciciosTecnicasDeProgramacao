#include "calc_dados.h"

#include <cmath>

CalcDados::CalcDados() : mOperandos{NAN, NAN}, mOperacao('\0')
{

}

CalcDados::~CalcDados()
{

}

void CalcDados::SetOperando(int i, double valor)
{
  if (i == 0 || i == 1)
    mOperandos[i] = valor;
}

void CalcDados::SetOperacao(unsigned char op)
{
  if (op == '+' || op == '-' || op == '*' || op == '/')
    mOperacao = op;
}

double CalcDados::GetOperando(int i) const
{
  if (i == 0 || i == 1) {
    return mOperandos[i];
  } else {
    return NAN;
  }
}

unsigned char CalcDados::GetOperacao() const
{
  return mOperacao;
}
