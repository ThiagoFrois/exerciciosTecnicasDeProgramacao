#include "pessoa.hpp"

Pessoa::Pessoa() : mIdade{0}, mDia{1}, mMes{1}, mAno{1}, mNome{""} 
{

}

Pessoa::~Pessoa()
{

}

void Pessoa::SetNome(const char* nome)
{
  strcpy(mNome, nome);
}


bool Pessoa::SetDataNascimento(int dia, int mes, int ano)
{
  if (dia < 0 || dia > 31)
  {
    std::cerr << "Erro de execução: Dia com valor incorreto." << std::endl;
    return false;
  }
  mDia = dia;

  if (mes < 1 || mes > 12) 
  {
    std::cerr << "Erro de execução: Mês com valor incorreto." << std::endl;
    return false;
  }
  mMes = mes;

  if (ano < 0)
  {
    std::cerr << "Erro de execução: Ano com valor incorreto." << std::endl;
    return false;
  }
  mAno = ano;

  return true;
}

int Pessoa::GetIdade()
{
  return mIdade;
}

const char* Pessoa::GetNome()
{
  return mNome;
}

void Pessoa::CalculaIdade(int diaAt, int mesAt, int anoAt)
{
  int idade = anoAt - mAno;

  if(mMes > mesAt)
    idade--;
  else if(mMes == mesAt) 
  {
    if(mDia > diaAt)
      idade--;
  }
  mIdade = idade;
}
