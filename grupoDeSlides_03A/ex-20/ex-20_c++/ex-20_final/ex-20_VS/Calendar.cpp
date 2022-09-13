#define _CRT_SECURE_NO_WARNINGS

#include <ctime>
#include "Calendar.hpp"

Calendar::Calendar() {
	time_t c_timestamp = time(NULL);
	tm* now = localtime(&c_timestamp);
	_dia = now->tm_mday;
	_mes = now->tm_mon + 1;
	_ano = now->tm_year + 1900;
}

Calendar Calendar::getInstance() {
	return Calendar();
}

bool Calendar::set(int dia, int mes, int ano) {
	if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0)
		return false;
	_dia = dia;
	_mes = mes;
	_ano = ano;
	return  true;
}

int Calendar::get(int field) const {
	switch (field) {
	case Calendar::DATE:
		return _dia;
	case Calendar::MONTH:
		return _mes;
	case Calendar::YEAR:
		return _ano;
	default:
		return -1;
	}
}

std::ostream& operator<< (std::ostream& stream, const Calendar& calendar) {
	stream << calendar._dia << "/" << calendar._mes << "/" << calendar._ano;
	return stream;
}