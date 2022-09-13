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

// V�ncula o cliente a uma conta j� criada
void Cliente::vincularConta(Conta* _conta)
{
    if (!_conta)
        return;

    if (_conta->getNumUsuarios() == 2) 
    {
        cout << "O n�mero m�ximo de clientes nessa conta j� foi atingido." << endl;
        return;
    }
    else if (numContasV == 10)
    {
        cout << "N�mero m�ximo de contas n�o titulares j� foi atingido." << endl;
        return;
    }
    contas[3 + numContasV] = _conta;
}

// Se um usu�rio cria uma conta ele � o titular.
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
    //Reserva mem�ria de forma persistente, desta forma podemos retornar essa vari�vel
    static char relatorio[1000]{0};
    char aux[1000];

    strcpy(relatorio, "");
    strcpy(aux, "");
    
    // Guarda os dados do cliente com uma string em aux
    sprintf(aux, "Nome: %s e CPF: %s\n", nome, cpf);

    // Concatena em relat�rio
    strcat(relatorio, aux);

    // Concatena os dados das contas do cliente em relat�rio usanda a vari�vel aux
    for (i = 0; i < 13; i++)
    {
        if (contas[i] == nullptr)
            continue;
        if(i < 3)
            sprintf(aux, "Conta %d (TITULAR): -> N�mero da conta: %d | Saldo da conta: R$ %.2f\n", j, contas[i]->getNumero(), contas[i]->getSaldo());
        else 
            sprintf(aux, "Conta %d: -> N�mero da conta: %d | Saldo da conta: R$ %.2f\n", j, contas[i]->getNumero(), contas[i]->getSaldo());
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
    // S� � poss�vel aplicar recursos com valores positivos
    if (_valor <= 0) {
        cout << "Valor de dep�sito inv�lido: " << _valor << endl;
        return;
    }

    /*
    * Acha a conta e deposita os recursos.
    * Note que o cliente pode depositar recursos 
    * em qualquer conta que em que ele est� associado,
    * independente se � o titular ou n�o.
    */
    for (int i = 0; i < 13; i++) {
        /* 
        * Se o ponteiro foi vinculado a um objeto conta e o n�mero da conta 
        * corresponder ao fornecido, realiza-se o dep�sito.
        */
        if (contas[i] && contas[i]->getNumero() == _numConta) {
            contas[i]->depositar(_valor);
            return;
        }
    }

    cout << "O cliente n�o possui uma conta com o n�mero " << _numConta << endl;
    return;    
}

void Cliente::sacarRecursos(int _numConta, double _valor)
{
    //S� � poss�vel sacar valores positivos 
    if (_valor <= 0) {
        cout << "Valor de saque inv�lido: " << _valor << endl;
        return;
    }

    /*
    * Acha a conta e saca os recursos, se estiverem dispon�veis.
    * Note que nessa implementa��o o cliente pode sacar recursos 
    * em qualquer conta que em que ele est� associado,
    * independente se � o titular ou n�o.
    */
    for (int i = 0; i < 13; i++) {
        /*
        * Se o ponteiro foi vinculado a um objeto conta e o n�mero da conta
        * corresponder ao fornecido, realiza-se o dep�sito.
        */
        if (contas[i] && contas[i]->getNumero() == _numConta) {
            if (contas[i]->getSaldo() >= _valor) {
                contas[i]->sacar(_valor);
            }
            else {
                cout << "Saldo indispon�vel para saque: " << _valor << endl;
            }
            return;
        }
    }
    
    cout << "O cliente n�o possui uma conta com o n�mero " << _numConta << endl;
    return;
}
