#include "caixa.hpp"

Caixa::Caixa() : mLargura{0}, mAltura{0}, mProfundidade{0} 
{

}

Caixa::~Caixa() 
{

}

bool Caixa::SetLargura(int largura)
{
  if(largura <= 0) 
  {
      return false;
  }
  mLargura = largura;
  return true;
}

bool Caixa::SetAltura(int altura)
{
  if(altura <= 0)
  {
      return false;
  }
  mAltura = altura;
  return true;
}

bool Caixa::SetProfundidade(int profundidade)
{
  if(profundidade <= 0)
  {
      return false;
  }
  mProfundidade = profundidade;
  return true;
}

int Caixa::CalcAreaExt()
{
  return 2 * (mLargura * mAltura + mLargura * mProfundidade + mAltura * mProfundidade);
}

int Caixa::CalcVolume()
{
  return mLargura * mAltura * mProfundidade;
}
