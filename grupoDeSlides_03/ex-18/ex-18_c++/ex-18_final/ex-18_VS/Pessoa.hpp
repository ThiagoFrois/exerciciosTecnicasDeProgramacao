#pragma once

#include "Universidade.hpp"

class Pessoa
{
private:
    int idade, dia, mes, ano;
    char nome[30];
    Universidade* univFiliada;
public:
    //Construtoras
    Pessoa(int diaNas, int mesNas, int anoNas, const char* n, Universidade* u = nullptr);
    Pessoa();

    //Destrutora
    ~Pessoa();

    void setIdade(int diaAt, int mesAt, int anoAt);
    bool setDia(int d);
    bool setMes(int m);
    bool setAno(int a);
    void setNome(const char* n);
    bool setDataNascimento(int i, int d, int a);
    void setUnivFiliada(Universidade* u);

    int getIdade();
    const char* getNome();
    Universidade* getUnivFiliada();

    int calculaIdade(int diaAt, int mesAt, int anoAt);

    void imprimeDados();
};
