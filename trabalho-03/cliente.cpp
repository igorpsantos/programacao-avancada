/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programa��o Avan�ada
# Curso: Ci�ncia da Computa��o
# Atividade: Trabalho - 03
*/

#include "cliente.h"

void Cliente::setNome(std::string nome) {
    _nome = nome;
};

std::string Cliente::getNome() const {
    return _nome;
};
