#pragma once

#include "Universidade.hpp"

using std::cout;
using std::cin;
using std::endl;

class Pessoa
{
private:
    int idade, dia, mes, ano;
    char nome[30];
    Universidade* univFiliada;
public:
    //Construtora
    Pessoa(int _diaNas = 0, int _mesNas = 0, int _anoNas = 0, const char* _nome = "", Universidade* _universidade = nullptr);

    //Destrutora
    ~Pessoa();

    // Guarda o valor da idade calculada
    void setIdade(int _diaAt, int _mesAt, int _anoAt);

    // Set's para o dia, mês e ano de nascimento 
    bool setDia(int _dia);
    bool setMes(int _mes);
    bool setAno(int _ano);

    void setNome(const char* _nome);

    // Set para a universidade ao qual é filiado
    void setUnivFiliada(Universidade* _universidade);


    // Funções Get's
    int getIdade();
    const char* getNome();
    Universidade* getUnivFiliada();

    // Calcula a idada e retorna ela
    int calculaIdade(int _diaAt, int _mesAt, int _anoAt);

    // Imprime os dados da pessoa
    void imprimeDados();
};
