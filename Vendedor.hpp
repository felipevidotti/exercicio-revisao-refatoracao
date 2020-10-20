#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
       
       std::string getnome() const { return nome; }
       double getquotaMensalVendas() const { return quotamvendas; } 
      //Assinatura dos métodos
      
  protected:
      std::string _nome;  
      double _salariohvend;
      double _quotamvendas;
	
};

#endif