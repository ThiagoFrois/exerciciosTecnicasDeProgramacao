#include "Principal.hpp"

void Principal::Executar()
{
    Quadrado quadrado_1{4}, quadrado_2{8};
    TrianguloEq triangulo_1{3}, triangulo_2{6};

    std::cout << "Poligono de lado = " << quadrado_1.GetNumLados()
        << ", tamanho de cada lado = " << quadrado_1.GetTamLado()
        << ": Perimetro = " << quadrado_1.CalcPerimetro()
        << ", Angulo Interno = " << quadrado_1.CalcAngulo()
        << ", Area = " << quadrado_1.CalcArea()
        << std::endl << std::endl;

    std::cout << "Poligono de lado = " << quadrado_2.GetNumLados()
        << ", tamanho de cada lado = " << quadrado_2.GetTamLado()
        << ": Perimetro = " << quadrado_2.CalcPerimetro()
        << ", Angulo Interno = " << quadrado_2.CalcAngulo()
        << ", Area = " << quadrado_2.CalcArea()
        << std::endl << std::endl;

    std::cout << "Poligono de lado = " << triangulo_1.GetNumLados()
        << ", tamanho de cada lado = " << triangulo_1.GetTamLado()
        << ": Perimetro = " << triangulo_1.CalcPerimetro()
        << ", Angulo Interno = " << triangulo_1.CalcAngulo()
        << ", Area = " << triangulo_1.CalcArea()
        << std::endl << std::endl;

    std::cout << "Poligono de lado = " << triangulo_2.GetNumLados()
        << ", tamanho de cada lado = " << triangulo_2.GetTamLado()
        << ": Perimetro = " << triangulo_2.CalcPerimetro()
        << ", Angulo Interno = " << triangulo_2.CalcAngulo()
        << ", Area = " << triangulo_2.CalcArea()
        << std::endl;
}

Principal::Principal()
{

}

Principal::~Principal()
{

}

