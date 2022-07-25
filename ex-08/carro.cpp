#include "carro.hpp"

Carro::Carro(int capacidadeTanque, int consumo) :  mCombustivelAt{0}, mValidade{true}
{
  if (capacidadeTanque < 0 || consumo < 0)
  {
    std::cerr << "Erro de execução: Valores inválidos nos atributos." << std::endl;
    mValidade = false;
  }
  mCombustivelMax = capacidadeTanque;
  mConsumo = consumo;
}

Carro::Carro() : mCombustivelMax(1), mCombustivelAt(0), mConsumo(1), mValidade{true}
{

}

Carro::~Carro()
{

}

int Carro::GetCombustivel()
{
  return mCombustivelAt;
}

bool Carro::GetValidade()
{
  return mValidade;
}

void Carro::Andar(int distancia)
{
  if(mCombustivelAt < distancia / mConsumo)
  {
    std::cout << "Combustível insuficiente." << std::endl;
    mCombustivelAt = 0;
  }
  else
    mCombustivelAt -= distancia / mConsumo;
}

void Carro::Abastecer(int quantidade)
{
  mCombustivelAt += quantidade;
}
