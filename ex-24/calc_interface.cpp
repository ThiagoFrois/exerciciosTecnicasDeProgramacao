#include "calc_interface.h"

#include <cmath>
#include <iostream>
#include <sstream>

CalcInterface::CalcInterface()
{

}

CalcInterface::~CalcInterface()
{

}

double CalcInterface::RecebeOperando(int i) const
{
  if (i == 0 || i == 1) {
    std::cout << (i == 0 ? "Primeiro" : "Segundo") << " operando: "
              << std::flush;
    char inbuf[64] = "";
    if (!std::cin.getline(inbuf, 64)) {
      std::cout << "Erro: entrada invalida!" << std::endl;
      return NAN;
    }
    std::stringstream inss(inbuf);
    double valor = NAN;
    if (!(inss >> valor)) {
      std::cout << "Erro: entrada invalida!" << std::endl;
      return NAN;
    }
    return valor;
  } else {
    return NAN;
  }
}

unsigned char CalcInterface::RecebeOperacao() const
{
  std::cout << "Operacao: " << std::flush;
  char inbuf[64] = "";
  if (!std::cin.getline(inbuf, 64)) {
    std::cout << "Erro: entrada invalida!" << std::endl;
    return '\0';
  }
  std::stringstream inss(inbuf);
  char op = '\0';
  if (!(inss >> op)) {
    std::cout << "Erro: entrada invalida!" << std::endl;
    return '\0';
  }
  if (op == '+' || op == '-' || op == '*' || op == '/') {
    return op;
  } else {
    std::cout << "Erro: entrada invalida!" << std::endl;
    return '\0';
  }
}

void CalcInterface::MostraResultado(double res) const
{
  std::cout << "Resultado: " << res << std::endl;
}
