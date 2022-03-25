#include "Carro.hpp"

//Construtoras

Carro::Carro(int max, int cons)
: combustivelAt{0}
{
    if(!setCombMax(max) || !setConsumo(cons))
        exit(0);
}

Carro::Carro() :
combustivelMax{1}, combustivelAt{0}, consumo{1}
{

}

//Destrutora
Carro::~Carro()
{

}

bool Carro::setCombMax(int max)
{
    if(max < 1)
    {
        std::cout << "Capacidade máxima do tanque inválida!" << std::endl;
        return false;
    }
    combustivelMax = max;
    return true;
}

bool Carro::setConsumo(int cons)
{
    if(cons < 1)
    {
        std::cout << "Consumo do veículo incorreto!" << std::endl;
        return false;
    }
    consumo = cons;
    return true;
}

int Carro::getCombMax() const
{
    return combustivelMax;
}

int Carro::getCombAt() const
{
    return combustivelAt;
}

int Carro::getConsumo() const
{
    return consumo;
}

void Carro::andar(int dist)
{
    if(combustivelAt < dist/consumo){
        std::cout << "Combustível insuficiente." << std::endl;
        combustivelAt = 0;
    }
    else
        combustivelAt -= dist/consumo;
}

void Carro::abastecer(int quantComb)
{
    combustivelAt += quantComb;
}
