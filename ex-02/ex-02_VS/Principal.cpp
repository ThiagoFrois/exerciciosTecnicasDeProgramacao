#include "Principal.hpp"

//Construtora
Principal::Principal()
{

}

//Destrutora
Principal::~Principal()
{

}

//Obtém dos valores do horário de entrada e saída pelo terminal
void Principal::setHorarios()
{
    int h, m;

    //Pede o horário de entrada
    std::cout << "Escreva o horario de entrada (Formato: hh mm) :";
    std::cin >> h >> m;
    std::cout << std::endl;

    entrada = Horario(h, m);

    //Pede o horário de saída
    std::cout << "Escreva o horario de saida (Formato: hh mm) : ";
    std::cin >> h >> m;
    std::cout << std::endl;

    saida = Horario(h, m);
}

//Calcula o custo de um intervalo de horários
float Principal::calculaCusto()
{
    float custo;
    int intervalo = entrada.calculaIntervalo(saida);
    if(intervalo < 3*MIN_POR_HORA)
        custo = 4.5; // Custo padrão inferior
    else if(intervalo >= 3*MIN_POR_HORA && intervalo <= 12*MIN_POR_HORA){
        custo = 4.5 + ((intervalo - MIN_POR_HORA*3)/15)*0.75; //Custo base + número de bloco de 15 minutos de tempo excendente * custo
    }
    else
        custo = 33.0; // Custo padrão superior

    return custo;
}

void Principal::executar()
{
    setHorarios();
    std::cout << "O custo foi de R$" << calculaCusto() << std::endl;
}
