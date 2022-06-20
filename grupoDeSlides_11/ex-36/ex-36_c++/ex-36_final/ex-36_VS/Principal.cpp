#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{
    // Desaloca a memória do vetor de empregados
    for (int i = 0; i < empregados.size(); i++)
    {
        delete(empregados[i]);
    }
    empregados.clear();
}

void Principal::executar()
{
    // Variáveis para leitura da entrada do usuário
    int numEmpregados;
    int op, cpf, horaTrabalhada;
    float bonus;
    string nome, cargo;

    // Variavel para somar todos os salários dos empregados
    double somaSalarios = 0;

    // Entra com o número de empregados
    cout << "Numero de empregados que deseja inserir: ";
    cin >> numEmpregados;

    // Entra com os dados do empregados
    for (int i = 0; i < numEmpregados; i++)
    {
        cout << "Entre com o indice do funcionario: " << endl;
        cout << "1. Faxineiro" << endl;
        cout << "2. Empregado" << endl;
        cout << "3. Gerente" << endl;
        cin >> op;


        // Verifica se é um escolha válida
        if (op < 1 || op > 3) 
        {
            cout << "Indice invalido. Finalizando programa!" << endl;
            break;
        }
        else
        {

            // Lê do usuário os dados do empregado
            cout << "Nome: ";
            cin >> nome;
            cout << "CPF: ";
            cin >> cpf;
            cout << "Horas trabalhadas: ";
            cin >> horaTrabalhada;

            // Cria um objeto para a referência de empregado no vetor
            if (op == 1) 
            {
                empregados.push_back(new Faxineiro(nome, cpf));
            }
            else if (op == 2)
            {
                cout << "Cargo: ";
                cin >> cargo;
                empregados.push_back(new Empregado(nome, cpf, cargo));
            }
            else 
            {
                cout << "Bonus: ";
                cin >> bonus;
                empregados.push_back(new Gerente(nome, cpf, bonus));
            }

            // Seta as horas trabalhadas
            empregados.back()->setHorasTrabalhadas(horaTrabalhada);
      
        }
    }

    for (int i = 0; i < numEmpregados; i++)
    {
        // Calcula o salário do empregado, e soma em somaSalarios
        somaSalarios += empregados[i]->calculaSalario();
    }

    // Imprime a soma total dos salaários
    cout << "A soma dos salarios eh " << somaSalarios << endl;
}