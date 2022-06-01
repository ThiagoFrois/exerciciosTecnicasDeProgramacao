#include "Principal.hpp"

// Inicializa os números
Principal::Principal() :
complexo(3, 4), real(-10)
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
	cout << "----------------------- Numero complexo -------------------" << endl;
	cout << "Numero 3 + 4i" << endl << endl;

	cout << "Modulo: " << complexo.modulo() << endl;
	cout << "Angulo: " << complexo.angulo() << endl;

	cout << "----------------------- Numero real -----------------------" << endl;
	cout << "Numero -10" << endl << endl;

	cout << "Sinal: " << real.sinal() << endl;
}