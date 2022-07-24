#include "Caixa.hpp"

class ExTestadorDeCaixa
{
private:
    Caixa caixa1, caixa2;

public:
    ExTestadorDeCaixa();
    ~ExTestadorDeCaixa();

    void PerguntaEntradas();

    void MostrarAreaEVolume(Caixa caixa);

    void Executar();
};
