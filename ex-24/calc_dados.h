#ifndef CALCDADOS_H
#define CALCDADOS_H

// Dados: memoria da calculadora.
class CalcDados
{
public:
  CalcDados();
  ~CalcDados();

  void SetOperando(int i, double valor);
  void SetOperacao(unsigned char op);
  double GetOperando(int i) const;
  unsigned char GetOperacao() const;

private:
  double mOperandos[2];
  unsigned char mOperacao;
};

#endif
