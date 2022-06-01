#pragma once

#include "CarrinhoDeCompras.hpp"

class Principal
{
private:
	CarrinhoDeCompras carrinho;
public:
	//Construtora
	Principal();

	//Destrutoras
	~Principal();
	
	void executar();
};