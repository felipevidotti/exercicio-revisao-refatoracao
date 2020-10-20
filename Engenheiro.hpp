#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>
#include "Empregado.hpp"
#include "Engenheiro.hpp"

class Engenheiro : public Empregado {

  public:

   std::string getnome()  { return nome; }
   int getprojetos()  { return projetos; }
   //Assinatura dos métodos
   Engenheiro(std::string nome, int _projetos, double salarioheng);
   ~Engenheiro();

  protected:
      std::string _nome;  
	  int _projetos;
      double _salarioheng;
      double t;

};

#endif