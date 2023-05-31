#include <iostream>
#include "conta.hpp"

using namespace std;

    float Conta::getSaldoConta(){
      return this->saldoConta;
    }

   void Conta::setSaldoConta(float valor){
     this->saldoConta = valor;
   }