#include "Horario.hpp"

//Construtoras
Horario::Horario(int h, int m)
{
    if(!setHora(h))
        exit(0);
    if(!setMin(m))
        exit(0);
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
    if(h >= 0 && h <= MAX_HORA)
    {
        hora = h;
        return true;
    }
    return false;
}

bool Horario::setMin(int m)
{
    //Testa se m é um valor de minuto válido
    if(m >= 0 && m <= MAX_MIN)
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