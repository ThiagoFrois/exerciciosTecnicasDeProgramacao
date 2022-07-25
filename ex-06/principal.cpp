#include "principal.hpp"

Principal::Principal() 
{

}

Principal::~Principal() 
{

}

void Principal::ImprimeDadosPessoa(Pessoa pessoa) 
{
  std::cout << pessoa.GetNome() << " teria " << pessoa.GetIdade() << " caso estivesse vivo." << std::endl; 
}


void Principal::Executar() 
{

  Einstein = Pessoa{14, 3, 1879, "Einstein"};

  if (!Einstein.GetValidade())
    return;

  Newton = Pessoa{4, 1, 1643, "Newton"};

  if (!Newton.GetValidade())
    return;

  ImprimeDadosPessoa(Einstein);
  ImprimeDadosPessoa(Newton);
}




