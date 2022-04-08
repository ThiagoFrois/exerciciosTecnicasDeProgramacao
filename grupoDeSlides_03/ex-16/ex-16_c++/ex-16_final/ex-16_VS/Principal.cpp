#include "Principal.hpp"

Principal::Principal()
{
	setClientesEContas();
}

Principal::~Principal()
{

}

void Principal::setClientesEContas()
{
	clientes[0] = Cliente("Bob", "000.000.000-00");
	clientes[1] = Cliente("Alice", "000.000.001-00");
	clientes[2] = Cliente("Ted", "000.000.002-00");

	c1 = Conta(0);
	c2 = Conta(1);
	c3 = Conta(2);

	clientes[0].criarConta(&c1);
	clientes[0].criarConta(&c2);
	clientes[0].criarConta(&c3);

	clientes[1].criarConta(&c3);

	clientes[2].criarConta(&c2);

}

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
	geraRelatorioClientes();

	clientes[0].aplicarRecursos(0, 7200.56);
	clientes[0].aplicarRecursos(1, 1300.45);
	clientes[0].aplicarRecursos(2, 180);

	geraRelatorioClientes();

	clientes[1].aplicarRecursos(2, -600);

	geraRelatorioClientes();

	clientes[2].aplicarRecursos(1, 700);

	geraRelatorioClientes();

	clientes[0].removerConta(1);

	geraRelatorioClientes();

	clientes[0].criarConta(&c2);

	clientes[0].criarConta(&c2);

	clientes[1].aplicarRecursos(2, 800);

	geraRelatorioClientes();

}
