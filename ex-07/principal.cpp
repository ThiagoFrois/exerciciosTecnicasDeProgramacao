#include "principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::PerguntaEntradas()
{
  int numLados, tamLado;
  std::cout << "Digite o número de lados do poligno regular e o tamanho de cada lado {num} {tam}: ";
  std::cin >> numLados >> tamLado;

  if (numLados < 3 || tamLado < 0)
  {
    std::cerr << "Erro de execução: Entrada incorreta." << std::endl;
    return;
  }

  poligono = PolReg(numLados, tamLado);
}

void Principal::Executar()
{
  PerguntaEntradas();

  std::cout << "O perimetro do poligono regular é " << poligono.CalculaPerimetro() << std::endl;
  std::cout << "O angulo do poligono regular é " << poligono.CalculaAnguloInterno() << std::endl;
  std::cout << "A área do poligono regular é " << poligono.CalculaArea() << std::endl;
}
