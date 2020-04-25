/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/
#ifndef PROGRAMACAO_AVANCADA_CONTACORRENTE_H
#define PROGRAMACAO_AVANCADA_CONTACORRENTE_H
#include "conta.cpp"

class ContaCorrente : public Conta {
public:
    ContaCorrente() : Conta() {};
    ContaCorrente(int numero, int saldo, Cliente &cliente) : Conta(numero, saldo, cliente) {};
    void aplicaJurosDiarios(int dias);
    virtual ~ContaCorrente() {};

private:
    const float _taxa = 0.0001;
};


#endif //PROGRAMACAO_AVANCADA_CONTACORRENTE_H
