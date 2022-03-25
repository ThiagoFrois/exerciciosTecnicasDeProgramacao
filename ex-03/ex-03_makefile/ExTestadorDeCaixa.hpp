#include "Caixa.hpp"

class ExTestadorDeCaixa
{
private:
    Caixa c1, c2;

public:
    //Construtor
    ExTestadorDeCaixa();

    //Destrutor
    ~ExTestadorDeCaixa();

    void setCaixa(int l, int a, int p, Caixa& c);

    void perguntaEntradas();

    void executar();
};
