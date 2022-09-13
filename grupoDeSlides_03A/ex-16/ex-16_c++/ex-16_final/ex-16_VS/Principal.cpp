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
	/* 
	 * Um cliente pode ser titular de até 3 contas.
	 * Note que a relação é dada por associação, 
	 * considerando que a classe cliente recebe 
	 * o objeto do tipo conta via ponteiro. 
	 * O qual inclusive pode ser compartilhado 
	 * entre instâncias da classe cliente.
	 */
	clientes[0].criarConta(&contas[0]);
	clientes[0].criarConta(&contas[1]);
	clientes[0].criarConta(&contas[2]);
	
	/* 
	 * A conta no índice 4 é vinculada ao cliente,
	 * neste caso ele não é o titular dessa conta.
	 * A relação é dada por associação.
	 */
	clientes[0].vincularConta(&contas[4]);

	/*
	* O cliente no índice 1 é titular da conta 
	* no índice 3, e não titular da conta no índice 0.
	*/
	clientes[1].criarConta(&contas[3]);
	clientes[1].vincularConta(&contas[0]);

	/*
	* O cliente no índice 2 é titular da conta
	* no índice 4, e não titular das conta nos índice 1 e 3.
	*/
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
	clientes[1].aplicarRecursos(4, 1000);
	clientes[1].sacarRecursos(4, 500);

	geraRelatorioClientes();

	clientes[1].aplicarRecursos(4, 600);

	geraRelatorioClientes();

	clientes[2].aplicarRecursos(5, 700);

	geraRelatorioClientes();

	clientes[0].aplicarRecursos(4, 800);

	geraRelatorioClientes();

	clientes[1].aplicarRecursos(4, 300);

	geraRelatorioClientes();

	clientes[1].sacarRecursos(4, 200);

	geraRelatorioClientes();
}
