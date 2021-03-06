#ifndef CONTROLLERCATEGORIA_H
#define CONTROLLERCATEGORIA_H

#include <string>
#include <vector>
#include <iostream>
#include <vector>
#include "categoria.h"
#include "categoriaDAO.h"
#include "InterfaceUsuario.h"

class ControllerCategoria {
private:
	vector<Categoria> listaCategorias;
	CategoriaDAO categoriaDAO;
	InterfaceUsuario interfaceUsuario;
public:
	void executar();

	void adicionarCategoria(string nome);

	void carregarCategorias();

	void salvarCategorias();
	float ControllerCategoria::OrcamentoCategoria(Categoria);
	void ControllerCategoria::RegistrosCategoria(Categoria);
	float ControllerCategoria::EstouroCategoria(Categoria);
};

#endif // !CONTROLLERCATEGORIA_H

