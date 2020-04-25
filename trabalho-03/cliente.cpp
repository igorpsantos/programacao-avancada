/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/

#include "cliente.h"

void Cliente::setNome(std::string nome) {
    _nome = nome;
};

std::string Cliente::getNome() const {
    return _nome;
};
