#include "Principal.hpp"

//Construtora
Principal::Principal()
{

}

//Destrutoras
Principal::~Principal()
{

}

void Principal::executar()
{
    lerPonto();
    lerPonto();
    lerPonto();
    triangulo.calcPerimetro();
    cout << triangulo.getPerimetro() << endl;
    /*int opcao = 1;
    while (opcao != 0) {
        std::cout << "\n=========================================" << std::endl;
        std::cout << "1 - Incluir ponto no poligono\n2 - Remover ponto do Poligono\n3 - Imprimir perimetro do poligono\n4 - Imprimir todos os prontos\n0 - Sair\n";
        std::cout << "=========================================\nSelecione uma opçao: ";
        cin >> opcao;
        std::cout << "=========================================" << std::endl;
        switch (opcao) {
        case 1:
            lerPonto();
            break;
        case 2:
            removerPonto();
            break;
        case 3:
            triangulo.calcPerimetro();
            cout << triangulo.getPerimetro() << endl;
            break;
        case 4:
            //polig.imprimirTodosPontos();
            break;
        default:
            break;
        }
    }

    cout << "Perimetro: " << triangulo.getPerimetro() << endl;*/
}

void Principal::lerPonto()
{
	int x, y;
	cout << "Coordenada: ";
	cin >> x >> y;

    aux.push_back(Ponto(x, y));
    triangulo.setPonto(&aux.back());
}

void Principal::removerPonto() {
    int x = 0;

    triangulo.imprimirTodosPontos();
    cout << "\nQual ponto deseja remover? ";

    cin >> x;

    triangulo.removerPonto(&pontos[x]);
}