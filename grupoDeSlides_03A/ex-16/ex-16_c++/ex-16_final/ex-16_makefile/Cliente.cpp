#include "Cliente.hpp"

Cliente::Cliente(const char* n, const char* c)
{
    incializaContasVazias();
    strcpy(nome, n);
    strcpy(cpf, c);
}

Cliente::Cliente()
{
    incializaContasVazias();
    strcpy(nome, "");
    strcpy(cpf, "");
}

Cliente::~Cliente()
{

}

void Cliente::incializaContasVazias()
{
    for(int i = 0; i < 3; i++)
    {
        contas[i] = nullptr;
    }
}

void Cliente::criarConta(Conta* c)
{
    int i = 0;
    while(contas[i] != nullptr && i < 3)
        i++;

    if(i == 3)
        cout << "Não é possível criar mais contas!" << endl;
    else
    {
        contas[i] = c;
    }
}

void Cliente::removerConta(int num)
{
    int i = 0;
    while(contas[i]->getNumero() != num)
    {
        i++;
    }

    contas[i] = nullptr;
}

const char* Cliente::gerarRelatorio()
{
    int i = 0;
    char*  relatorio;
    char* aux;
    relatorio = strcat(nome, " ");
    relatorio = strcat(relatorio, cpf);
    relatorio = strcat(relatorio, " ");
    while(contas[i] != nullptr)
    {
        //aux = strcat(, " ");
        //relatorio = strcat(relatorio, aux);
        i++;
    }
    return relatorio;
}

void Cliente::aplicarRecursos(int num, float valor)
{
    int i = 0;

    while(contas[i]->getNumero() != num && i < 3)
    {
        i++;
    }

    if(i == 3)
        cout << "A conta com o número " << num << " não existe!" << endl;
    else
    {
        contas[i]->depositar(valor);
    }
}


