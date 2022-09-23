#include "Principal.hpp"

void Principal::Executar()
{
    int escolha, numLados;
    double tamLado;

    std::cout << "1 - Triângulo" << std::endl;
    std::cout << "2 - Quadrado" << std::endl;
    std::cout << "3 - Poligono Regular" << std::endl;
    std::cout << "Escolha o tipo de instância: ";
    std::cin >> escolha;

    if (escolha == 1)
    {
        std::cout << "Digite o tamanho dos lados do triângulo: ";
        std::cin >> tamLado;
        p_poligono = new TrianguloEq(tamLado); 
    }
    else if (escolha == 2)
    {
        std::cout << "Digite o tamanho dos lados do quadrado: ";
        std::cin >> tamLado;
        p_poligono = new Quadrado(tamLado);
    }
    else if (escolha == 3)
    {
        std::cout << "Digite o número de lados do poligono: ";
        std::cin >> numLados;
        std::cout << "Digite o tamanho dos lados do quadrado: ";
        std::cin >> tamLado;
        p_poligono = new PolReg(tamLado, numLados);
    }
    else
    {
        std::cout << "Escolha incorreta!" << std::endl;
    }

    std::cout << "Poligono de lado = " << p_poligono->GetNumLados()
        << ", tamanho de cada lado = " << p_poligono->GetTamLado()
        << ": Perimetro = " << p_poligono->CalcPerimetro()
        << ", Angulo Interno = " << p_poligono->CalcAngulo()
        << std::endl << std::endl;
}

Principal::Principal()
{

}

Principal::~Principal()
{

}

