#pragma once

#pragma warning(disable:4996)

#include <iostream>
using std::cout;
using std::endl;

class Item
{
private:
	char nome[30];
	float valor;
	int quantidade;
public:
	//Construtora
	Item(const char* _nome = "", float _valor = 0, int _quantidade = 0);

	//Destrutora
	~Item();
	
	//Funções Set's
	void setQuantidade(int _quantidade);

	//Funções Get's
	const char* getNome();
	float getValorTotal();
	int getQuantidade();
};