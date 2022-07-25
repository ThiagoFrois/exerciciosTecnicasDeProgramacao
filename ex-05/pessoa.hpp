#pragma once

#include <iostream>
#include <cstring>

class Pessoa {
public:
  Pessoa();
  ~Pessoa();

  void SetNome(const char* nome);
  bool SetDataNascimento(int dia, int mes, int ano);

  int GetIdade();
  const char* GetNome();

  void CalculaIdade(int diaAt, int mesAt, int anoAt);

private:
  int mIdade, mDia, mMes, mAno;
  char mNome[30];
};
