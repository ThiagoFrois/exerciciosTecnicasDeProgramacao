#include "controle.h"

#include <cstring>
#include <iostream>
#include <algorithm>
#include <limits>

Controle::Controle() : mpAlunos(), mpTurma(nullptr)
{

}

Controle::~Controle()
{
  for (auto pAluno : mpAlunos)
    delete pAluno;
  delete mpTurma;
}

void Controle::Executar()
{
  bool executando = true;
  std::cout << "Execucao iniciada." << std::endl;
  if (!CriarTurma()) {
    std::cout << "Erro: turma nao inicializada." << std::endl;
    executando = false;
  }
  std::cout << std::endl;
  while (executando) {
    std::cout << "1 - Matricular novo aluno.\n"
              << "2 - Cancelar aluno matriculado.\n"
              << "3 - Mostrar relatorio.\n"
              << "4 - Sair." << std::endl;
    std::cout << "> " << std::flush;
    int opcao = 0;
    if (!(std::cin >> opcao)) {
      std::cout << "Erro: entrada invalida." << std::endl;
      break;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    switch (opcao) {
      case 1:
        executando = MatricularAluno();
        break;
      case 2:
        executando = CancelarAluno();
        break;
      case 3:
        std::cout << mpTurma->GerarRelatorio() << std::flush;
        break;
      case 4:
        executando = false;
        break;
      default:
        std::cout << "Opcao invalida. Tente novamente." << std::endl;
    }
    std::cout << std::endl;
  }
  std::cout << "Execucao encerrada." << std::endl;
}

bool Controle::CriarTurma()
{
  char nome[256] = "";
  int numVagas = 0;
  std::cout << "Inicializando turma.\n" << "Nome da turma: " << std::flush;
  if (!std::cin.getline(nome, 256)) {
    std::cout << "Erro: entrada invalida." << std::endl;
    return false;
  }
  std::cout << "Numero de vagas: " << std::flush;
  if (!(std::cin >> numVagas) || numVagas < 0) {
    std::cout << "Erro: entrada invalida." << std::endl;
    return false;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  mpTurma = new Turma(nome, numVagas);
  std::cout << "Turma inicializada." << std::endl;
  return true;
}

bool Controle::MatricularAluno()
{
  char nome[256] = "";
  int n1 = 0, n2 = 0;
  std::cout << "Inicializando aluno.\n" << "Nome: " << std::flush;
  if (!std::cin.getline(nome, 256)) {
    std::cout << "Erro: entrada invalida." << std::endl;
    return false;
  } else if (std::strncmp(nome, "fim", 256) == 0) {
    std::cout << "Inicializacao abortada." << std::endl;
    return true;
  }
  std::cout << "Primeira nota parcial (inteiro 0-100): " << std::flush;
  if (!(std::cin >> n1) || n1 < 0 || n1 > 100) {
    std::cout << "Erro: entrada invalida." << std::endl;
    return false;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cout << "Segunda nota parcial (inteiro 0-100): " << std::flush;
  if (!(std::cin >> n2) || n2 < 0 || n2 > 100) {
    std::cout << "Erro: entrada invalida." << std::endl;
    return false;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  Aluno *pAluno = new Aluno(nome, n1, n2);
  mpAlunos.push_back(pAluno);
  std::cout << "Aluno inicializado." << std::endl;
  mpTurma->MatricularAluno(pAluno);
  return true;
}

bool Controle::CancelarAluno()
{
  char nome[256] = "";
  std::cout << "Cancelando aluno.\n" << "Nome: " << std::flush;
  if (!std::cin.getline(nome, 256)) {
    std::cout << "Erro: entrada invalida." << std::endl;
    return false;
  }
  auto it = std::find_if(mpAlunos.begin(), mpAlunos.end(), [nome](Aluno *pA) {
    return (std::strncmp(nome, (pA->GetNome()).c_str(), 256) == 0);
  });
  if (it == mpAlunos.end()) {
    std::cout << "Erro: nao se encontrou aluno com este nome." << std::endl;
    return true;
  }
  mpTurma->CancelarAluno(*it);
  return true;
}
