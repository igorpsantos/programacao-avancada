/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/

#ifndef PROGRAMACAO_AVANCADA_CONTA_H
#define PROGRAMACAO_AVANCADA_CONTA_H
#include "cliente.cpp"

class Conta {
public:
    Conta();
    Conta(int numero, float saldo, Cliente &cliente);
    void deposita(float valor);
    void retira(float valor);
    void transfere(Conta *contaDestino, float valor);
    void extrato() const;
    virtual void aplicaJurosDiarios(int dias) = 0;
    virtual ~Conta() {};

protected:
    int _numero;
    int _saldo;
    Cliente * _cliente;
};


#endif //PROGRAMACAO_AVANCADA_CONTA_H
