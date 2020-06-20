#ifndef CATEGORIADAO_H
#define CATEGORIADAO_H

#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

#include <vector>
#include <algorithm>
#include "categoria.h"

using namespace std;
class CategoriaDAO
{
public:
	CategoriaDAO();

	void carregarCategorias();

	void adicionarCategoria(string categoria);

	void listarCategorias();

	void ordenarCategorias();

	void salvaLista();


	virtual ~CategoriaDAO();

protected:

private:

	vector<Categoria> listaCategorias;
};

#endif // CATEGORIADAO_H
