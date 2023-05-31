#ifndef CONTA_POUPANCA
#define CONTA_POUPANCA
#include "conta.hpp"

class ContaPoupanca : public Conta{
    private:
    float taxaRendimento = 0.05;
  
    public:
    ContaPoupanca(){}
    void depositar(float valor);
    void sacar(float valor);
};
#endif