#include "principal.h"

#include <iostream>

#include "familia.h"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::Executar()
{
  // Instancia familia. Pessoas sao criadas internamente.
  Familia familia("Simpson", "Homer", "Marge");
  // Testa metodos de Familia.
  familia.AdicionarFilho("Bart");
  familia.AdicionarFilho("Lisa");
  familia.AdicionarFilho("Maggie");
  std::cout << std::endl;
  familia.ListarArvoreFamiliar();
  std::cout << std::endl;
  // Testa metodos de Pessoa.
  familia.getPrincipal()->ImprimirFilhos();
  familia.getFilho(1)->ImprimirPais();
}
