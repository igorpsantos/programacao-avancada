#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <string>

#include "orcamento.h"


using namespace std;
class Categoria {
private:
	// como é apenas uma categoria, com varios valores, no categoriaDAO a gente somaria esses valores da categoria
	// eu criei um orcamento.h e orcamento.cpp e orcamentoDAO caso o salvamento e busca dos dados no txt, como a gente tem que listar as categorias o ideal seria assim
	string _nome;
	//Orcamento _orcamentoTotal;
	float _orcamentoTotal = 0.00;
public:
	Categoria();
	Categoria(string nome);
	Categoria(string nome, float orcamento);

	string getNome() const;
	float getOrcamentoTotal() const;

	void setNome(string nome);
	void setOrcamento(float orcamento);
};
#endif // CATEGORIA_H