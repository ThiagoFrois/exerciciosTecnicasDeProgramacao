#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{
    // Desaloca todos os objetos da mem�ria e limpa o vetor de contas
    for (int i = 0; i < contas.size(); i++)
    {
        delete contas[i];
    }

    contas.clear();
}

void Principal::executar()
{
    // Vari�veis para leitura da entrada do usu�rio
    int op = 1;
    int dias, numConta, saque, deposito;

    // Verifica qual o tipo de a��o o usu�rio quer fazer
    while (op >= 1 && op <= 5) {
        cout << "===================== MENU =====================" << endl;
        cout << "1 - Criar nova conta\n2 - Ler saldo de conta\n3 - Depositar\n4 - Sacar\n5 - Aplicar juros di�rios\n0 - Sair\n" << endl;
        cout << "Selecione uma opcao: ";
        cin >> op;
       
        if (op >= 2 && op <= 4)
        {
            cout << "N�mero da conta: ";
            cin >> numConta;
        }

        switch (op) {
        case 1:
            cout << "\n\n";
            criarNovaConta();
            break;
        case 2:
            lerSaldo(numConta);
            break;
        case 3:
            cout << "Valor do deposito: ";
            cin >> deposito;
            depositar(deposito, numConta);
            break;
        case 4:
            cout << "Valor do saque: ";
            cin >> saque;
            sacar(saque, numConta);
            break;
        case 5:
            cout << "N�mero de dias: ";
            cin >> dias;
            aplicarJuros(dias);
            break;
        default:
            cout << "Saindo do programa..." << endl;
        }
    }
    
}

void Principal::criarNovaConta()
{
    // Verifica qual tipo de conta o usu�rio quer criar
    int op;
    cout << "================== NOVA CONTA ==================" << endl;
    cout << "1 - Criar nova conta corrente\n2 - Criar nova conta poupan�a" << endl;
    cout << "Selecione uma opcao: ";
    cin >> op;

    // O objeto � criado como ContaCorrente ou ContaPoupan�a, mas armazenado como Conta
    // O identificador �nico � baseado no n�mero de contas j� criadas
    if (op == 1)
        contas.push_back(new ContaCorrente(contas.size() + 1));
    else if (op == 2)
        contas.push_back(new ContaPoupanca(contas.size() + 1));
    else
        cout << "Escolha inv�lida!" << endl;
}

void Principal::lerSaldo(int _numConta)
{
    int i;
    // Procura pela conta com o id dado
    for (i = 0; i < contas.size(); i++)
    {
        if (contas[i]->getNumero() == _numConta)
        {
            cout << "Saldo da conta: " << contas[i]->getSaldo() << endl;
            i = -1;
            break;
        }
    }

    if (i != -1)
        cout << "Essa conta n�o existe!" << endl;
}

void Principal::depositar(double _valor, int _numConta)
{
    int i;
    // Procura pela conta com o id dado
    for (i = 0; i < contas.size(); i++)
    {
        if (contas[i]->getNumero() == _numConta)
        {
            contas[i]->depositar(_valor);
            i = -1;
            break;
        }
    }

    if (i != -1)
        cout << "Essa conta n�o existe!" << endl;
}

void Principal::sacar(double _valor, int _numConta)
{
    int i;
    // Procura pela conta com o id dado
    for (i = 0; i < contas.size(); i++)
    {
        if (contas[i]->getNumero() == _numConta)
        {
            // Verifica se a conta tem saldo suficiente para o saque
            if(!contas[i]->sacar(_valor))
                cout << "Saldo insuficiente" << endl;
         
            i = -1;
            break;
        }
    }

    if (i != -1)
        cout << "Essa conta n�o existe!" << endl;
}

void Principal::aplicarJuros(int _dias)
{
    // Aplica o juros di�rio em todas as contas j� criadas.
    for (int i = 0; i < contas.size(); i++)
    {
        contas[i]->aplicarJurosDiarios(_dias);
    }
}