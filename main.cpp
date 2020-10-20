#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include "Empregado.hpp"

int main() {
  //Tirar números mágicos da main
  //Não usar nomes pré-definidos, deixar em aberto para o usuário digitar
  //Criação de Engenheiro.hpp e Vendedor.hpp
  //Colocar as variáveis no private
  //Utilizar getters e setters
  //Criação de vetores que armazenam os dados do problema
  //Adicionar a variável i para preencher os vetores i vezes
  //Deixar as variáveis mais fáceis de serem entendidas
  int i,n;
  std::cin >> nome;
  std::cin >> salarioHora;
  std:: cin >> projetos;
  std::cin >> horasTrabalhadas;
  std::cin >> i;
  n=i;

  for(i=0;i<n;i++)
  {
    std::cout << "Nome: " << eng[i].nome << std::endl;
    std::cout << "Salario Mes: " << eng[i].pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Projetos: " << eng[i].projetos << std::endl;  
    std::cout << std::endl;
  }

  std::cin >> nome;
  std::cin >> salarioHora;
  std:: cin >> quotaMensalVendas;
  std::cin >> horasTrabalhadas;
  std::cin >> j;

  n=j;

  for(j=0;j<n;j++)
  {
    std::cout << "Nome: " << vend[i].nome << std::endl;
    std::cout << "Salario Mes: " << vend[i].pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << vend[i].quotaTotalAnual() << std::endl;  
    std::cout << std::endl;
  }

  return 0;	
}