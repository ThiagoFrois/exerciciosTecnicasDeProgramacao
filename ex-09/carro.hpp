#pragma once

#include <iostream>
#include <cstring>

#define ESTRADA 0
#define CIDADE 1
#define NIVEL_COMB_CRITICO 1

class Carro
{
public:
  Carro(float quantCombustivel, int consumo, const char* nome);
  Carro();
  ~Carro();

  float GetCombustivel();
  char* GetNome();
  
  void Andar(int distancia, int local);

  void Abastecer(float quantidade);

  void Viajar(int distancia, float quantidadeCombustivel);

private:
  char mNome[30];
  float mCombustivelMax, mCombustivelAt;
  int mConsumo, mDistPerc, mDistPercLocal[2];
};
