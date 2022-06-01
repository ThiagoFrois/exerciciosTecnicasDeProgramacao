#pragma once

#include "Principal.hpp"

//Construtora
Principal::Principal()
{
	controle.setInterface(&interface);
	controle.setDados(&dados);
}

//Destrutoras
Principal::~Principal()
{

}

void Principal::executar()
{
	controle.executar();
}