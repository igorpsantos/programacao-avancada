/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programa��o Avan�ada
# Curso: Ci�ncia da Computa��o
# Atividade: Trabalho - 03
*/

#ifndef PROGRAMACAO_AVANCADA_CONTAPOUPANCA_H
#define PROGRAMACAO_AVANCADA_CONTAPOUPANCA_H
#include "conta.h"

class ContaPoupanca : public Conta {
public:
    ContaPoupanca(int numero, int saldo, Cliente &cliente) : Conta(numero, saldo, cliente) {};
    void aplicaJurosDiarios(int dias);
    virtual ~ContaPoupanca() {};

private:
    const float _taxa = 0.0008;
};


#endif //PROGRAMACAO_AVANCADA_CONTAPOUPANCA_H
