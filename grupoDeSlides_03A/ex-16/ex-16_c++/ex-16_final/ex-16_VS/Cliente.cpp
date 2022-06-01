#include "Cliente.hpp"

Cliente::Cliente(const char* _nome, const char* _cpf)
{
    // Inicializa as conta com nullptr
    for (int i = 0; i < 13; i++)
    {
        contas[i] = nullptr;
    }

    // Iniciliza os outros atributos
    strcpy(nome, _nome);
    strcpy(cpf, _cpf);
    numContasT = 0;
    numContasV = 0;
}

Cliente::~Cliente()
{

}

// Víncula o cliente a uma conta já criada
void Cliente::vincularConta(Conta* _conta)
{
    if (_conta->getNumUsuarios() == 2) 
    {
        cout << "O número máximo de clientes nessa conta já foi atingido." << endl;
        return;
    }
    else if (numContasV == 10)
    {
        cout << "Número máximo de contas não titulares já foi atingido." << endl;
        return;
    }
    contas[3 + numContasV] = _conta;
}

// Se um usuário cria uma conta ele é o titular.
void Cliente::criarConta(Conta* _conta)
{
    if (numContasT == 3) 
    {
        cout << "Limite de contas titulares atingido!" << endl;
        return;
    }

    contas[numContasT] = _conta;
    numContasT++;
}

const char* Cliente::gerarRelatorio()
{
    int i = 0, j = 1;
    char relatorio[1000];
    char aux[1000];

    strcpy(relatorio, "");
    strcpy(aux, "");
    
    // Guarda os dados do cliente com uma string em aux
    sprintf(aux, "Nome: %s e CPF: %s\n", nome, cpf);

    // Concatena em relatório
    strcat(relatorio, aux);

    // Concatena os dados das contas do cliente em relatório usanda a variável aux
    for (i = 0; i < 13; i++)
    {
        if (contas[i] == nullptr)
            continue;
        if(i < 3)
            sprintf(aux, "Conta %d (TITULAR): -> Número da conta: %d | Saldo da conta: R$ %.2f\n", j, contas[i]->getNumero(), contas[i]->getSaldo());
        else 
            sprintf(aux, "Conta %d: -> Número da conta: %d | Saldo da conta: R$ %.2f\n", j, contas[i]->getNumero(), contas[i]->getSaldo());
        strcat(relatorio, aux);
        j++;
    }
    if (i == 0)
        strcat(relatorio, "Sem contas criadas.\n");
    strcat(relatorio, "\n");

    return relatorio;
}

// Permite o cliente depositar ser um certo valor em uma conta
void Cliente::aplicarRecursos(int _numConta, double _valor)
{
    int i = 0;
  
    // Acha a conta
    while (contas[i]->getNumero() != _numConta && i < 3)
    {
        i++;
    }

    if (i == 3)
    {
        cout << "O cliente não possui uma conta com o número " << _numConta << endl;
        return;
    }
    contas[i]->depositar(_valor);
}
