#include "Horario.hpp"

//Construtoras
Horario::Horario(int h, int m)
{
    ehValido(h, m);
}

Horario::Horario() :
hora(0), min(0)
{

}

//Destrutora
Horario::~Horario()
{

}

//Funções Set's
bool Horario::setHora(int h)
{
    //Testa se h é um valor de hora válido
    if(horaEhValido(h))
    {
        hora = h;
        return true;
    }
    return false;
}

bool Horario::setMin(int m)
{
    //Testa se m é um valor de minuto válido
    if(minEhValido(m))
    {
        min = m;
        return true;
    }
    return false;
}

//Funções Get's
int Horario::getHora() const
{
    return hora;
}

int Horario::getMin() const
{
    return min;
}

int Horario::calculaIntervalo(Horario horario) const
{
    int intervalo = (horario.getHora() - hora)*MIN_POR_HORA + horario.getMin() - min;
    //Retorna a diferença entre as horas (transformadas em minutos) + diferença entre os minutos
    return intervalo > 0 ? intervalo : intervalo + MIN_POR_DIA;
}

//Verifica se a entrada de hora e minuto são válidos
bool Horario::ehValido(int h, int m) const
{
    return horaEhValido(h) && minEhValido(m);
}

bool Horario::horaEhValido(int h) const
{
    if(h < 0 || h > MAX_HORA){
        std::cout << "Hora(s) inválida!" << std::endl;
        return false;
    }
    return true;
}



bool Horario::minEhValido(int m) const
{
    if(m < 0 || m > MAX_MIN){
        std::cout << "Minuto(s) inválido!" << std::endl;
        return false;
    }
    return true;
}
