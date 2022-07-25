#include "principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::PerguntaDadosColaboradores()
{
  std::cout << "EMPREGADO  -> 0" << std::endl;
  std::cout << "SOCIO      -> 1" << std::endl;
  std::cout << "ESTAGIARIO -> 2" << std::endl;

  char nome[30];
  int i, vinculo, horasTrabalhadas, tempoServico;
  float valorHoraTrabalho;

  for(i = 0; i < 3; i++){
    std::cout << "Digite os dados do colaborador {nome} {vinculo}: ";
    std::cin >> nome >> vinculo;
    
    colaboradores[i] = Colaborador(nome, vinculo);

    if(vinculo == ESTAGIARIO)
    {
      std::cout << "Digite o tempo de serviço do colaborador e o valor da hora de trabalho {tempo} {valor}: ";
      std::cin >> tempoServico >> valorHoraTrabalho;   
    }
    else
    {
      std::cout << "Digite o tempo de serviço do colaborador, o valor da hora de trabalho, e o número de horas trabalhadas {tempo} {hora} {numero}: ";
      std::cin >> tempoServico >> valorHoraTrabalho >> horasTrabalhadas;
      colaboradores[i].SetHorasQueTrabalha(horasTrabalhadas);
    }

    colaboradores[i].SetTempoServico(tempoServico);
    colaboradores[i].SetValorHoraTrabalho(valorHoraTrabalho);
  }
}

Colaborador Principal::GetMaiorRendimento()
{
  float rendimentoC1, rendimentoC2, rendimentoC3;

  rendimentoC1 = colaboradores[0].CalculaRendimento();
  rendimentoC2 = colaboradores[1].CalculaRendimento();
  rendimentoC3 = colaboradores[2].CalculaRendimento();

  if (rendimentoC1 >= rendimentoC2)
  {
    if (rendimentoC1 >= rendimentoC3)
      return colaboradores[0];
    else
      return colaboradores[2];
  }
  else
  {
    if (rendimentoC2 >= rendimentoC3)
      return colaboradores[1];
    else
      return colaboradores[2];
  }
}

Colaborador Principal::GetMaiorCusto()
{
    float custoC1, custoC2, custoC3;

    custoC1 = colaboradores[0].CalculaCusto();
    custoC2 = colaboradores[1].CalculaCusto();
    custoC3 = colaboradores[2].CalculaCusto();

    if(custoC1 >= custoC2)
    {
        if(custoC1 >= custoC3)
            return colaboradores[0];
        else
            return colaboradores[2];
    }
    else
    {
        if(custoC2 >= custoC3)
            return colaboradores[1];
        else
            return colaboradores[2];

    }
}

void Principal::Executar()
{
  Colaborador rende, custa;
  PerguntaDadosColaboradores();

  std::cout << "O colaborador com maior rendimento foi " << GetMaiorRendimento().GetNome() << std::endl;
  std::cout << "O colaborador com maior custo foi " << GetMaiorCusto().GetNome() << std::endl;
}
