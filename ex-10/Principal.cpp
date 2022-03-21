#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::getColaboradores()
{
    std::cout << "EMPREGADO  -> 0" << std::endl;
    std::cout << "SOCIO      -> 1" << std::endl;
    std::cout << "ESTAGIARIO -> 2" << std::endl;
    std::string n;
    int vinculo, i;
    int temp;
    float hora;
    for(i = 0; i < 3; i++){
        std::cout << "Digite os dados do colaborador <nome> <vinculo>: ";
        std::cin >> n >> vinculo;
        std::cout << std::endl;
        colaboradores[i] = Colaborador(n, vinculo);
        std::cout << "Digite o tempo de serviço do colaborador e o valor da hora de trabalho <tempo> <hora>: ";
        std::cin >> temp >> hora;
        std::cout << std::endl;
        colaboradores[i].setTempoServico(temp);
        colaboradores[i].setValorHoraTrabalho(hora);
    }

}

Colaborador Principal::getMaiorRendimento()
{
    float rendimentoC1, rendimentoC2, rendimentoC3;
    rendimentoC1 = colaboradores[0].getRedimento();
    rendimentoC2 = colaboradores[1].getRedimento();
    rendimentoC3 = colaboradores[2].getRedimento();

    if(rendimentoC1 >= rendimentoC2)
    {
        if(rendimentoC1 >= rendimentoC3)
            return colaboradores[0];
        else
            return colaboradores[2];
    }
    else
    {
        if(rendimentoC2 >= rendimentoC3)
            return colaboradores[1];
        else
            return colaboradores[2];
    }
}

Colaborador Principal::getMaiorCusto()
{
    float custoC1, custoC2, custoC3;
    custoC1 = colaboradores[0].getCusto();
    custoC2 = colaboradores[1].getCusto();
    custoC3 = colaboradores[2].getCusto();

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

void Principal::executar()
{
    Colaborador rende, custa;
    getColaboradores();

    colaboradores[0].calculaRendimento(HORAS_TRABALHADAS_MES_PADRAO);
    colaboradores[1].calculaRendimento(HORAS_TRABALHADAS_MES_PADRAO + 100);
    colaboradores[2].calculaRendimento(HORAS_TRABALHADAS_MES_PADRAO + 30);
    colaboradores[0].calculaCusto();
    colaboradores[1].calculaCusto();
    colaboradores[2].calculaCusto();

    rende = getMaiorRendimento();
    custa = getMaiorCusto();

    std::cout << "O colaborador com maior rendimento foi " << rende.getNome() << std::endl;
    std::cout << "O colaborador com maior custo foi " << custa.getNome() << std::endl;
}
