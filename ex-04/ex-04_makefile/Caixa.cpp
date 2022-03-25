#include "Caixa.hpp"

//Construtora
Caixa::Caixa() :
largura{0}, altura{0}, profundidade{0}
{

}

//Destrutora
Caixa::~Caixa()
{

}

//Funções Set's
void Caixa::setLargura(int l)
{
    largura = l;
}

void Caixa::setAltura(int a)
{
    altura = a;
}

void Caixa::setProfundidade(int p)
{
    profundidade = p;
}

//Funções Get's
int Caixa::getLargura() const
{
    return largura;
}

int Caixa::getAltura() const
{
    return altura;
}

int Caixa::getProfundidade() const
{
    return profundidade;
}

//Calcula área externa da caixa
int Caixa::calcAreaExt(int l, int a, int p)
{
    return 2*(l*a + l*p + a*p);
}

void Caixa::printAreaExt()
{
    std::cout << "A área externa da caixa é " << calcAreaExt(largura, altura, profundidade) << std::endl;
}

//Calcula volume da caixa
int Caixa::calcVolume(int l, int a, int p)
{
    return l*a*p;
}

void Caixa::printVolume()
{
    std::cout << "O volume da caixa é " << calcVolume(largura, altura, profundidade) << std::endl;
}

void Caixa::printAreaVolume()
{
    printAreaExt();
    printVolume();
}
