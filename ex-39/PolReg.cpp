#include "PolReg.hpp"

double PolReg::CalcPerimetro()
{
    return m_numLados * m_tamLado;
}

double PolReg::CalcAngulo()
{
    return 180.0 * (m_numLados - 2) / m_numLados;
}

double PolReg::CalcArea()
{
    return 0;
}

int PolReg::GetNumLados()
{
    return m_numLados;
}

double PolReg::GetTamLado()
{
    return m_tamLado;
}

PolReg::PolReg(double tamLado, int numLados) :
m_numLados{numLados}, m_tamLado{tamLado}
{

}

PolReg::PolReg() :
m_numLados{1}, m_tamLado{3}
{

}

PolReg::~PolReg()
{

}

