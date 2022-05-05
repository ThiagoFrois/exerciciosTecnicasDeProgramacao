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
	//Construtoras
	Item(const char* n, float v, int q = 1);
	Item();

	//Destrutoras
	~Item();
	
	//Fun��es Set's
	void setQuantidade(int q);

	//Fun��es Get's
	const char* getNome();
	float getValorTotal();
	int getQuantidade();
};