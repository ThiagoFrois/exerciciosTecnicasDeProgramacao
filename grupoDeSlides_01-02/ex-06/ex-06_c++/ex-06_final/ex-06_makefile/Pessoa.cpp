#include "Pessoa.hpp"

Pessoa::Pessoa(int diaNas, int mesNas, int anoNas, std::string n)
{
    if(!setDataNascimento(diaNas, mesNas, anoNas))
        exit(0);
    nome = n;

}

Pessoa::Pessoa() :
idade{0}, dia{0}, mes{0}, ano{0}, nome{""}
{

}

Pessoa::~Pessoa()
{

}

void Pessoa::setIdade(int diaAt, int mesAt, int anoAt)
{
    idade = calculaIdade(diaAt, mesAt, anoAt);
}

bool Pessoa::setDia(int d)
{
    if(d < 0 || d > 31)
    {
        std::cout << "Dia incorreto!" << std::endl;
        return false;
    }
    dia = d;
    return true;
}

bool Pessoa::setMes(int m)
{
    if(m < 1 || m > 12)
    {
        std::cout << "Mes incorreto!" << std::endl;
        return false;
    }
    mes = m;
    return true;
}

bool Pessoa::setAno(int a)
{
    if(a < 0)
    {
        std::cout << "Ano incorreto!" << std::endl;
        return false;
    }
    ano = a;
    return true;
}

void Pessoa::setNome(std::string n)
{
    nome = n;
}


bool Pessoa::setDataNascimento(int d, int m, int a)
{
    return setDia(d) && setMes(m) && setAno(a);
}

int Pessoa::getIdade() const
{
    return idade;
}

int Pessoa::getDia() const
{
    return dia;
}

int Pessoa::getMes() const
{
    return mes;
}

int Pessoa::getAno() const
{
    return ano;
}

std::string Pessoa::getNome() const
{
    return nome;
}

int Pessoa::calculaIdade(int diaAt, int mesAt, int anoAt)
{
    int i = anoAt - ano;

    if(mes > mesAt)
        i--;
    else if(mes == mesAt)
    {
        if(dia > diaAt)
            i--;
    }
    return i;
}

void Pessoa::printIdadeNome()
{
    std::cout << "A idade de " << getNome() << " é " << getIdade() << std::endl;
}
