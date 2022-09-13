#pragma once

#include <iostream>
using namespace std;

// Simula class Calendar do Java
class Calendar
{
public:
	
	/* Constantes - Simula atributos para get */
	static constexpr const int DATE = 0;
	static constexpr const int MONTH = 1;
	static constexpr const int YEAR = 2;

	/* 
	* Retorna um objeto do tipo Calendar.
	* Os atributos são inicializados para os 
	* valores atuais de data.
	*/
	static Calendar getInstance();

	/**
	* Ajusta data contida na class Calendar.
	* Retorna true se a data foi ajustada,
	* false caso contrário.
	*/
	bool set(int dia, int mes, int ano);

	/*
	* Obtêm dia, mes ou ano de acordo com as constantes 
	* definidas acima.
	* Caso a constante seja inválida, retorna -1.
	**/
	int get(int field) const;

	friend std::ostream& operator<< (std::ostream& stream, const Calendar& calendar);

private:
	int _dia{ 0 };
	int _mes{ 0 };
	int _ano{ 0 };

	/* Construtor Privado - Simula o comportamento da classe Calendar no Java */
	Calendar();
};

