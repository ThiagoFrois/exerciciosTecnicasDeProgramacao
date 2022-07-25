#pragma once

#include <iostream>
#include <cstring>
#include <cmath>

#define HORAS_TRABALHADAS_MES_PADRAO 80

enum vinculo{EMPREGADO, SOCIO, ESTAGIARIO};

class Colaborador
{
public:
  Colaborador(const char* nome, int vinculo);
  Colaborador();
  ~Colaborador();

  void SetNome(const char* nome);
  void SetTempoServico(int tempoServico);
  void SetVinculo(int vinculo);
  void SetValorHoraTrabalho(float valorHoraTrabalho);
  void SetHorasQueTrabalha(int horasQueTrabalha);

  char* GetNome();

  float CalculaRendimento();

  float CalculaCusto();

private:
  char mNome[30];
  int mTempoServico, mTipoVinculo, mHorasQueTrabalha;
  float mValorHoraTrabalho;
};
