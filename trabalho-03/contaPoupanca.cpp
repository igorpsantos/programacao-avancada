/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/

#include "contaPoupanca.h"

void ContaPoupanca::aplicaJurosDiarios(int dias) {
    for (int i = 0; i < dias; i++) {
        deposita((_saldo / 100.0) * _taxa);
    }
}
