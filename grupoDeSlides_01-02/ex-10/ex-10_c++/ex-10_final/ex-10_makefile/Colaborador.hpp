#include <iostream>
#include <cmath>
#define HORAS_TRABALHADAS_MES_PADRAO 80

enum vinculo{EMPREGADO, SOCIO, ESTAGIARIO};


class Colaborador
{
private:
    std::string nome;
    int tempoServico, tipoVinculo, horasTrabalhaDia;
    float valorHoraTrabalho;
    float rendimento, custo;
public:
    //Construtoras
    Colaborador(std::string n, int vinculo);
    Colaborador();

    //Destrutora
    ~Colaborador();

    //Set's
    void setNome(std::string n);
    bool setTempoServico(int temp);
    bool setVinculo(int vinculo);
    bool setValorHoraTrabalho(float valor);
    bool setHorasTrabalhoDia(int horas);

    //Get's
    std::string getNome() const;
    float getRedimento() const;
    float getCusto() const;

    //Função calculaRendimento sobrecarregada
    void calculaRendimento(int horasTrabalhadas);

    void calculaCusto();
};
