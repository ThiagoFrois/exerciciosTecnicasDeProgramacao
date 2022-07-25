// Monitor: Thiago Henrique Frois Menon Cunha
// Data: Semestre 2022/1

#include "principal.hpp"

int main()
{
  try
  {
    Principal principal;

    principal.Executar();
  }
  catch (const char * erro)
  {
    std::cerr << "Erro de execução: " << erro << std::endl;
  }
  
  return 0;
}
