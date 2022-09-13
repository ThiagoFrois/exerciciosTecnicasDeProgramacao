#include "Pessoa.hpp"

Pessoa::Pessoa(int _diaNas, int _mesNas, int _anoNas, const char* _nome, Departamento* _departamento) :
deptFiliada(_departamento)
{
    if (!(setDia(_diaNas) && setMes(_mesNas) && setAno(_anoNas)))
        exit(0);
    strcpy(nome, _nome);

    time_t tSac = time(NULL);
    tm tms = *localtime(&tSac);

    setIdade(tms.tm_mday, tms.tm_mon + 1, tms.tm_year + 1900);
}

Pessoa::~Pessoa()
{

}

void Pessoa::setIdade(int _diaAt, int _mesAt, int _anoAt)
{
    idade = calculaIdade(_diaAt, _mesAt, _anoAt);
}

bool Pessoa::setDia(int _dia)
{
    if (_dia < 1 || _dia > 31)
    {
        cout << "Dia incorreto!" << endl;
        return false;
    }
    dia = _dia;
    return true;
}

bool Pessoa::setMes(int _mes)
{
    if (_mes < 1 || _mes > 12)
    {
        cout << "Mes incorreto!" << endl;
        return false;
    }
    mes = _mes;
    return true;
}

bool Pessoa::setAno(int _ano)
{
    if (_ano < 0)
    {
        cout << "Ano incorreto!" << endl;
        return false;
    }
    ano = _ano;
    return true;
}

void Pessoa::setNome(const char* _nome)
{
    strcpy(nome, _nome);
}

void Pessoa::setDeptFiliada(Departamento* _departamento)
{
    deptFiliada = _departamento;
}


int Pessoa::getIdade()
{
    return idade;
}

const char* Pessoa::getNome()
{
    return nome;
}

Departamento* Pessoa::getDeptFiliada()
{
    return deptFiliada;
}

int Pessoa::calculaIdade(int _diaAt, int _mesAt, int _anoAt)
{
    // Diferença de anos
    int i = _anoAt - ano;

    // Verifica se ainda não chegou no mês que faz aniversáriop
    if (mes > _mesAt)
        i--;
    else if (mes == _mesAt)
    {
        if (dia > _diaAt) // Verifica se ainda não chegou no dia do aniversário
            i--;
    }
    return i;
}

void Pessoa::imprimeDados()
{
    cout << nome << " tem " << idade << " anos e trabalha na universidade de " << deptFiliada->getUniversidade()->getNome() << " no departamento de " << deptFiliada->getNome() << endl;
}
