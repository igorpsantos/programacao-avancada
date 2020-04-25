/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programação Avançada
# Curso: Ciência da Computação
# Atividade: Trabalho - 03
*/

#ifndef PROGRAMACAO_AVANCADA_CLIENTE_H
#define PROGRAMACAO_AVANCADA_CLIENTE_H
#include <string>

class Cliente {
public:
    Cliente(std::string nome) : _nome(nome) {};
    void setNome(std::string nome);
    std::string getNome() const;

private:
    std::string _nome;
};

#endif //PROGRAMACAO_AVANCADA_CLIENTE_H
