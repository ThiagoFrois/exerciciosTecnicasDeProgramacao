#include "PolReg.hpp"

PolReg::PolReg(double _tamLado, int _numLados) :
numLados(_numLados), tamLado(_tamLado)
{

}

PolReg::~PolReg()
{

}

// Calcula o perimetro do poligono regular
double PolReg::calcPerimetro()
{
    return numLados * tamLado;
}

// Calcula o valor dos angulos do poligono regular
double PolReg::calcAngulo()
{
    return 180.0 * (numLados - 2) / numLados;
}

// A área é zero, pois não pe possível calcular a área
double PolReg::calcArea()
{
    return 0;
}

int PolReg::getNumLados()
{
    return numLados;
}

double PolReg::getTamLado()
{
    return tamLado;
}