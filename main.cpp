#include <iostream>
#include "cliente.hpp"
using namespace std;


int main() {
  Cliente *joao = new Cliente("João", "111.111.111-11", 100, 100);

  cout << "\n############## Saldo ############" <<endl;
  cout << "Saldo Joao CC: " << joao->getContaC()->getSaldoConta() << endl;
  cout << "Saldo Joao P: " << joao->getContaP()->getSaldoConta() << endl;

  cout << "\n############## Depositar ############" <<endl;
  joao->getContaC()->depositar(200);
  joao->getContaP()->depositar(200);

  cout << "\n############## Saldo ############" <<endl;
  cout << "Saldo Joao CC: " << joao->getContaC()->getSaldoConta() << endl;
  cout << "Saldo Joao P: " << joao->getContaP()->getSaldoConta() << endl;

  cout << "\n############## Sacar ############" <<endl;
  joao->getContaC()->sacar(250);
  joao->getContaP()->sacar(300);

  cout << "\n############## Saldo ############" <<endl;
  cout << "Saldo Joao CC: " << joao->getContaC()->getSaldoConta() << endl;
  cout << "Saldo Joao P: " << joao->getContaP()->getSaldoConta() << endl;
  
}