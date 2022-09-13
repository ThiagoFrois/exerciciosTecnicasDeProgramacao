#include "Pessoa.hpp"

Pessoa::Pessoa(int _diaNas, int _mesNas, int _anoNas, const char* _nome, Universidade* _universidade) :
univFiliada(_universidade)
{
    // Verifica se todos os valores da data de nascimento estão corretos
    if (!(setDia(_diaNas) && setMes(_mesNas) && setAno(_anoNas)))
        exit(0);

    strcpy(nome, _nome);


    // Calcula e guarda a idade, com base naa data atual
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
    if (_dia <= 0 || _dia > 31)
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

void Pessoa::setUnivFiliada(Universidade* _universidade)
{
    univFiliada = _universidade;
}


int Pessoa::getIdade()
{
    return idade;
}

const char* Pessoa::getNome()
{
    return nome;
}

Universidade* Pessoa::getUnivFiliada()
{
    return univFiliada;
}

int Pessoa::calculaIdade(int _diaAt, int _mesAt, int _anoAt)
{
    int i = _anoAt - ano; // Obtém a diferença de anos

    if (mes > _mesAt) // Verifica se não já passou do mês que faz aniversário
        i--;
    else if (mes == _mesAt)
    {
        if (dia > _diaAt) // Verifica se não passou a sua data de aniversário
            i--;
    }
    return i;
}

void Pessoa::imprimeDados()
{
    cout << nome << " tem " << idade << " anos e trabalha na universidade de " << univFiliada->getNome() << endl;
}
