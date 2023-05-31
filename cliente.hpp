#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "contaCorrente.hpp"
#include "contaPoupanca.hpp"
#include "cliente.hpp"

class Cliente{
  std::string nome;
  std::string cpf;
  ContaPoupanca *poupanca;
  ContaCorrente *corrente;

  public:
  Cliente();
  Cliente(std::string nome, std::string cpf, float saldoP, float saldoC);
  ContaCorrente* getContaC();
  ContaPoupanca* getContaP();
};

#endif