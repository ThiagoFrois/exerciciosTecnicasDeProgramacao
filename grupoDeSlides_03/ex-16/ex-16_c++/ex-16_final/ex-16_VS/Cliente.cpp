#include "Cliente.hpp"

Cliente::Cliente(const char* n, const char* c)
{
    strcpy(relatorio, "");
    incializaContasVazias();
    strcpy(nome, n);
    strcpy(cpf, c);
    //gerarRelatorio();
}

Cliente::Cliente()
{
    strcpy(relatorio, "");
    incializaContasVazias();
    strcpy(nome, "");
    strcpy(cpf, "");
    //gerarRelatorio();
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
    if(c->getUsuarios() >= 2){
        cout << "O número máximos de clientes nessa conta já foi atingido." << endl;
        return;
    }
    while(contas[i] != nullptr && i < 3)
        i++;

    if (i == 3) {
        cout << "Não é possível criar mais contas!" << endl;
        return;
    }
    
    contas[i] = c;
}

void Cliente::removerConta(int num)
{
    int i = 0;
    while(contas[i]->getNumero() != num)
    {
        i++;
    }
    
    if (i == 3)
    {
        cout << "O cliente não possui uma conta com o número " << num << endl;
        return;
    }
    contas[i] = nullptr;
}

const char* Cliente::gerarRelatorio()
{
    int i = 0;
    strcpy(relatorio, "");

    strcpy(aux, "");

    strcpy(aux2, "");
    
    sprintf(aux, "Nome: %s e CPF: %s\n", nome, cpf);
    strcat(relatorio, aux);

    for(i = 0; i < 3; i++)
    {
        if (contas[i] == nullptr)
            continue;
        sprintf(aux, "Conta %d: -> Número da conta: %d | Saldo da conta: R$ %.2f\n", i, contas[i]->getNumero(), contas[i]->getSaldo());
        strcat(relatorio, aux);
    }
    if (i == 0)
        strcat(relatorio, "Sem contas criadas.\n");
    strcat(relatorio, "\n");

    return relatorio;
}

void Cliente::aplicarRecursos(int num, double valor)
{
    int i = 0;
  
    while (contas[i]->getNumero() != num && i < 3)
    {
        i++;
    }

    if (i == 3)
    {
        cout << "O cliente não possui uma conta com o número " << num << endl;
        return;
    }
    contas[i]->depositar(valor);
}
