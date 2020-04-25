/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/

#include "conta.h"

Conta::Conta() : _numero(0), _saldo(0), _cliente(nullptr) {
    std::cout << "Construtor vazio de Conta" << std::endl;
};

Conta::Conta(int numero, float saldo, Cliente &cliente) : _numero(numero), _saldo(saldo * 100), _cliente(&cliente) {
    std::cout << "Criando conta " << numero << " do cliente " << cliente.getNome() << std::endl;
};

void Conta::deposita(float valor) {
    _saldo += valor * 100;
};

void Conta::retira(float valor) {
    _saldo -= valor * 100;
};

void Conta::transfere(Conta *contaDestino, float valor) {
    retira(valor);
    contaDestino->deposita(valor);
};

void Conta::extrato() const {
    std::cout.precision(2);
    std::cout << "Conta: " << _numero << " - Saldo: " << std::fixed << float(_saldo / 100.0) << std::endl;
};
