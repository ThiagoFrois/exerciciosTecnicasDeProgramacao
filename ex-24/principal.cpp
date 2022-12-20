#include "principal.h"

#include "calc_dados.h"
#include "calc_interface.h"
#include "calc_controle.h"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::Executar()
{
  // Instancia.
  CalcDados dados;
  CalcInterface interface;
  CalcControle controle;
  // Estabelece associacoes.
  controle.SetDados(&dados);
  controle.SetInterface(&interface);
  // Executa.
  controle.Executar();
}
