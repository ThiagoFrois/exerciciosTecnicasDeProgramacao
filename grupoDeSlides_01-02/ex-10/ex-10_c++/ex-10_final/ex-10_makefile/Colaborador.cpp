#include "Colaborador.hpp"

//Construtoras
Colaborador::Colaborador(std::string n, int vinc) :
tempoServico{0}, horasTrabalhaDia{0}, valorHoraTrabalho{0}
{
    nome = n;
    if(!setVinculo(vinc))
        exit(0);
}

Colaborador::Colaborador() :
nome{""}, tempoServico{0}, tipoVinculo{0}, horasTrabalhaDia{0}, valorHoraTrabalho{0}
{

}

//Destrutora
Colaborador::~Colaborador()
{

}

//Set's
void Colaborador::setNome(std::string n)
{
    nome = n;
}

bool Colaborador::setTempoServico(int temp)
{
    if(temp < 0){
        std::cout << "Tempo de serviço incorreto!" << std::endl;
        return false;
    }
    tempoServico = temp;
    return true;
}

bool Colaborador::setVinculo(int vinc)
{
    if(vinc < 0 || vinc > 2)
    {
        std::cout << "Vínculo incorreto!" << std::endl;
    }
    tipoVinculo = vinc;
    return true;
}

bool Colaborador::setValorHoraTrabalho(float valor)
{
    if(valor < 0)
    {
        std::cout << "Valor da hora de trabalho incorreto!" << std::endl;
        return false;
    }
    valorHoraTrabalho = valor;
    if(tempoServico >= 1)
        valorHoraTrabalho *= std::pow(1.1, tempoServico);
    return true;
}

bool Colaborador::setHorasTrabalhoDia(int horas)
{
    if(horas < 0)
    {
        std::cout << "Número de horas trabalhadas por dia incorreto!" << std::endl;
    }
    horasTrabalhaDia = horas;
    return true;
}

std::string Colaborador::getNome() const
{
    return nome;
}

float Colaborador::getRedimento() const
{
    return rendimento;
}

float Colaborador::getCusto() const
{
    return custo;
}

void Colaborador::calculaRendimento(int horasTrabalhadas)
{
    if(tipoVinculo == SOCIO)
    {
        rendimento = valorHoraTrabalho*horasTrabalhadas;
    }
    else if(tipoVinculo == EMPREGADO)
    {
        if(horasTrabalhadas > 144){
            int resto = horasTrabalhadas - 144;
            rendimento = 144*valorHoraTrabalho + resto*valorHoraTrabalho*1.5;
        }
        else
            rendimento = valorHoraTrabalho*horasTrabalhadas;
    }
    else
        rendimento = valorHoraTrabalho*HORAS_TRABALHADAS_MES_PADRAO;
    std::cout << "Redimento do " << nome << " é " << rendimento << std::endl;
}

void Colaborador::calculaCusto()
{
    if(tipoVinculo == ESTAGIARIO)
        custo = rendimento;
    else if(tipoVinculo == SOCIO)
        custo = rendimento;
    else
        custo = rendimento*1.8;
std::cout << "Custo do " << nome << " é " << custo << std::endl;
}
