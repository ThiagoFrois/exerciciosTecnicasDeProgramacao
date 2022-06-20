#include "Principal.hpp"

Principal::Principal()
{

}

Principal::~Principal()
{

}

void Principal::executar()
{
    Empregado* ptrEmpregado = nullptr;
    
    string nome, cargo;
    int op, cpf, horaTrabalhada;
    float bonus;

    cout << "Entre com o indice do funcionario: " << endl;
    cout << "1. Faxineiro" << endl;
    cout << "2. Empregado" << endl;
    cout << "3. Gerente" << endl;
    cin >> op;

    if (op < 1 || op > 3)
        cout << "Indice invalido. Finalizando programa!" << endl;
    else {

        cout << "Nome: ";
        cin >> nome;
        cout << "CPF: ";
        cin >> cpf;
        cout << "Horas trabalhadas: ";
        cin >> horaTrabalhada;

        if (op == 1) {
            ptrEmpregado = new Faxineiro(nome, cpf);
        }
        else if (op == 2) {
            cout << "Cargo: ";
            cin >> cargo;
            ptrEmpregado = new Empregado(nome, cpf, cargo);
        }
        else {
            cout << "Bonus: ";
            cin >> bonus;
            ptrEmpregado = new Gerente(nome, cpf, bonus);
        }

        if (ptrEmpregado != nullptr) {
            ptrEmpregado->mostraDados();
            cout << "Salario: R$ " << ptrEmpregado->calculaSalario(horaTrabalhada) << endl;
            delete(ptrEmpregado);
        }
        else {
            cout << "Nao foi possivel criar o funcionario!" << endl;
        }
    }
}