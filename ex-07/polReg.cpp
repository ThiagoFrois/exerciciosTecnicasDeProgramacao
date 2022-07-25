#include "polReg.hpp"

PolReg::PolReg(int numLados, int tamLado) : mNumLados{numLados}, mTamLado{tamLado}
{

}

PolReg::PolReg() : mNumLados{3}, mTamLado{1}
{

}

PolReg::~PolReg()
{

}

int PolReg::CalculaPerimetro()
{
  return mNumLados * mTamLado;
}

int PolReg::CalculaAnguloInterno()
{
  return GRAUS_180 * (mNumLados - 2) / mTamLado;
}

int PolReg::CalculaArea()
{
  return 0;
}
