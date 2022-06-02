#include "Pessoa.hpp"

Pessoa::Pessoa(const char* _nome, char _genero, int _dia, int _mes, int _ano) :
genero(_genero), dia(_dia), mes(_mes), ano(_ano)
{
	strcpy(nome, _nome);
}

Pessoa::~Pessoa()
{

}

const char* Pessoa::obterDescricao()
{
	char descricao[300];
	sprintf(descricao, "%s , %c, nasceu em %2d/%2d/%4d.", nome, genero, dia, mes, ano);

	return descricao;
}

void Pessoa::setDataNascimento(int _dia, int _mes, int _ano)
{
    if (_dia > 0 && _dia <= 31 && _mes > 0 && _mes <= 12)
    {
        // Nao esta considerando ano bissesto
        if (_dia <= 28)
        {
            dia = _dia;
            mes = _mes;
            ano = _ano;
        }
        else
        {
            if (_dia > 28 && _mes == 2 ||
                _dia > 30 && (_mes == 4 || _mes == 6 || _mes == 9 || _mes == 11))
            {
                cout << "Dia invalido para este mes! Data inicializada com valor default" << endl;
                dia = 1;
                mes = 1;
                ano = 1970;
            }
            else
            {
                dia = _dia;
                mes = _mes;
                ano = _ano;
            }
        }
    }
    else
    {
        cout << "Data de nascimento invalida! Data inicializada com valor default" << endl;
        dia = 1;
        mes = 1;
        ano = 1970;
    }
}

void Pessoa::setGenero(char _genero)
{
    if (_genero == 'm' || _genero == 'M')
        genero = 'm';
    else if (_genero == 'f' || _genero == 'F')
        genero = 'f';
    else
        cout << "Genero " << _genero << " invalido! Nao foi setado!" << endl;
}