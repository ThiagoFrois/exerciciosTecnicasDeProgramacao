#include "PolReg.hpp"

// Refazer evitanto o uso desnecess�rio de this. Prof. Sim�o. 

PolReg::PolReg(const int &nLados, const double &tamLado) : nLados(nLados), tamLado(tamLado)
{
}

PolReg::~PolReg()
{
}

// Nos dois m�todos abaixos, poderia verificar eventuais exce��es como n�meros negativos e zeros. Prof. Sim�o. 

double PolReg::getPerimetro() const
{
  return this->nLados * this->tamLado;
};

double PolReg::getAnguloInterno() const
{
  return 180.0 * (this->nLados - 2.0) / this->nLados;
};

double PolReg::getArea() const
{
  return 0.0;
}