/*
# Autor: Igor Pereira dos Santos
# Disciplina: Programa��o Avan�ada
# Curso: Ci�ncia da Computa��o
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
