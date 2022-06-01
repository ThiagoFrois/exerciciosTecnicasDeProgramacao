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
	getCoordenadas();
	cout << "Perimetro: " << triangulo.getPerimetro() << endl;
}

void Principal::getCoordenadas()
{
	int x, y;
	for (int i = 0; i < 3; i++)
	{
		cout << "Coordenada " << i + 1 << ": ";
		cin >> x >> y;
		triangulo.setPonto(Ponto(x, y), i);
	}

	triangulo.calcPerimetro();
}