#include "Horario.hpp"

class Principal
{
private:
    Horario entrada;
    Horario saida;
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    //Funções Set's
    void setHorarioEntrada(int h, int m);
    void setHorarioSaida(int h, int m);
    void setHorarios();

    //Funções Get's
    Horario getHorarioEntrada() const;
    Horario getHorarioSaida() const;

    //Calcula a diferença entre horarios
    int calculaIntervalo() const;

    //Calcula o custo de um intervalo de horarários
    float calculaCusto() const;

    void executar();
};
