#include "Carro.hpp"

//Construtoras
Carro::Carro(int _capacidadeMaxima, int _consumo) :
combustivelAt(0), combustivelMax(_capacidadeMaxima), consumo(_consumo)
{

}

//Destrutora
Carro::~Carro()
{

}

//Get's
int Carro::getCombustivel()
{
    return combustivelAt;
}

//O carro anda uma distância dada
void Carro::andar(int _distancia)
{
    if(combustivelAt < _distancia/consumo){
        cout << "Combustível insuficiente." << endl;
        combustivelAt = 0;
    }
    else
        combustivelAt -= _distancia/consumo;
}

//O carro abastece o tanque com um quantidade dada
void Carro::abastecer(int _quantidade)
{
    combustivelAt += _quantidade;
}
