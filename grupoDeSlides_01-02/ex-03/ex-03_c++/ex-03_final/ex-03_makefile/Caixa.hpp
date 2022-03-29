#include <iostream>

class Caixa
{
private:
    int largura, altura, profundidade;

public:
    //Construtora
    Caixa();

    //Destrutora
    ~Caixa();

    //Funções Set's
    void setLargura(int l);
    void setAltura(int a);
    void setProfundidade(int p);

    //Funções Get's
    int getLargura() const;
    int getAltura() const;
    int getProfundidade() const;

    //Calcula área externa da caixa
    int calcAreaExt(int l, int a, int p);
    void printAreaExt();

    //Calcula volume da caixa
    int calcVolume(int l, int a, int p);
    void printVolume();

    void printAreaVolume();
};
