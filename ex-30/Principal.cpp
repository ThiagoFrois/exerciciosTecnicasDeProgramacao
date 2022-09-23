#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
    // Cria polígonos regulares de 7 e 8 lados com 5 e 10 de tamanhos respectivos 
    PolReg poligono_1(5, 7),
        poligono_2(10, 8);

    // Cria quadrados de tamanhos de lados 4 e 8 de 
    Quadrado quadrado_1(4),
        quadrado_2(8);

    // Cria triângulos equiláteros de tamanhos de lados 3 e 6
    TrianguloEq triangulo_1(3),
        triangulo_2(6);

    // Informa dados do polígono de lado 7
    cout << "Poligono de lado = " << poligono_1.getNumLados()
        << ", tamanho de cada lado = " << poligono_1.getTamLado()
        << ": Perimetro = " << poligono_1.calcPerimetro()
        << ", Angulo Interno = " << poligono_1.calcAngulo()
        << endl << endl;

    // Informa dados do polígono de lado 8
    cout << "Poligono de lado = " << poligono_2.getNumLados()
        << ", tamanho de cada lado = " << poligono_2.getTamLado()
        << ": Perimetro = " << poligono_2.calcPerimetro()
        << ", Angulo Interno = " << poligono_2.calcAngulo()
        << endl << endl;

    // Informa dados do quadrado de tamanho de lado 2
    cout << "Poligono de lado = " << quadrado_1.getNumLados()
        << ", tamanho de cada lado = " << quadrado_1.getTamLado()
        << ": Perimetro = " << quadrado_1.calcPerimetro()
        << ", Angulo Interno = " << quadrado_1.calcAngulo()
        << ", Area = " << quadrado_1.calcArea()
        << endl << endl;

    // Informa dados do quadrado de tamanho de lado 4
    cout << "Poligono de lado = " << quadrado_2.getNumLados()
        << ", tamanho de cada lado = " << quadrado_2.getTamLado()
        << ": Perimetro = " << quadrado_2.calcPerimetro()
        << ", Angulo Interno = " << quadrado_2.calcAngulo()
        << ", Area = " << quadrado_2.calcArea()
        << endl << endl;

    // Informa dados do triângulo de tamanho de lado 3
    cout << "Poligono de lado = " << triangulo_1.getNumLados()
        << ", tamanho de cada lado = " << triangulo_1.getTamLado()
        << ": Perimetro = " << triangulo_1.calcPerimetro()
        << ", Angulo Interno = " << triangulo_1.calcAngulo()
        << ", Area = " << triangulo_1.calcArea()
        << endl << endl;

    // Informa dados do triângulo de tamanho de lado 6
    cout << "Poligono de lado = " << triangulo_2.getNumLados()
        << ", tamanho de cada lado = " << triangulo_2.getTamLado()
        << ": Perimetro = " << triangulo_2.calcPerimetro()
        << ", Angulo Interno = " << triangulo_2.calcAngulo()
        << ", Area = " << triangulo_2.calcArea()
        << endl;
}