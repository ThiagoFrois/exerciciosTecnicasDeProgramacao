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
  time_t tSac = time(NULL);
  tm tms = *localtime(&tSac);

  if (!Einstein.SetDataNascimento(14, 3, 1879))
    return;

  Einstein.SetNome("Albert Einstein");
  Einstein.CalculaIdade(tms.tm_mday, tms.tm_mon, tms.tm_year + 1900);

  if (!Newton.SetDataNascimento(4, 1, 1643))
    return;

  Newton.SetNome("Isaac Newton");
  Newton.CalculaIdade(tms.tm_mday, tms.tm_mon, tms.tm_year + 1900);

  ImprimeDadosPessoa(Einstein);
  ImprimeDadosPessoa(Newton);
}




