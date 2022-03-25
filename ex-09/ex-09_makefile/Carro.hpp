#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

#define ESTRADA 0
#define CIDADE 1
#define NIVEL_COMB_CRITICO 1

class Carro
{
private:
    std::string nome;
    float combustivelMax, combustivelAt;
    int consumo, distPerc;
    int disPercLocal[2];
public:
    //Construtoras
    Carro(float max, int cons, std::string n);
    Carro();

    //Destrutora
    ~Carro();

    //Set's
    bool setCombMax(float max);
    bool setConsumo(int comb);
    void setNome(std::string n);

    //Get's
    float getCombMax() const;
    float getCombAt() const;
    int getConsumo() const;
    std::string getNome() const;

    void andar(int dist, int local);

    void abastecer(float quantComb);

    void viajem(int dist, float comb);
};
