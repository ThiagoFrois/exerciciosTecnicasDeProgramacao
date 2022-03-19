#include "ExTestadorDeCaixa.hpp"

ExTestadorDeCaixa::ExTestadorDeCaixa()
{

}

ExTestadorDeCaixa::~ExTestadorDeCaixa()
{

}

void ExTestadorDeCaixa::setCaixa(int l,int a, int p, Caixa& c)
{
    c.setLargura(l);
    c.setAltura(a);
    c.setProfundidade(p);
}

void ExTestadorDeCaixa::perguntaEntradas()
{
    int l, a, p;

    std::cout << "Qual a largura, altura e profundidade da caixa 1: ";
    std::cin >> l >> a >> p;
    std::cout << std::endl;

    setCaixa(l, a, p, c1);

    std::cout << "Qual largura, altura e profundidade da caixa 2: ";
    std::cin >> l >> a >> p;
    std::cout << std::endl;

    setCaixa(l, a, p, c2);
}

void ExTestadorDeCaixa::executar()
{
    perguntaEntradas();
    c1.printAreaVolume();
    c2.printAreaVolume();

}
