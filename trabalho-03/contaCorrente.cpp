/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programa��o Avan�ada
# Curso: Ci�ncia da Computa��o
# Atividade: Trabalho - 03
*/

#include "contaCorrente.h"

void ContaCorrente::aplicaJurosDiarios(int dias) {
    for (int i = 0; i < dias; i++) {
        deposita((_saldo / 100.0) * _taxa);
    }
}
