#pragma once

class PolReg
{
public:
	double CalcPerimetro();
	virtual double CalcArea() = 0;
	double CalcAngulo();

	int GetNumLados();
	double GetTamLado();

	PolReg(double tamLado, int numLados);
	PolReg();
	~PolReg();

protected:
	int m_numLados;
	double m_tamLado;
};