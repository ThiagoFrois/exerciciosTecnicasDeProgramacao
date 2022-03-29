//Indicando o caminho relativo
//do Caixa.h. Este tipo de
//configura��o geralmente pode
//ser feito no pr�prio ambiente
//(no caso, op��es do Code::Blocks)
#include "..\include\Caixa.h"

//Lembrar de incluir o operador
//:: (resolu��o de escopo) para
//indicar que setLargura � um
//m�todo da classe Caixa.
bool Caixa::setLargura(double largura)
{
    if (largura > 0)
    {

        //largura "deste objeto" (ou seja, o
        //atributo) recebe largura que � o
        //par�metro.
        //Diferen�a em rela��o a
        //Java: para usar o this
        //em C++, utilizar o
        //operador de seta (->)
        this->largura = largura;
        return true;
    }
    return false;
}

bool Caixa::setAltura(double altura)
{
    if (altura > 0)
    {
        this->altura = altura;
        return true;
    }
    return false;
}

bool Caixa::setProfundidade(double profundidade)
{
    if (profundidade > 0)
    {
        this->profundidade = profundidade;
        return true;
    }
    return false;
}

double Caixa::calcularAreaExt()
{
    //vari�vel local do m�todo -> deixa de
    //existir quando o m�todo retorna
    double area;
    area = 2*(largura*altura + largura*profundidade + altura*profundidade);
    return area;
}

    //Idem �s considera��es para o calcularAreaExt
double Caixa::calcularVolume()
{
    //vari�vel local do m�todo -> deixa de
    //existir quando o m�todo retorna
    double volume;
    volume = largura*altura*profundidade;
    return volume;
}
