#pragma once

#include <iostream>

class Caixa {
  public:
    Caixa();
    ~Caixa();

    bool SetLargura(int largura);
    bool SetAltura(int altura);
    bool SetProfundidade(int profundidade);

    int CalcAreaExt();

    int CalcVolume();

  private:
    int mLargura, mAltura, mProfundidade;
};
