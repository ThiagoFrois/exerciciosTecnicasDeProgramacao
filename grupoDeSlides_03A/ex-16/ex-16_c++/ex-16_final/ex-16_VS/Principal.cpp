#include "Principal.hpp"

Principal::Principal()
{
	// Inicializa as relações entre clientes e contas
	setClientesEContas();
}

Principal::~Principal()
{

}

void Principal::setClientesEContas()
{
	// Inicializa os clientes
	clientes[0] = Cliente("Bob", "000.000.000-00");
	clientes[1] = Cliente("Alice", "000.000.001-00");
	clientes[2] = Cliente("Ted", "000.000.002-00");

	// Inicializa as contas
	contas[0] = Conta(1);
	contas[1] = Conta(2);
	contas[2] = Conta(3);
	contas[3] = Conta(4);
	contas[4] = Conta(5);

	// Relaciona os clientes e contas
	clientes[0].criarConta(&contas[0]);
	clientes[0].criarConta(&contas[1]);
	clientes[0].criarConta(&contas[2]);
	clientes[0].vincularConta(&contas[4]);

	clientes[1].criarConta(&contas[3]);
	clientes[1].vincularConta(&contas[0]);

	clientes[2].criarConta(&contas[4]);
	clientes[2].vincularConta(&contas[1]);
	clientes[2].vincularConta(&contas[3]);
}

// Gera relatório de todos os clientes
void Principal::geraRelatorioClientes()
{
	for (int i = 0; i < 3; i++)
	{
		cout << clientes[i].gerarRelatorio();
	}
	cout << "------------------------------------------------" << endl;
}

void Principal::executar()
{
	// Passos para teste do programa
	clientes[0].aplicarRecursos(1, 7200.56);
	clientes[0].aplicarRecursos(2, 1300.45);
	clientes[0].aplicarRecursos(3, 180);
	clientes[1].aplicarRecursos(4, -1000);
	geraRelatorioClientes();

	clientes[1].aplicarRecursos(4, -600);

	geraRelatorioClientes();

	clientes[2].aplicarRecursos(5, 700);

	geraRelatorioClientes();

	clientes[0].aplicarRecursos(4, 800);

	geraRelatorioClientes();

}
