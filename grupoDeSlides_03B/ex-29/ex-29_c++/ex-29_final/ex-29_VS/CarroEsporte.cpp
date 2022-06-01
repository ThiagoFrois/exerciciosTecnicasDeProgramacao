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

// Redefini��o do m�todo andar consumindo 50% a mais de combust�vel
void CarroEsporte::andar(int _distancia)
{
    if (combustivelAt < _distancia/consumo) {
        cout << "Combust�vel insuficiente." << endl;
        combustivelAt = 0;
    }
    else
        combustivelAt -= _distancia/consumo;
}

// Perde um litro de combust�vel a cada acelera��o
void CarroEsporte::acelerar()
{
    combustivelAt--;
}