#include <iostream>

class PolReg
{
private:
    int n_lados, tam_lado;
    int perimetro, angulo, area;
public:
    //Construtoras
    PolReg(int n, int t);
    PolReg();

    //Destrutora
    ~PolReg();

    //Set's
    bool setLados(int n);
    bool setTamanho(int t);

    //Get's
    int getPerimetro() const;
    int getAngulo() const;
    int getArea() const;

    void calcPerimetro();
    void calcAngulo();
    int calcArea();
};
