#include <cstring>
#include "Pessoa.hpp"

Pessoa::Pessoa(int _diaNas, int _mesNas, int _anoNas, const char* _nome, Departamento* _departamento) :
deptFiliada(_departamento),
dataNascimento(Calendar::getInstance())
{
    if (!dataNascimento.set(_diaNas, _mesNas, _anoNas))
        exit(0);
    strcpy(nome, _nome);
    setIdade();
}

Pessoa::~Pessoa()
{

}

void Pessoa::setIdade()
{
    const auto dataAtual = Calendar::getInstance();
    idade = calculaIdade(dataAtual.get(Calendar::DATE), dataAtual.get(Calendar::MONTH),
        dataAtual.get(Calendar::YEAR));
}

bool Pessoa::setDataNascimento(int _dia, int _mes, int _ano) {
    return dataNascimento.set(_dia, _mes, _ano);
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
    int i = _anoAt - dataNascimento.get(Calendar::YEAR);

    // Verifica se ainda não chegou no mês que faz aniversáriop
    if (dataNascimento.get(Calendar::MONTH) > _mesAt)
        i--;
    else if (dataNascimento.get(Calendar::MONTH) == _mesAt)
    {
        if (dataNascimento.get(Calendar::DATE) > _diaAt) // Verifica se ainda não chegou no dia do aniversário
            i--;
    }
    return i;
}

void Pessoa::imprimeDados()
{
    cout << nome << " tem " << idade << " anos e trabalha na universidade de " << deptFiliada->getUniversidade()->getNome() << " no departamento de " << deptFiliada->getNome() << endl;
}
