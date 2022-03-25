#include "Vetor.hpp"

//Construtoras
Vetor::Vetor(int x, int y) :
dx{x}, dy{y}
{

}

Vetor::Vetor() :
dx{0}, dy{0}
{

}

//Destrutora
Vetor::~Vetor()
{

}

//Set's
void Vetor::setDx(int x)
{
    dx = x;
}

void Vetor::setDy(int y)
{
    dy = y;
}

//Get's

int Vetor::getDx() const
{
    return dx;
}

int Vetor::getDy() const
{
    return dy;
}

//Operadores sobrecarregados
Vetor Vetor::operator+(Vetor v)
{
    Vetor aux;
    aux.setDx(v.getDx() + dx);
    aux.setDy(v.getDy() + dy);
    return aux;
}

Vetor Vetor::operator*(int i)
{
    Vetor aux;
    aux.setDx(dx*i);
    aux.setDy(dy*i);
    return aux;
}
