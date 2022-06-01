#include "CarroEsporte.hpp"

CarroEsporte::CarroEsporte(double _tamanhoSpoiler, double _potenciaExtraTurbo, int _numAdesivosTuning,
                           int _capacidadeMaxima, int _consumoCarroBase) :
tamanhoSpoiler(_tamanhoSpoiler), potenciaExtraTurbo(_potenciaExtraTurbo), numAdesivosTuning(_numAdesivosTuning),
Carro(_capacidadeMaxima, _consumoCarroBase)
{
    consumo *= 0.5;
}

CarroEsporte::~CarroEsporte()
{

}

// Redefinição do método andar consumindo 50% a mais de combustível
void CarroEsporte::andar(int _distancia)
{
    if (combustivelAt < _distancia/consumo) {
        cout << "Combustível insuficiente." << endl;
        combustivelAt = 0;
    }
    else
        combustivelAt -= _distancia/consumo;
}

// Perde um litro de combustível a cada aceleração
void CarroEsporte::acelerar()
{
    combustivelAt--;
}