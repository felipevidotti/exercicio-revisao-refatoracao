#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:

    double getsalarioHora() const { return salarioHora; }
    double getquotaMensalVendas() const { return quotaMensalVendas; }
    double gethorasTrabalhadas() const { return horasTrabalhadas; }

    double pagamentoMes(double horasTrabalhadas) {
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double horaExtra = horasTrabalhadas - 8;
        t += horaExtra / 2;
      }
	  return t * salarioHora;
    }
     Empregado(double horasTrabalhadas) { t=horasTrabalhadas; }

	protected:
    double salarioHora;  
    double quotaMensalVendas;
    double t;
};

#endif