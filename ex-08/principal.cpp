#include "principal.hpp"

Principal::Principal() : gol{50, 12}, uno{40, 14}
{

}

Principal::~Principal()
{

}

void Principal::Executar()
{
  if (!gol.GetValidade() || !uno.GetValidade())
    return;

  gol.Abastecer(20);
  std::cout << "O gol tem atualmente " << gol.GetCombustivel() << " litros de combustível." << std::endl;

  uno.Abastecer(25);
  std::cout << "O uno tem atualmente " << uno.GetCombustivel() << " litros de combustível." << std::endl;

  uno.Andar(150);
  std::cout << "Depois de viajar o uno tem " << uno.GetCombustivel() << " litros de combustível." << std::endl;

  gol.Andar(80);
  std::cout << "Depois de viajar o gol tem " << gol.GetCombustivel() << " litros de combustível." << std::endl;
}
