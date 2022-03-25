#include <iostream>

class Vetor
{
private:
    int dx, dy;
public:
    //Construtoras
    Vetor(int x, int y);
    Vetor();

    //Destrutora
    ~Vetor();

    //Set's
    void setDx(int x);
    void setDy(int y);

    //Get's
    int getDx() const;
    int getDy() const;

    //Operadores sobrecarregados
    Vetor operator+(Vetor v);
    Vetor operator*(int i);
};
