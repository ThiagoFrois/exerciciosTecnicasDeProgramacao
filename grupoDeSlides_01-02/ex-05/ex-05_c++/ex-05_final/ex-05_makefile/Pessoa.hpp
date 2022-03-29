#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

class Pessoa
{
private:
    int idade, dia, mes, ano;
    char nome[30];
public:
    //Construtora
    Pessoa();

    //Destrutora
    ~Pessoa();

    void setIdade(int diaAt, int mesAt, int anoAt);
    bool setDia(int d);
    bool setMes(int m);
    bool setAno(int a);
    void setNome(const char* n);
    bool setDataNascimento(int i, int d, int a);

    //Fun��es Get's
    int getIdade();
    const char* getNome();

    //Calcula a idade
    int calculaIdade(int diaAt, int mesAt, int anoAt);

    //Imprime na tela de sa�da a idade e o nome
    void printIdadeNome();
};
