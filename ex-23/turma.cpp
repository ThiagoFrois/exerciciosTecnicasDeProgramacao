#include "turma.h"

#include <iostream>
#include <sstream>
#include <algorithm>

Turma::Turma(const std::string &nome, int numVagas)
    : mNome(nome), mNumVagas(numVagas), mpAlunos()
{

}

Turma::~Turma()
{

}

bool Turma::MatricularAluno(const Aluno *pAluno)
{
  if (pAluno == nullptr) {
    std::cout << "Erro: tentou-se matricular aluno nulo." << std::endl;
    return false;
  } else if (mNumVagas <= 0) {
    std::cout << "Erro: turma lotada. " << pAluno->GetNome()
              << " nao matriculado." << std::endl;
    return false;
  } else {
    mpAlunos.push_back(pAluno);
    --mNumVagas;
    std::cout << pAluno->GetNome() << " matriculado." << std::endl;
    return true;
  }
}

bool Turma::CancelarAluno(const Aluno *pAluno)
{
  if (pAluno == nullptr) {
    std::cout << "Erro: tentou-se cancelar aluno nulo." << std::endl;
    return false;
  } else {
    auto it = std::find(mpAlunos.begin(), mpAlunos.end(), pAluno);
    if (it == mpAlunos.end()) {
      std::cout << "Erro: nao se encontrou " << pAluno->GetNome()
                << " na turma." << std::endl;
      return false;
    } else {
      mpAlunos.erase(it);
      ++mNumVagas;
      std::cout << pAluno->GetNome() << " cancelado." << std::endl;
      return true;
    }
  }
}

std::string Turma::GerarRelatorio()
{
  std::stringstream relatorio;
  double mediaTurma = 0.0, mediaAluno = 0.0;
  int numAprovados = 0, numFinal = 0, numReprovados = 0;
  for (auto pAluno : mpAlunos) {
    mediaAluno = (pAluno->GetPrimeiraNotaParcial()
                  + pAluno->GetSegundaNotaParcial())/2.0;
    mediaTurma += mediaAluno;
    if (mediaAluno >= 60.0) {
        ++numAprovados;
    } else if (mediaAluno >= 20.0) {
        ++numFinal;
    } else {
        ++numReprovados;
    }
  }
  mediaTurma /= mpAlunos.size();
  relatorio << "Relatorio de " << mNome << "\n";
  relatorio << "Media da turma: " << mediaTurma << "\n";
  relatorio << "Alunos aprovados: " << numAprovados << "\n";
  relatorio << "Alunos em final: " << numFinal << "\n";
  relatorio << "Alunos reprovados: " << numReprovados << "\n";
  relatorio << "Alunos abaixo da media da turma:" << "\n";
  for (auto pAluno : mpAlunos) {
    mediaAluno = (pAluno->GetPrimeiraNotaParcial()
                  + pAluno->GetSegundaNotaParcial())/2.0;
    if (mediaAluno < mediaTurma)
      relatorio << "  * " << pAluno->GetNome() << "\n";
  }
  relatorio << std::flush;
  return relatorio.str();
}
