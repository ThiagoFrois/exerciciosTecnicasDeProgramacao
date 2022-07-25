#pragma once

#include <iostream>
#include <cstring>

class Pessoa 
{
public:
  Pessoa(int diaNas, int mesNas, int anoNas, const char* nome);
  Pessoa();
  ~Pessoa();

  int GetIdade();
  const char* GetNome();
  bool GetValidade();

  bool SetDataNascimento(int dia, int mes, int ano);


  void CalculaIdade(int diaAt, int mesAt, int anoAt);

private:
  int mIdade, mDia, mMes, mAno;
  char mNome[30];
  bool mValidade;
};
