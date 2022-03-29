#include "Carro.hpp"

//Construtoras

Carro::Carro(float max, int cons, std::string n)
: combustivelAt{0}, distPerc{0}, disPercLocal{0, 0}
{
    setNome(n);
    if(!setCombMax(max) || !setConsumo(cons))
        exit(0);
}

Carro::Carro() :
combustivelMax{1}, combustivelAt{0}, consumo{1}, distPerc{0}, disPercLocal{0, 0}
{
    setNome("");
}

//Destrutora
Carro::~Carro()
{

}

bool Carro::setCombMax(float max)
{
    if(max < 1)
    {
        std::cout << "Capacidade máxima do tanque inválida!" << std::endl;
        return false;
    }
    combustivelMax = max;
    return true;
}

bool Carro::setConsumo(int cons)
{
    if(cons < 1)
    {
        std::cout << "Consumo do veículo incorreto!" << std::endl;
        return false;
    }
    consumo = cons;
    return true;
}

void Carro::setNome(std::string n)
{
    nome = n;
}

float Carro::getCombMax() const
{
    return combustivelMax;
}

float Carro::getCombAt() const
{
    return combustivelAt;
}

std::string Carro::getNome() const
{
    return nome;
}

int Carro::getConsumo() const
{
    return consumo;
}

void Carro::andar(int dist, int local)
{
    if(combustivelAt < (float)dist/consumo){
        std::cout << "Combustivel insuficiente." << std::endl;
        disPercLocal[local] += combustivelAt*consumo;
        distPerc += combustivelAt*consumo;
        combustivelAt = 0;
    }
    else{
        combustivelAt -= (float)dist/consumo;
        disPercLocal[local] += dist;
        distPerc += dist;
    }
}

void Carro::abastecer(float quantComb)
{
    if(quantComb + combustivelAt > combustivelMax)
        combustivelAt = combustivelMax;
    else
        combustivelAt += quantComb;
}

void Carro::viajem(int dist, float comb)
{
    std::cout << "Faltam " << dist << " para chegar ao destino..." << std::endl << std::endl;
    abastecer(comb);
    unsigned seed = time(0);
    srand(seed);
    while(dist > 0)
    {
        int distTrajeto = rand()%10 + 1;
        if(distTrajeto > dist)
            distTrajeto = dist;
        //std::cout << "Trajeto: " << distTrajeto << std::endl;
        if(combustivelAt <= NIVEL_COMB_CRITICO)
            abastecer(combustivelMax/2);
        andar(distTrajeto, rand()%2);
        dist -= distTrajeto;
    }

    std::cout << "O carro " << nome << " viajou por " << distPerc << " Km, sendo que " << disPercLocal[CIDADE] << " Km eram na cidade, e " << disPercLocal[ESTRADA] << " Km eram na estrada." << std::endl << std::endl;
}
