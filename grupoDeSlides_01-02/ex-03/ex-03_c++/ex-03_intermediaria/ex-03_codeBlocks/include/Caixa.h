#ifndef CAIXA_H
#define CAIXA_H


class Caixa
{
    //Por defini��o, todos os membros
    //de uma classe em C++ s�o private,
    //a menos que se especifique o
    //contr�rio.
private:
    double largura;
    double altura;
    double profundidade;
    //A declara��o public abaixo
    //especifica que todos os membros
    //a partir deste ponto s�o p�blicos
public:
    //cabe�alho/prot�tipo dos m�todos
    bool setLargura(double largura);
    bool setAltura(double altura);
    bool setProfundidade(double profundidade);
    double calcularAreaExt();
    double calcularVolume();


};

#endif // CAIXA_H
