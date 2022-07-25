#include "colaborador.hpp"

Colaborador::Colaborador(const char* nome, int vinculo) : 
  mTempoServico{0}, mHorasQueTrabalha{HORAS_TRABALHADAS_MES_PADRAO}, mValorHoraTrabalho{0}
{
  SetNome(nome);
  SetVinculo(vinculo);
}

Colaborador::Colaborador() : 
  mTempoServico{0}, mTipoVinculo{0}, mHorasQueTrabalha{HORAS_TRABALHADAS_MES_PADRAO}, mValorHoraTrabalho{0}
{
  SetNome("");
}

Colaborador::~Colaborador()
{

}

void Colaborador::SetNome(const char* nome)
{
  strcpy(mNome, nome);
}

void Colaborador::SetTempoServico(int tempoServico)
{
  if(tempoServico < 0){
    throw "Valor inválido para o atributo mTempoServico.";
  }
  mTempoServico = tempoServico;
}

void Colaborador::SetVinculo(int vinculo)
{
  if(vinculo < 0 || vinculo > 2)
  {
    throw "Valor inválido para o atributo mVinculo.";
  }
  mTipoVinculo = vinculo;
}

void Colaborador::SetValorHoraTrabalho(float valorHoraTrabalho)
{
  if(valorHoraTrabalho < 0)
  {
    throw "Valor inválido para o atributo mValorHoraTrabalho.";
  }

  mValorHoraTrabalho = valorHoraTrabalho;
}

void Colaborador::SetHorasQueTrabalha(int horaQueTrabalha)
{
  if(horaQueTrabalha < 0)
  {
    throw "Valor inválido para o atributo mHorasQueTrabalha.";
  }
  mHorasQueTrabalha = mHorasQueTrabalha;
}

char* Colaborador::GetNome()
{
  return mNome;
}

float Colaborador::CalculaRendimento()
{
  float rendimento;
  float valorHoraTrabalhoAt = mValorHoraTrabalho * pow(1.1, mTempoServico); 

  switch (mTipoVinculo)
  {
    case EMPREGADO:
      rendimento = valorHoraTrabalhoAt * mHorasQueTrabalha;

      if(mHorasQueTrabalha > 144) 
        rendimento += (mHorasQueTrabalha - 144) * valorHoraTrabalhoAt * 1.5;
      
      break;
    default:
      rendimento = mValorHoraTrabalho * mHorasQueTrabalha;
  }
  return rendimento;
}

float Colaborador::CalculaCusto()
{
  float custo;
  float rendimento = CalculaRendimento();

  switch (mTipoVinculo)
  {
    case EMPREGADO:
      custo = rendimento * 1.8;
      break;
    default:
      custo = rendimento;
  }

  return custo;
}
