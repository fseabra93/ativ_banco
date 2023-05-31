#include <iostream>
#include "contaCorrente.hpp"
#include "conta.hpp"

using namespace std;

 void ContaCorrente::depositar(float valor){
    this->setSaldoConta(this->saldoConta + valor);
    cout << "Deposito realizado com sucesso" << endl;
  }

  void ContaCorrente::sacar(float saque){
    if(this->saldoConta >= saque*(1+taxaSaque)){
      cout << "Saque de " << saque << " R$ realizado com sucesso" << endl;
      float saqueEfetivo = saque*(1-taxaSaque);
      this->setSaldoConta(this->saldoConta - saqueEfetivo);
    }else{
      cout << "Saque não realizado" << endl;
    }
  }