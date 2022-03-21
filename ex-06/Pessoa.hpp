#include <iostream>

class Pessoa
{
private:
    int idade, dia, mes, ano;
    std::string nome;
public:
    //Construtoras
    Pessoa(int diaNas, int mesNas, int anoNas, std::string n);
    Pessoa();

    //Destrutora
    ~Pessoa();

    void setIdade(int diaAt, int mesAt, int anoAt);
    bool setDia(int d);
    bool setMes(int m);
    bool setAno(int a);
    void setNome(std::string n);
    bool setDataNascimento(int i, int d, int a);

    int getIdade() const;
    int getDia() const;
    int getMes() const;
    int getAno() const;
    std::string getNome() const;

    int calculaIdade(int diaAt, int mesAt, int anoAt);

    void printIdadeNome();
};
