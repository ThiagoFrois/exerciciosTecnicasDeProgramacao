#pragma once

#include <iostream>

class Carro
{
public:
    Carro(int capacidadeTanque, int consumo);
    Carro();
    ~Carro();

    int GetCombustivel();
    bool GetValidade();

    void Andar(int distancia);

    void Abastecer(int quantidade);

private:
  int mCombustivelMax, mCombustivelAt, mConsumo;
  bool mValidade;
};
