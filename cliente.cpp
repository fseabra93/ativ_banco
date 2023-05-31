#include <iostream>
#include "contaPoupanca.hpp"
#include "contaCorrente.hpp"
#include "cliente.hpp"

using namespace std;

Cliente::Cliente(){
    
}

Cliente::Cliente(string nome, string cpf, float saldoP, float saldoC){
  poupanca = new ContaPoupanca();
  corrente = new ContaCorrente();
  this->nome = nome;
  this->cpf = cpf;
  corrente->depositar(saldoC);
  poupanca->depositar(saldoP);
}

ContaCorrente* Cliente::getContaC(){
  return this->corrente;
}

ContaPoupanca* Cliente::getContaP(){
  return this->poupanca;
}
