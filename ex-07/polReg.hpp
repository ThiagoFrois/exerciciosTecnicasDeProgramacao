#pragma once

#define GRAUS_180 180

#include <iostream>

class PolReg
{
public:
  PolReg(int numLados, int tamLado);
  PolReg();
  ~PolReg();

  int CalculaPerimetro();

  int CalculaAnguloInterno();

  int CalculaArea();

private:
  int mNumLados, mTamLado;
};
