#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::getEntradas()
{
    int n, t;
    std::cout << "Digite o número de lados do poligno regular e o tamanho de cada lado (formato - lados tamanho): ";
    std::cin >> n >> t;

    poligono = PolReg(n, t);
}

void Principal::executar()
{
    getEntradas();

    std::cout << "O perimetro do poligono regular é " << poligono.getPerimetro() << std::endl;
    std::cout << "O angulo do poligono regular é " << poligono.getAngulo() << std::endl;
    std::cout << "A área do poligono regular é " << poligono.getArea() << std::endl;
}
