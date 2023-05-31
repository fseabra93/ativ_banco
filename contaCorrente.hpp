#ifndef CONTA_CORRENTE
#define CONTA_CORRENTE
#include "conta.hpp"

  class ContaCorrente : public Conta{
    private:
    float taxaSaque = 0.05;
  
    public:
    void depositar(float valor);
    void sacar(float valor);
};
#endif