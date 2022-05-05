#include "FiguraGeometrica.hpp"

//Construtora
FiguraGeometrica::FiguraGeometrica() :
pontos{nullptr}, numPontos(0), perimetro(0)
{

}

//Destrutoras
FiguraGeometrica::~FiguraGeometrica()
{

}

void FiguraGeometrica::setPonto(Ponto* p)
{
	paux.push_back(p);
	cout << paux.size() << endl;
}

void FiguraGeometrica::removerPonto(Ponto* p)
{
	vector<Ponto*>::iterator itr;

	Ponto* tmp = nullptr;
	for (itr = pontos.begin(); itr != pontos.end(); itr++) {
		tmp = *itr;
		if (tmp == p) {
			if (p != nullptr) {
				delete (p);
				pontos.erase(itr);
			}
			return;
		}
	}
}

void FiguraGeometrica::calcPerimetro()
{
	cout << "Size: " << paux.size() << endl;
	vector<Ponto*>::iterator itr;
	for (itr = paux.begin(); itr != paux.end(); itr++)
	{
		cout << (*itr)->getX() << " " << (*itr)->getY() << endl;
		//perimetro += (*itr)->calcDist(*(*(itr + 1)));
	}		
}

int FiguraGeometrica::getPerimetro()
{
	return perimetro;
}

void FiguraGeometrica::imprimirTodosPontos() {
	Ponto* tmp = NULL;
	cout << "Imprimindo pontos poligono: \nindice - (x,y)" << endl;

	if (pontos.size() < 1) {
		cout << "Nao ha pontos nesse poligono!" << endl;
		return;
	}

	for (int i = 0; i < pontos.size(); i++) {
		tmp = pontos[i];
		if (tmp)
			cout << i << " - (" << tmp->getX() << "," << tmp->getY() << ")" << endl;
		else
			cout << i << " - sem coordenadas" << endl;
	}
}
