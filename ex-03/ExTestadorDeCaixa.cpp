#include "ExTestadorDeCaixa.hpp"

ExTestadorDeCaixa::ExTestadorDeCaixa() {
  std::cout << "Meu nome � Thiago." << std::endl;
}

ExTestadorDeCaixa::~ExTestadorDeCaixa() {

}

void ExTestadorDeCaixa::PerguntaEntradas() {
    int largura, altura, profundidade;

    std::cout << "Qual a largura, altura e profundidade da caixa 1 {l} {a} {p}: ";
    std::cin >> largura >> altura >> profundidade;
    if (!caixa1.SetLargura(largura) || !caixa1.SetAltura(altura) || !caixa1.SetProfundidade(profundidade)) {
      std::cerr << "Erro de execu��o: Caixa 1 com dimens�es inv�lidas." << std::endl;
      return;
    }

    std::cout << "Qual a largura, altura e profundidade da caixa 2 {l} {a} {p}: ";
    std::cin >> largura >> altura >> profundidade;
    if (!caixa2.SetLargura(largura) || !caixa2.SetAltura(altura) || !caixa2.SetProfundidade(profundidade)) {
      std::cerr << "Erro de execu��o: Caixa 2 com dimens�es inv�lidas." << std::endl;
      return;
    }
}

void ExTestadorDeCaixa::MostrarAreaEVolume(Caixa caixa) {
  std::cout << "------------------------" << std::endl;
  std::cout << "Area: " << caixa.CalcAreaExt() << std::endl;
  std::cout << "Volume: " << caixa.CalcVolume() << std::endl;
  std::cout << "------------------------" << std::endl;
}

void ExTestadorDeCaixa::Executar() {
    PerguntaEntradas();

    MostrarAreaEVolume(caixa1);
    MostrarAreaEVolume(caixa2);
}
