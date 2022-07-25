#include "exTestadorDeCaixa.hpp"

ExTestadorDeCaixa::ExTestadorDeCaixa() 
{
  std::cout << "Meu nome é Thiago." << std::endl;
}

ExTestadorDeCaixa::~ExTestadorDeCaixa() 
{

}

void ExTestadorDeCaixa::PerguntaEntradas() 
{
  int largura, altura, profundidade;

  std::cout << "Qual a largura, altura e profundidade da caixa 1 {l} {a} {p}: ";
  std::cin >> largura >> altura >> profundidade;
  if (!caixa1.SetLargura(largura) || !caixa1.SetAltura(altura) || !caixa1.SetProfundidade(profundidade)) 
  {
    std::cerr << "Erro de execução: Caixa 1 com dimensões inválidas." << std::endl;
    return;
  }

  std::cout << "Qual a largura, altura e profundidade da caixa 2 {l} {a} {p}: ";
  std::cin >> largura >> altura >> profundidade;
  if (!caixa2.SetLargura(largura) || !caixa2.SetAltura(altura) || !caixa2.SetProfundidade(profundidade))
  {
    std::cerr << "Erro de execução: Caixa 2 com dimensões inválidas." << std::endl;
    return;
  }
}

void ExTestadorDeCaixa::MostrarAreaEVolume(Caixa caixa) 
{
  std::cout << "------------------------" << std::endl;
  std::cout << "Área: " << caixa.CalcAreaExt() << std::endl;
  std::cout << "Volume: " << caixa.CalcVolume() << std::endl;
  std::cout << "------------------------" << std::endl;
}

void ExTestadorDeCaixa::Executar() 
{
  PerguntaEntradas();

  MostrarAreaEVolume(caixa1);
  MostrarAreaEVolume(caixa2);
}
