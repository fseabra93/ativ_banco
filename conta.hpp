#ifndef CONTA_HPP
#define CONTA_HPP

class Conta{
  protected:
    float saldoConta;
    virtual void depositar(float valor) = 0;
    virtual void sacar(float valor) = 0;

    public:
    float getSaldoConta();
    void setSaldoConta(float valor);
};

#endif