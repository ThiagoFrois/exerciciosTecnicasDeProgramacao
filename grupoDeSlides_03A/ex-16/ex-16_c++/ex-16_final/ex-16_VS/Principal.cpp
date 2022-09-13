#include "Principal.hpp"

Principal::Principal()
{
	// Inicializa as rela��es entre clientes e contas
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
	 * Um cliente pode ser titular de at� 3 contas.
	 * Note que a rela��o � dada por associa��o, 
	 * considerando que a classe cliente recebe 
	 * o objeto do tipo conta via ponteiro. 
	 * O qual inclusive pode ser compartilhado 
	 * entre inst�ncias da classe cliente.
	 */
	clientes[0].criarConta(&contas[0]);
	clientes[0].criarConta(&contas[1]);
	clientes[0].criarConta(&contas[2]);
	
	/* 
	 * A conta no �ndice 4 � vinculada ao cliente,
	 * neste caso ele n�o � o titular dessa conta.
	 * A rela��o � dada por associa��o.
	 */
	clientes[0].vincularConta(&contas[4]);

	/*
	* O cliente no �ndice 1 � titular da conta 
	* no �ndice 3, e n�o titular da conta no �ndice 0.
	*/
	clientes[1].criarConta(&contas[3]);
	clientes[1].vincularConta(&contas[0]);

	/*
	* O cliente no �ndice 2 � titular da conta
	* no �ndice 4, e n�o titular das conta nos �ndice 1 e 3.
	*/
	clientes[2].criarConta(&contas[4]);
	clientes[2].vincularConta(&contas[1]);
	clientes[2].vincularConta(&contas[3]);
}

// Gera relat�rio de todos os clientes
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
