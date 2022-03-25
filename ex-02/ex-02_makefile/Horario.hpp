#include <iostream>
#include <cassert>
#define MIN_POR_HORA 60
#define MIN_POR_DIA 1440
#define MAX_MIN 59
#define MAX_HORA 23

class Horario
{
private:
    int hora, min;

public:
    //Construtora
    Horario(int h = 0, int m = 0);

    //Destrutora
    ~Horario();

    //Funções Set's
    bool setHora(int h);
    bool setMin(int m);

    //Funções Get's
    int getHora() const;
    int getMin() const;

    //Calcula o intervalo de tempo com um horário dado
    int calculaIntervalo(Horario horario) const;

    //Verifica se as entradas de horas e/ou minutos são válidas
    bool ehValido(int h, int m) const;
    bool horaEhValido(int h) const;
    bool minEhValido(int m) const;
};
