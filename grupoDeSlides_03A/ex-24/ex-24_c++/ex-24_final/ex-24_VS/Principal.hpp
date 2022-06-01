#pragma once

#include "CalcControle.hpp"
#include "CalcDados.hpp"
#include "CalcInterface.hpp"

class Principal
{
private:
	CalcControle controle;
	CalcDados dados; // Pode ser um vetor de dados (opera��es bin�rias)
	CalcInterface interface;
public:
	//Construtora
	Principal();

	//Destrutoras
	~Principal();

	void executar();
};