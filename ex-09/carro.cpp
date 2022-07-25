#include "carro.hpp"

Carro::Carro(float capacidadeTanque, int consumo, const char* nome) :  
  mCombustivelAt{0}, mDistPerc{0}, mDistPercLocal{0, 0}
{
  if (capacidadeTanque < 0)
    throw "Valor inválido para o atributo mCombustivelMax.";
  if (consumo < 0)
    throw "Valor inválido para o atributo mConsumo.";
  
  mCombustivelMax = capacidadeTanque;
  mConsumo = consumo;
  strcpy(mNome, nome);
}

Carro::Carro() : 
  mCombustivelMax{1}, mCombustivelAt{0}, mConsumo{1}, mDistPerc{0}, mDistPercLocal{0, 0}
{
  strcpy(mNome, "");
}

Carro::~Carro()
{

}

float Carro::GetCombustivel()
{
  return mCombustivelAt;
}

char* Carro::GetNome()
{
  return mNome;
}

void Carro::Andar(int distancia, int local)
{
  float combustivelConsumido {(float)distancia / mConsumo};

  if (mCombustivelAt < combustivelConsumido)
  {
    std::cout << "Combustivel insuficiente." << std::endl;

    mDistPercLocal[local] += mCombustivelAt * mConsumo;
    mDistPerc += mCombustivelAt * mConsumo;
    mCombustivelAt = 0;
  }
  else
  {
    mCombustivelAt -= combustivelConsumido;
    mDistPercLocal[local] += distancia; 
    mDistPerc += distancia;
  }
}

void Carro::Abastecer(float quantidade)
{
  if (quantidade + mCombustivelAt > mCombustivelMax)
  {
    std::cout << "Tanque cheio." << std::endl;
    mCombustivelAt = mCombustivelMax;
  }
  else
    mCombustivelAt += quantidade;
}

void Carro::Viajar(int distancia, float quantidadeCombustivel)
{
  std::cout << "Faltam " << distancia << " Km para chegar ao destino..." << std::endl << std::endl;
    
  Abastecer(quantidadeCombustivel);

  unsigned seed = time(0);
  srand(seed);

  while (distancia > 0)
  {
    int distTrajeto = rand()%distancia + 1;
    

    if (distTrajeto > distancia)
      distTrajeto = distancia;


    if (mCombustivelAt <= 0)
    {
      std::cout << "Faltam " << distancia << " Km para chegar ao destino..." << std::endl << std::endl;
      std::cout << "O carro " << mNome << " viajou por " << mDistPerc << " Km, sendo que " << mDistPercLocal[CIDADE] << " Km eram na cidade, e " << mDistPercLocal[ESTRADA] << " Km eram na estrada." << std::endl << std::endl;
      return;
    }
    Andar(distTrajeto, rand()%2); 
    distancia -= distTrajeto;
  }

  std::cout << "O carro " << mNome << " viajou por " << mDistPerc << " Km, sendo que " << mDistPercLocal[CIDADE] << " Km eram na cidade, e " << mDistPercLocal[ESTRADA] << " Km eram na estrada." << std::endl << std::endl;
}
