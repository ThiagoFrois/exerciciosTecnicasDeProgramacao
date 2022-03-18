#include <iostream>
#define MIN_POR_HORA 60
#define MIN_POR_DIA 1440
#define MAX_MIN 59
#define MAX_HORA 23

class Horario
{
private:
    int hora, min;

public:
    //Construtoras
    Horario(int h, int m);
    Horario();

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

    //Verifica se entrada de hora e minuto são válidos
    bool ehValido(int h, int m) const;
    bool horaEhValido(int h) const;
    bool minEhValido(int m) const;
};
