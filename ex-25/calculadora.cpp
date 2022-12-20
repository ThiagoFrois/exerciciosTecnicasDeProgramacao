#include "calculadora.h"

Calculadora::Calculadora() : mDados(), mInterface(), mControle()
{
  // Estabelece associacoes.
  mControle.SetDados(&mDados);
  mControle.SetInterface(&mInterface);
}

Calculadora::~Calculadora()
{

}

void Calculadora::Funcionar()
{
  mInterface.MostraBoasVindas();
  mDados.Reinicia();
  mControle.Executar();
}
