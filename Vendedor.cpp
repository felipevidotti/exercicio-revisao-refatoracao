#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

Vendedor :: Vendedor(std :: string nome, double quotamvendas,double salariohvend )
    {
         this->_nome=nome;
         this->_quotamvendas=quotamvendas;
		 this->_salariohvend=salariohvend;
    }

class Vendedor : public Empregado {

	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}
	
};

Vendedor :: Empregado()
    {
      salarioheng=getsalarioHora();
      double pagamentoMes(horasTrabalhadas)
	  Vendedor* new_vend = new vend(nome);
    }
Vendedor :: ~Vendedor()
{
	delete new_vend;
}