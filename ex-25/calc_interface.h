#ifndef CALCINTERFACE_H
#define CALCINTERFACE_H

// Interface com usuario: display e teclado.
class CalcInterface
{
public:
  CalcInterface();
  ~CalcInterface();

  double RecebeOperando(int i) const;
  unsigned char RecebeOperacao() const;
  void MostraBoasVindas() const;
  void MostraResultado(double res) const;
};

#endif
