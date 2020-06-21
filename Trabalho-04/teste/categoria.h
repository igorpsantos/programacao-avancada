#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <vector>
#include <list>
#include <iostream>
#include <assert.h>
#include <string>

using namespace std;
class Categoria {
private:
	// como � apenas uma categoria, com varios valores, no categoriaDAO a gente somaria esses valores da categoria
	// eu criei um orcamento.h e orcamento.cpp e orcamentoDAO caso o salvamento e busca dos dados no txt, como a gente tem que listar as categorias o ideal seria assim
	string _nome;
	//Orcamento _orcamentoTotal;
	float _orcamentoTotal;
	float _gastoAtual;
public:
	Categoria(string nome);
	Categoria(string nome, float orcamento);
	string getNome() const;
	float getOrcamentoTotal() const;
	void listarCategorias() const;
	void setOrcamento(float orcamento);
	bool verificarOrcamento();
	void acrescentaValor(float);
	float consultaEstouro();
	static vector<Categoria> listaCategorias;
};
#endif // CATEGORIA_H