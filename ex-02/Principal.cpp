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
    entrada.setHora(h);
    entrada.setMin(m);
}

void Principal::setHorarioSaida(int h, int m)
{
    saida.setHora(h);
    saida.setMin(m);
}

void Principal::setHorarios()
{
    int h, m;

    //Pede o horário de entrada
    std::cout << "Escreva o horario de entrada (Formato: hh mm) :";
    std::cin >> h >> m;
    std::cout << std::endl;

    //Testa se as entradas de hora e minuto são válidas
    if(!entradaEhValida(h, m))
        exit(0);

    setHorarioEntrada(h, m);

    //Pede o horário de saída
    std::cout << "Escreva o horario de saida (Formato: hh mm) : ";
    std::cin >> h >> m;
    std::cout << std::endl;

    //Testa se as entradas de hora e minuto são válidas
    if(!entradaEhValida(h, m))
        exit(0);

    setHorarioSaida(h, m);
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

//Calcula o custo em cada faixa de horário
float Principal::calculaCusto() const
{
    float custo;
    if(calculaIntervalo() < 3*MIN_POR_HORA)
        custo = 4.5; // Custo base
    else if(calculaIntervalo() >= 3*MIN_POR_HORA && calculaIntervalo() <= 12*MIN_POR_HORA){
        custo = 4.5 + ((calculaIntervalo() - 180)/15)*0.75; //Custo base + número de bloco de 15 minutos no tempo excendente * custo
    }
    else
        custo = 33.0; // Custo alto

    return custo;
}

//Verifica se as entradas de horas e minutos são válidas
bool Principal::entradaEhValida(int h, int m) const
{
    Horario aux;
    if(!aux.setHora(h)){
        std::cout << "Hora(s) inválida!" << std::endl;
        return false;
    }

    if(!aux.setMin(m)){
        std::cout << "Minuto(s) inválido!" << std::endl;
        return false;
    }
    return true;
}

void Principal::executar()
{
    setHorarios();
    std::cout << "O custo foi de R$" << calculaCusto() << std::endl;
}
