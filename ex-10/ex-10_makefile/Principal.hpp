#include "Colaborador.hpp"
class Principal
{
private:
    Colaborador colaboradores[3];
public:
    //Construtora
    Principal();

    //Destrutora
    ~Principal();

    Colaborador getMaiorRendimento();
    Colaborador getMaiorCusto();

    void getColaboradores();

    void executar();
};
