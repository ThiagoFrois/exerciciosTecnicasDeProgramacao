#include "Principal.hpp"

//Construtora
Principal::Principal()
{

}

//Destrutora
Principal::~Principal()
{

}

//Funções Set's
void Principal::setHorarioEntrada(int h, int m)
{
    if(entrada.setHora(h) && entrada.setMin(m))
        return;
    exit(0);
}

void Principal::setHorarioSaida(int h, int m)
{
    if(saida.setHora(h) && saida.setMin(m))
        return;
    exit(0);
}

void Principal::setHorarios()
{
    int h, m;

    //Pede o horário de entrada
    std::cout << "Escreva o horario de entrada (Formato: hh mm) :";
    std::cin >> h >> m;
    std::cout << std::endl;

    //setHorarioEntrada(h, m);
    entrada = Horario(h, m);


    //Pede o horário de saída
    std::cout << "Escreva o horario de saida (Formato: hh mm) : ";
    std::cin >> h >> m;
    std::cout << std::endl;

    saida = Horario(h, m);
    //setHorarioSaida(h, m);
}
//Funções Get's
Horario Principal::getHorarioEntrada() const
{
    return entrada;
}

Horario Principal::getHorarioSaida() const
{
    return saida;
}

//Calcula o intervalo entre horários
int Principal::calculaIntervalo() const
{
    return entrada.calculaIntervalo(saida);
}

//Calcula o custo de um intervalo de horários
float Principal::calculaCusto() const
{
    float custo;
    int intervalo = calculaIntervalo();
    if(intervalo < 3*MIN_POR_HORA)
        custo = 4.5; // Custo padrão inferior
    else if(intervalo >= 3*MIN_POR_HORA && intervalo <= 12*MIN_POR_HORA){
        custo = 4.5 + ((intervalo - MIN_POR_HORA*3)/15)*0.75; //Custo base + número de bloco de 15 minutos no tempo excendente * custo
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
