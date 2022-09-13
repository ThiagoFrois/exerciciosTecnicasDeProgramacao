#pragma once

#include "Universidade.hpp"
#include "Calendar.hpp"

class Pessoa
{
private:
    char nome[30];
    Departamento* deptFiliada;
    Calendar dataNascimento;
    int idade{ 0 };
public:
    //Construtora
    Pessoa(int _diaNas = 0, int _mesNas = 0, int _anoNas = 0, const char* _nome = "", Departamento* _departamento = nullptr);

    //Destrutora
    ~Pessoa();

    // Funções Set's para a data de nascimento
    void setIdade();
    bool setDataNascimento(int _dia, int _mes, int _ano);

    void setNome(const char* _nome);

    // Função Set para o departamento ao qual é filiado
    void setDeptFiliada(Departamento* _departamento);

    // Funções Get's
    int getIdade();
    const char* getNome();
    Departamento* getDeptFiliada();

    int calculaIdade(int diaAt, int mesAt, int anoAt);
 
    void imprimeDados();
};
