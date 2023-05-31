#include <iostream>
#include "contaPoupanca.hpp"
#include "conta.hpp"

using namespace std;

void ContaPoupanca::depositar(float valor){
    this->setSaldoConta(this->saldoConta + valor*(1+taxaRendimento));
    cout << "Deposito realizado com sucesso" << endl;
}

void ContaPoupanca::sacar(float valor){
  if(this->saldoConta >= valor){
    this->setSaldoConta(this->saldoConta - valor);
    cout << "Saque realizado com sucesso" << endl;
  }else{
    cout << "Saque não realizado" << endl;
  }
}