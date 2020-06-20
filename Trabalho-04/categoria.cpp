#include <string>
#include <vector>
#include <list>
#include <iostream>
#include <assert.h>

#include "categoria.h"

using namespace std;
Categoria::Categoria() {
}

Categoria::Categoria(string nome) : _nome(nome){
}

Categoria::Categoria(string nome, float orcamento) : _nome(nome), _orcamentoTotal(orcamento) {
}

string Categoria::getNome() const {
	return _nome;
}

float Categoria::getOrcamentoTotal() const {
	return _orcamentoTotal;
}

void Categoria::setNome(string nome) {
}

void Categoria::setOrcamento(float orcamento) {
}