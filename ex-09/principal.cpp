#include "principal.hpp"

Principal::Principal() : gol{40, 12, "Gol"}
{

}

Principal::~Principal()
{

}

void Principal::Executar()
{
  int distancia;
  int combustivel;

  std::cout << "Digite a distância da viajem, e o nível de combustível do veículo {distância} {combustível}: ";
  std::cin >> distancia >> combustivel;

  if (distancia < 0)
    throw "Valor inválido para a distância.";
  if (combustivel < 0)
    throw "Valor inválido para a quantidade de combustível.";

  gol.Viajar(distancia, combustivel);
}
